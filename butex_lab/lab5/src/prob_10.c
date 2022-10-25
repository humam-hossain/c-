// 10. write a c program to reverse a number.

#include<stdio.h>

int main()
{
	int num, reverse=0, rem;

	scanf("%d", &num);

	while(num != 0){
		rem = num % 10;
		reverse = reverse * 10 + rem;
		num /= 10;
	}

	printf("Reversed: %d", reverse);

	return 0;
}