//  Write a program in C to display the multiplication table vertically from 1 to n.

#include<stdio.h>

int main()
{
	int i, j, num;

	scanf("%d", &num);

	for(i=1; i<=10; i++){
		for(j=1; j<=num; j++){
			printf("%d X %d = %d\t", j, i, j*i);
		}
		printf("\n");
	}

	return 0;
}