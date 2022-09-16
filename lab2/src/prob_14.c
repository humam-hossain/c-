// 14. write a c program to implement a calculator (+,-,*,/,%) using switch
#include<stdio.h>

int main()
{
	int a, b;
	char operator;

	printf("======= Calculator =======\n");
	scanf("%d %c %d", &a, &operator, &b);

	switch (operator)
	{
	case '+':
		printf("= %d", a + b);
		break;
	case '-':
		printf("= %d", a - b);
		break;
	case '*':
		printf("= %d", a * b);
		break;
	case '/':
		printf("= %lf", a / (double)b);
		break;
	case '%':
		printf("= %d", a%b);
		break;
	default:
		printf("Invalid input");
		break;
	}

	return 0;
}