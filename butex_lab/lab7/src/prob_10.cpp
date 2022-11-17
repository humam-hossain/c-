#include<stdio.h>

int main()
{
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int i, j;
    int arr[rows][cols];
    int sum = 0;

    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=0, j=0; i<rows, j<cols; i++, j++){
        sum = sum + arr[i][j];
    }

    printf("sum of diagonal elements of a matrix = %d", sum);

    return 0;
}
