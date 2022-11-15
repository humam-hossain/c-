
#include<stdio.h>

int main()
{
	int size;
	scanf("%d", &size);

	int i;
	double arr_1[size], arr_2[size];

	for(i=0; i<size; i++){
		scanf("%lf", &arr_1[i]);
		arr_2[i] = arr_1[i];	
	}

	printf("arr_2:\n");

	for(i=0; i<size; i++){
		printf("%lf ", arr_2[i]);
	}

	return 0;
}