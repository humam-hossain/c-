// 1. write a c program to calculate sum and average of an array
#include<stdio.h>

int main()
{
	int i, size;
	scanf("%d", &size);
	
	double arr[size], avg, sum = 0;

	for(i=0; i<size; i++){
		scanf("%lf", &arr[i]);
	}

	for(i=0; i<size; i++){
		sum = sum + arr[i];
	}

	avg = sum / size;
	printf("Sum = %lf\nAverage = %lf", sum, avg);

	return 0;
}