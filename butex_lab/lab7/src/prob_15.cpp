//  Write a c program to multiply two matrices. If A and B are two matrices, the product of these matrices, C = A * B. Given, A={{1, 2}, {1, 2}} and B = {{2, 1}, {2, 1}}.
#include<stdio.h>

int main()
{
	int rows_1, cols_1;

	printf("A matrix:\n");
    scanf("%d %d", &rows_1, &cols_1);

    int i, j;
    int a[rows_1][cols_1];

    for(i=0; i<rows_1; i++){
        for(j=0; j<cols_1; j++){
            scanf("%d", &a[i][j]);
        }
    }

	printf("B matrix:\n");
	int rows_2, cols_2;

	rows_2 = cols_1;
	
	printf("rows = %d\ncols = ", rows_2);
	scanf("%d", &cols_2);

	int b[rows_2][cols_2];

    for(i=0; i<rows_2; i++){
        for(j=0; j<cols_2; j++){
            scanf("%d", &b[i][j]);
        }
    }

	int c[rows_1][cols_2];
	int k;

	for(i=0; i<rows_1; i++){
		for(j=0; j<cols_2; j++){
			c[i][j] = 0;
			for(k=0; k<rows_2; k++){
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
			}
		}
	}

	printf("C matrix (C = A * B):\n");
    for(i=0; i<rows_1; i++){
        for(j=0; j<cols_2; j++){
            printf("%d ", c[i][j]);
        }
		printf("\n");
    }

	return 0;
}