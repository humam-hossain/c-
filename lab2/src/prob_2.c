// write a c program to check whether a number is even or odd
#include<stdio.h>

int main()
{
	int num;

	printf("num = ");
	scanf("%d", &num);

	printf("Result: ");
	if(num % 2 == 0){
		printf("even");
	}else{
		printf("odd");
	}

	return 0;
}