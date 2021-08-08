#include <stdio.h>

int main()
{
	char i;
	float num1, num2;
	
	scanf("%f %c %f", &num1, &i, &num2);
	
	if(i == '+'){
		printf("%f + %f = %f\n", num1, num2, num1+num2);
	}else if(i == '-'){
		printf("%f - %f = %f\n", num1, num2, num1-num2);
	}else if(i == '*'){
		printf("%f * %f = %f\n", num1, num2, num1*num2);
	}else if(i == '/'){
		printf("%f / %f = %f\n", num1, num2, num1/num2);
	}else{
		printf("Invalid Input\n");
	}	
	
	return 0;
}
