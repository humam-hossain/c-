// 5. write a c program to calculate the area of a rectangle

#include<stdio.h>

int main()
{
    float length, width;

    printf("length = ");
    scanf("%f", &length);
    printf("width = ");
    scanf("%f", &width);

    printf("Area = %f", length * width);

    return 0;
}