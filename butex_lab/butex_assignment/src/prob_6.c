//  Write a C program to find sum of all even numbers between 1 to n

#include<stdio.h>

int main()
{
	int i, n, sum=0;

	scanf("%d", &n);

	for(i=2; i<=n; i+=2){
		sum += i;
	}

	printf("sum of all even numbers = %d", sum);

	return 0;
}