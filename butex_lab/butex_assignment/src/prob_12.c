//  Write a C program to calculate product of digits of a number

#include<stdio.h>

int main()
{
	int num, product = 1;

	scanf("%d", &num);

	while(num != 0){
		product *= num % 10;
		num /= 10;
	}

	printf("%d", product);

	return 0;
}