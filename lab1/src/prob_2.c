// 2. write a c program to calculate the average of three numbers.

#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);
    printf("%f", (a+b+c)/3.0);

    return 0;
}