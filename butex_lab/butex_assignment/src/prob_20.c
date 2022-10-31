//  Write a c program to find the perfect numbers within a given number of range.

#include<stdio.h>

int main()
{
	int i, num, start, end, sum;

	scanf("%d %d", &start, &end);

	for(num=start; num<=end; num++){
		sum = 0;

		for(i=1; i<num; i++){
			if(num%i == 0){
				sum += i;
			}	
		}

		if(sum == num){
			printf("%d ", num);
		}
	}

	return 0;
}