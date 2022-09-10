// 8. write a c program to convert fahrenheit temperature to celsius temperature.

#include<stdio.h>

int main()
{
    float f, c;

    printf("fahrenheit = ");
    scanf("%f", &f);

    c = (5.0/9.0)*(f-32);
    printf("Celsius = %f", c);

    return 0;
}