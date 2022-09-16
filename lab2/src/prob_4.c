// 4. write a c program to find the largest between two numbers
#include<stdio.h>

int main()
{
	int a, b;

	scanf("%d %d", &a, &b);

	printf("largest number = ");
	if(a > b){
		printf("%d", a);
	}else{
		printf("%d", b);
	}
	
	return 0;
}