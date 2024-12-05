#include <stdio.h>
#include <stdint.h>

struct packetValue {
uint8_t crc;
uint8_t status;
uint16_t payload;
uint8_t bat;
uint8_t sensor;
uint8_t longAddr;
uint8_t shortAddr;
uint8_t addrMode;
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
    printf)("Size of struct is %I64u\n",packet);
}