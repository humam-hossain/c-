/**

Write a C program that prints the following pattern of n lines. For example, for n = 5, the
pattern looks like this:
5
*****
*****
*****
*****
*****

**/

#include<stdio.h>

int main()
{
	int i, j, n;

	scanf("%d", &n);

	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}