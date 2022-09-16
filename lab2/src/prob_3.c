// write a c program to check whether a number is positive or
// negative or equal to zero
#include<stdio.h>

int main()
{
	int num;

	printf("num = ");
	scanf("%d", &num);

	printf("Result: ");
	if(num > 0){
		printf("positive");
	}else if(num < 0){
		printf("negative");
	}else{
		printf("zero");
	}
	
	return 0;
}