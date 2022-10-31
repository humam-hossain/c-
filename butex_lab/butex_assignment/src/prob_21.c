//  Write a program in C to display the pattern like a diamond.
/*
n = 5
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

*/

#include<stdio.h>

int main()
{
	int row, col, n;

	printf("n = ");
	scanf("%d", &n);

	for(row=1; row<n; row++){
		for(col=n; col>row; col--){
			printf(" ");
		}
		for(col=1; col<=row; col++){
			printf("*");
		}
		for(col=1; col<row; col++){
			printf("*");
		}

		printf("\n");
	}

	for(row=1; row<=n; row++){
		for(col=1; col<row; col++){
			printf(" ");
		}
		for(col=n; col>row; col--){
			printf("*");
		}
		for(col=n; col>=row; col--){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}