#include<stdio.h>

int main()
{
	int a, b, c, min;

	printf("Input 3 numbers: ");
	scanf("%d %d %d", &a, &b, &c);

	min = a;

	if(b < min){
		min = b;
	}
	if(c < min){
		min = c;
	}

	printf("smallest among three numbers = %d", min);

	return 0;
}
