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
