// write a c program to sort an array
#include<stdio.h>

int main()
{
	int size;
	scanf("%d", &size);

	int i, j;
	double arr[size], temp;

	for(i=0; i<size; i++){
		scanf("%lf", &arr[i]);
	}

	for(i=0; i<size; i++){
		for(j=1; j<size-i; j++){
			if(arr[j-1] > arr[j] ){
				temp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for(i=0; i<size; i++){
		printf("%lf ", arr[i]);
	}

	return 0;
}