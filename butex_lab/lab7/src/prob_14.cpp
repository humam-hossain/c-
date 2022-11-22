//  Write a c program to subtract two matrices. If A and B are two matrices, 
// the difference of these matrices, C = A - B.
#include<stdio.h>

int main()
{
	int rows, cols;
    scanf("%d %d", &rows, &cols);

    int i, j;
    int a[rows][cols];

	printf("A matrix:\n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            scanf("%d", &a[i][j]);
        }
    }

	int b[rows][cols];

	printf("B matrix:\n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            scanf("%d", &b[i][j]);
        }
    }

	int c[rows][cols];
	for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
			c[i][j] = a[i][j] - b[i][j];
        }
    }

	printf("C matrix (C = A - B):\n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("%d ", c[i][j]);
        }
		printf("\n");
    }

	return 0;
}