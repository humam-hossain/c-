#include<stdio.h>

int main()
{
	int menu;
	double f, c;

	printf("========= Temperature Conversion =========\n");
	printf("1. Fahrenheit to Celsius conversion\n");
	printf("2. Celsius to Fahrenheit conversion\n\n");
	printf("select: ");
	scanf("%d", &menu);

	switch (menu)
	{
	case 1:
		printf("Fahrenheit = ");
		scanf("%lf", &f);

		printf("Celsius = %lf", (5.0/9.0)*(f-32));
		break;
	case 2:
		printf("Celsius = ");
		scanf("%lf", &c);

		printf("Fahrenheit = %lf", (9.0/5.0) * c + 32);
		break;
	default:
		printf("Invalid Input!");
		break;
	}

	return 0;
}
