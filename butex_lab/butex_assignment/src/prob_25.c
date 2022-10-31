//  Write a program in C to convert a binary number into a decimal number without using array, function and while loop.
/*
111000011
= 1 * 2^0 + 1 * 2^1
decimal = digit * 10^i + 

*/

#include<stdio.h>
#include <math.h>

int main()
{
	int bin, digit, decimal, temp, i, n;

	scanf("%d", &bin);

	temp = bin;
	decimal = 0;
	n=0;
	while(temp != 0){
		digit = temp % 10;
		decimal += digit * pow(2, n);

		n++;
		temp /= 10;
	}

	printf("0b%d = %d", bin, decimal);

	return 0;
}