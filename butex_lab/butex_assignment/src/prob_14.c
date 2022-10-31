//  Write a program in C to display n terms of natural numbers and their sum.

#include<stdio.h>

int main()
{
	int num, sum=0;

	scanf("%d", &num);

	for(int i=1; i<=num; i++){
		sum += i;
		printf("%d", i);

		if(i!=num){
			printf("+");
		}
	}

	printf("=%d", sum);

	return 0;
}