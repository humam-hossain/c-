//  Write a C program to find sum of all odd numbers between 1 to n

#include<stdio.h>

int main()
{
	int i, n, sum=0;

	scanf("%d", &n);

	for(i=1; i<=n; i+=2){
		sum += i;
	}

	printf("sum of all odd numbers = %d", sum);

	return 0;
}