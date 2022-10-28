//  Write a C program to print all natural numbers in reverse (from n to 1)

#include<stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	while(n!=0){
		printf("%d ", n);
		n--;
	}

	return 0;
}