//  Write a C program to swap first and last digits of a number

#include <stdio.h>

int main()
{
    int i, n, div = 1, first, last, temp, digit = 0;
    
	scanf("%d", &n);
    temp = n;
    last = n % 10;

    while (temp != 0)
    {
        first = temp % 10;
        digit++;
        temp = temp / 10;
    }
    
	temp = n;
    temp = temp / 10;
    temp = temp * 10 + first;

    for (i = 1; i < digit; i++)
    {
        div *= 10;
    }

    temp = last * div + temp % div;

    printf("%d", temp);

    return 0;
}