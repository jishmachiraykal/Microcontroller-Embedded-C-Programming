#include <stdio.h>
#include <stdint.h>

int main()
{
    uint64_t total_income,tax_payable;
    double temp_income;
    printf("Enter the total income in $: ");
    scanf("%lf", &temp_income);
    if(temp_income<0){
        printf("Income cannot be -ve");
    }
    total_income=(uint64_t) temp_income;
if(total_income<= 9525){
        tax_payable=0;
    } else if(total_income>= 9526 && total_income <=38700){
        tax_payable= total_income * 0.12;
    } else if(total_income>= 38701 && total_income <=82500){
        tax_payable= total_income * 0.22;
    }else if(total_income>= 82501){
        tax_payable= total_income * 0.32;
        tax_payable= tax_payable+ 1000;
    }
    printf("Total payable tax is $ %I64u",tax_payable);

    return 0;
}