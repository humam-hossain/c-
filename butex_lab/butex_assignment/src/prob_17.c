//  Write a program in C to display the multiplication table of a given integer.

#include<stdio.h>

int main()
{
	int j, num;

	scanf("%d", &num);

	for(j=1; j<=10; j++){
		printf("%d X %d = %d\n", j, num, j*num);
	}

	return 0;
}