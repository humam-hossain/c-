// Write a C program that takes number of units consumed by the customer and returns calculated 
// Electricity Bill as per following conditions: 
//  First 100 Units will be charged at $1/unit. 
//  Next 100 Units will be charged at $2/unit. 
//  Next 100 Units will be charged at $3/unit. 
//  Next 200 Units will be charged at $4/unit. 
//  Next Units will be charged at $5/unit. 
//  10% tax to be added in the final amount. 
//  Extra $15 to be added for Meter Charge.

#include <stdio.h>

int main()
{
    int units;
    double bill;

    // info
    printf("Department: type_dep\n");
    printf("Name: type_name\n");
    printf("ID: type_id\n\n");

    scanf("%d", &units);

    if(units <= 100){
        bill = units;
    }else if(units <= 200){
        bill =  100 + (units - 100) * 2; 
    }else if(units <= 300){
        bill =  100 + 100 * 2 + (units - 200) * 3; 
    }else if(units <= 500){
        bill = 100 + 100 * 2 + 100 * 3 + (units - 300) * 4;
    }else{
        bill = 100 + 100 * 2 + 100 * 3 + 200 * 4 + (units - 500) * 5;
    }

    bill = bill * 1.1 + 15;

    printf("%lf", bill);

    return 0;

}