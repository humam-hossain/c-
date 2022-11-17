//  Write a c program to transpose a matrix, i.e., A’. Given, A = {{1, 2}, {2, 4}}.
#include<stdio.h>

int main()
{
	int rows, cols;
    scanf("%d %d", &rows, &cols);

    int i, j;
    int arr[rows][cols];

    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            scanf("%d", &arr[i][j]);
        }
    }

	int t_arr[cols][rows];

	for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
			t_arr[j][i] = arr[i][j];
        }
    }

	printf("transposed matrix:\n");
	for(i=0; i<cols; i++){
        for(j=0; j<rows; j++){
			printf("%d ", t_arr[i][j]);
        }
		printf("\n");
    }

	return 0;
}