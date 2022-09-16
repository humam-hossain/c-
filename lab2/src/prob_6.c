// write a c program to check whether a year is a leap year or not.
#include<stdio.h>

int main()
{
	int year;

	printf("year = ");
	scanf("%d", &year);

	if(year%400 == 0 || (year%4==0 && year%100 != 0)){
		printf("%d is a leap year", year);
	}else{
		printf("%d is not a leap year", year);
	}
	
	return 0;
}