#include<stdio.h>

int main()
{
	int mark;

	printf("mark = ");
	scanf("%d", &mark);

	if(mark >= 90){
		printf("cgpa = 4.0");
	}else if(mark >= 80){
		printf("cgpa = 3.5");
	}else if(mark >= 70){
		printf("cgpa = 3.0");
	}else if(mark >= 60){
		printf("cgpa = 2.5");
	}else if(mark >= 50){
		printf("cgpa = 2.0");
	}else{
		printf("cgpa = 0.0");
	}

	return 0;
}
