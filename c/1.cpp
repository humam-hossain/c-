#include <stdio.h>

int main()
{
	int bmi;
	
	printf("BMI value: ");
	scanf("%d", &bmi);
	
	if(bmi < 16){
		printf("Dangerously underweight");
	}else if(bmi <= 19){
		printf("Underweight");
	}else if(bmi <= 24){
		printf("Normal weight");
	}else if(bmi <= 29){
		printf("Overweight");
	}else{
		printf("Seriously Overweight");
	}
	
	return 0;
}
