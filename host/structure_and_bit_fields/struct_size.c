#include <stdio.h>
#include <stdint.h>

struct carModel{
float car_weight;
uint32_t car_number;
uint32_t carPrice;
uint16_t carmaxSpeed;
};

int main()
{
struct carModel carVW = {2021, 15000, 220, 130};// order is imp here. C89 method

printf("Size of struct carModel is %I64u\n", sizeof(struct carModel));
return 0;
}

//Note: Output will vary from the original bytes due to structure padding