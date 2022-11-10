// 4. write a c program to count the frequency of a number.
#include<stdio.h>

int main()
{
	int size;
	scanf("%d", &size);

	int i, count = 0;
	double arr[size], num;

	for(i=0; i<size; i++){
		scanf("%lf", &arr[i]);
	}

	printf("Search = ");
	scanf("%lf", &num);

	for(i=0; i<size; i++){
		if(arr[i] == num){
			count++;
		}
	}

	printf("frequency of %lf = %d", num, count);

	return 0;
}