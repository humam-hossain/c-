// write a c program to implement a menu-based temperature conversion using switch
#include<stdio.h>

int main()
{
	int menu;
	double f, c;

	printf("========= Temeprature Conversion =========\n");
	printf("1. Farenheit to Celsius conversion\n");
	printf("2. Celsius to Farenheit conversion\n\n");
	printf("select: ");
	scanf("%d", &menu);

	switch (menu)
	{
	case 1:
		printf("farenheit = ");
		scanf("%lf", &f);

		printf("celsius = %lf", (5.0/9.0)*(f-32));
		break;
	case 2:
		printf("celsius = ");
		scanf("%lf", &c);

		printf("farenheit = %lf", (9.0/5.0) * c + 32);
		break;
	default:
		printf("Invalid Input!");
		break;
	}

	return 0;
}