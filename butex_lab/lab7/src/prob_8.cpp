#include<stdio.h>

int main()
{
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int i, j, sum=0;
    int arr[rows][cols];
    double avg;

    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            scanf("%d", &arr[i][j]);
        }
    }


    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            sum = sum + arr[i][j];
        }
    }

    avg = (double)sum/(rows*cols);

    printf("Sum = %d\nAverage = %lf", sum, avg);

    return ;
}
