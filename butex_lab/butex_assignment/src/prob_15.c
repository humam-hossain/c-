//  Write a program in C to read 10 numbers from keyboard and find their sum and average.

#include<stdio.h>

int main()
{
	int n = 10;
	int i, num, sum=0;
	float avg;

	for(i=0; i<n; i++){
		scanf("%d", &num);
		sum += num;
	}
	avg = sum / (float)n;

	printf("sum = %d\naverage = %f", sum, avg);

	return 0;
}