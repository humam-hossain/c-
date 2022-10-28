//  Write a C program to find first and last digit of a number

#include<stdio.h>

int main()
{
	int num, first, last;

	scanf("%d", &num);

	last = num % 10;

	while(num != 0){
		first = num % 10;
		num /= 10;
	}

	printf("first digit = %d\nlast digit = %d", first, last);

	return 0;
}