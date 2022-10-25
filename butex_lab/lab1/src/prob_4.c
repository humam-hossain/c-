// 4. write a c program to calculate the area of a triangle using three sides.

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float s, area;

    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);

    s = (a + b + c) / 2.0;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area = %f", area);

    return 0;
}