//  Write a program in C to find the number and sum of all integer between 100 and 200 which are divisible by 9.

#include<stdio.h>

int main()
{
	int i, sum=0;

	for(i=100; i<=200; i++){
		if(i%9 == 0){
			printf("%d + ", i);
			
			sum += i;
		}
	}

	printf("= %d", sum);

	return 0;
}