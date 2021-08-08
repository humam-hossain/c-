#include <stdio.h>

int main()
{
	char i;
	float num1, num2;
	
	scanf("%f %c %f", &num1, &i, &num2);
	
	switch(i){
		case '+':
			printf("%f + %f = %f\n", num1, num2, num1+num2);
			break;
		case '-':
			printf("%f - %f = %f\n", num1, num2, num1-num2);
			break;
		case '*':
			printf("%f * %f = %f\n", num1, num2, num1*num2);
			break;
		case '/':
			printf("%f / %f = %f\n", num1, num2, num1/num2);
			break;
		default:
			printf("Invalid Input\n");
			break;
	}	
	
	return 0;
}
