//  Write a C program to print all odd number between 1 to 100.

#include<stdio.h>

int main()
{
	int i;

	for(i=1; i<=100; i+=2){
		printf("%d ", i);
	}

	return 0;
}