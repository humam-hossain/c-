//  Write a C program to print all natural numbers from 1 to n.

#include<stdio.h>

int main()
{
	int i, num;

	scanf("%d", &num);

	for(i=1; i<=num; i++){
		printf("%d ", i);
	}
	
	return 0;
}