// write a c program to reverse an array
#include<stdio.h>

int main()
{
	int size;
	scanf("%d", &size);

	int i;
	double arr[size], temp;

	for(i=0; i<size; i++){
		scanf("%lf", &arr[i]);
	}

	for(i=0; i<size; i++){
		temp = arr[i];
		arr[i] = arr[size-1-i];
		arr[size-1-i] = temp;
	}

	printf("reversed array:\t");
	for(i=0; i<size; i++){
		printf("%lf ", arr[i]);
	}

	return 0;
}