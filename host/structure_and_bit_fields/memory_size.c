// reducing the memory size.This can be done by bitfields
// this is useful when dealing with network fields

#include <stdio.h>
#include <stdint.h>

struct packetValue {
    // all these variables will be refering to different bitfields of single uint32_t memory(4 bytes only)
    // it is better not to change the order of the member elements even it consumes same memory size
    uint32_t crc:2;// this will only takes 2 its for crc instead of wasting the memory
    uint32_t status:1;
    uint32_t payload:12;
    uint32_t bat:3;
    uint32_t sensor:3;
    uint32_t longAddr:8;
    uint32_t shortAddr:2;
    uint32_t addrMode:1;
};

int main (void) {
    uint32_t packetValue;
    printf("Enter the packetValue\n");
    scanf("%X", &packetValue);

    struct packetValue packet;
    packet.crc = (uint8_t) (packetValue & 0x3);
    packet.status = (uint8_t) ((packetValue >> 2) & 0x1); // right shift packetValue by 2, so that it
    // comes to least significant bit. status is in 3rd bit i.e, 0,1,2 =2
    packet.payload = (uint16_t) ((packetValue >> 3) & 0xFFF);// here FFF is masking the values
    // F= four 1's, so FFF = 12 1's hence 12 bits
    packet.bat = (uint8_t) ((packetValue >> 15) & 0x7);
    packet.sensor = (uint8_t) ((packetValue >> 18) & 0x7);
    packet.longAddr = (uint8_t) ((packetValue >> 21) & 0xFF);
    packet.shortAddr = (uint8_t) ((packetValue >> 29) & 0x3);
    packet.addrMode = (uint8_t) ((packetValue >> 31) & 0x1);
    printf("crc value       :   %#x %I64u\n", packet.crc);// # is to print result in 0xsomevalue
    printf("status value    :   %#x %I64u\n", packet.status);
    printf("payload value   :   %#x %I64u\n", packet.payload);
    printf("bat value       :   %#x %I64u\n", packet.bat);
    printf("sensor value    :   %#x %I64u\n", packet.sensor);
    printf("longAddr value  :   %#x %I64u\n", packet.longAddr);
    printf("shortAddr value :   %#x %I64u\n", packet.shortAddr);
    printf("addrMode value  :   %#x %I64u\n", packet.addrMode);
    printf("Size of struct is %I64u\n",packet);
}