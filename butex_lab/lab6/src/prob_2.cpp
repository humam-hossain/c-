// 2. write a c program to find both values and indexes of maximum and minimum elements of an array

#include<stdio.h>
int main()
{
	int i, size;
	scanf("%d", &size);

	int max_i, min_i;
	double arr[size], max, min;

	for(i=0; i<size; i++){
		scanf("%lf", &arr[i]);
	}
	max = arr[0];
	max_i = 0;
	min = arr[0];
	min_i = 0;

	for(i=1; i<size; i++){
		if(arr[i] > max){
			max = arr[i];
			max_i = i;
		}
		if(arr[i] < min){
			min = arr[i];
			min_i = i;
		}
	}
	printf("MAX: arr[%d] = %lf\nMIN: arr[%d] = %lf\n", max_i, max, min_i, min);
	return 0;
}