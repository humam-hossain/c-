// write a c program to check whether a student has passed(40%) or failed from a given mark.
#include<stdio.h>

int main()
{
	int mark;

	printf("mark = ");
	scanf("%d", &mark);

	if(mark >= 40){
		printf("passed");
	}else{
		printf("failed");
	}
	
	return 0;
}