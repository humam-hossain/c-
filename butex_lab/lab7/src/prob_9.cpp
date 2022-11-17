#include<stdio.h>

int main()
{
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int i, j, max, min, max_i, max_j, min_i, min_j;
    int arr[rows][cols];

    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    max = arr[0][0];
    min = arr[0][0];
    max_i = 0;
    max_j = 0;
    min_i = 0;
    min_j = 0;

    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
                max_i = i;
                max_j = j;
            }

            if(arr[i][j] < min){
                min = arr[i][j];
                min_i = i;
                min_j = j;
            }
        }
    }

    printf("max: arr[%d][%d] = %d\n", max_i, max_j, max);
    printf("min: arr[%d][%d] = %d", min_i, min_j, min);

    return 0;
}
