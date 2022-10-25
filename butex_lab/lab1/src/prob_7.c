// 7. write a c program to convert Celsius temperature to Fahrenheit temperature

#include<stdio.h>

int main()
{
    float c, f;

    printf("celsius = ");
    scanf("%f", &c);

    f = (9.0/5.0) * c + 32;

    printf("fahrenheit = %f", f);

    return 0;
}