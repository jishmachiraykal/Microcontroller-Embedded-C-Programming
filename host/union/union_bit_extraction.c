#include <stdio.h>
#include <stdint.h>

union Packet{
    uint32_t packetValue;
struct {
    uint32_t crc:2;
    uint32_t status:1;
    uint32_t payload:12;
    uint32_t bat:3;
    uint32_t sensor:3;
    uint32_t longAddr:8;
    uint32_t shortAddr:2;
    uint32_t addrMode:1;
}packetFields;

};

int main (void) {
    union Packet packet;
    printf("Enter the 32 bit packet value\n");
    scanf("%X", &packet.packetValue);
    printf("crc value       :   %#x %I64u\n", packet.packetFields.crc);// # is to print result in 0xsomevalue
    printf("status value    :   %#x %I64u\n", packet.packetFields.status);
    printf("payload value   :   %#x %I64u\n", packet.packetFields.payload);
    printf("bat value       :   %#x %I64u\n", packet.packetFields.bat);
    printf("sensor value    :   %#x %I64u\n", packet.packetFields.sensor);
    printf("longAddr value  :   %#x %I64u\n", packet.packetFields.longAddr);
    printf("shortAddr value :   %#x %I64u\n", packet.packetFields.shortAddr);
    printf("addrMode value  :   %#x %I64u\n", packet.packetFields.addrMode);
    printf("Size of union is %I64u\n",packet);
}