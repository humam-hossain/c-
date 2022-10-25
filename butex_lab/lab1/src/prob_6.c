// 6. write a c program to calculate the area of a circle

#include <stdio.h>

int main()
{
    float r;

    printf("r = ");
    scanf("%f", &r);
    printf("Area = %f", (3.1416 * r * r));

    return 0;
}