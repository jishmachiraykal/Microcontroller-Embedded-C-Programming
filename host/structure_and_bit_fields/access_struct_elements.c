#include <stdio.h>
#include <stdint.h>

struct carModel{
float car_weight;
unsigned int car_number;
uint32_t carPrice;
uint16_t carmaxSpeed;
};

int main()
{
struct carModel carVW = {2000, 1234, 120000, 100};// order is imp here. C89 method
struct carModel carFord= {1000, 5678, 110000, 120};
//OR
struct carModel carHundai= {.carmaxSpeed=110,.carPrice= 300000,.car_number =100910, .car_weight=120};// C99 method using designated initializers

printf("Details of car Ford:\n");
printf("Car weight =%f\nCar number= %u\nCar Price=%u\nCar Max Speed= %u\n", carFord.car_weight, carFord.car_number, carFord.carPrice, carFord.carmaxSpeed);
return 0;
}