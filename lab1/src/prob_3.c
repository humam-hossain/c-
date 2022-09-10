// 3. write a c program to calculate the area of a triangle using 1/2 * base  height.

#include <stdio.h>

int main()
{
    int base, height;

    printf("base = ");
    scanf("%d", &base);
    printf("height = ");
    scanf("%d", &height);

    printf("Area = %f", (0.5 * base * height));

    return 0;
}