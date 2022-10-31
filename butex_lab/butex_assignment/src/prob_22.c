//  Write a C program to display Pascal's triangle.
/*

rowCcol = row! / col! * (row-col)!

num = 5
     1 
    1 1 
   1 2 1
  1 3 3 1 
 1 4 6 4 1 
1 5 10 10 5 1

*/

#include<stdio.h>

int main()
{
	int num, row, col, n, r, i; 
	double result;

	printf("num = ");
	scanf("%d", &num);

	for(row=0; row<=num; row++){
		for(col=num; col>row; col--){
			printf(" ");
		}

		for(col=0; col<=row; col++){
			result = 1;

			for(i=1; i<=row; i++){
				result *= i;
			}

			for(i=1; i<=col; i++){
				result /= (double)i;
			}

			for(i=1; i<=row-col; i++){
				result /= (double)i;
			}

			printf("%d ", (int)result);
		}

		printf("\n");
	}

	return 0;
}