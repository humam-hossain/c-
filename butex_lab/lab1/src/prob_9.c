// 9. write a c program to swap two numbers.

#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("\nReuslt:\na = %d\nb = %d", a, b);

    return 0;
}