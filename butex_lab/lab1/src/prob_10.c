// 10. write a c program to ceil, round and floor a floating point number.

#include<stdio.h>
#include<math.h>

int main()
{
    float num;

    printf("num = ");
    scanf("%f", &num);

    printf("ceiled = %f\n", ceil(num));
    printf("rounded = %f\n", round(num));
    printf("floored = %f", floor(num));

    return 0;
}