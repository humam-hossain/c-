#include<stdio.h>

int main()
{
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int i, j;
    int arr[rows][cols];
    int k;

    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMultiplying factor = ");
    scanf("%d", &k);

    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            arr[i][j] = k * arr[i][j];
        }
    }

    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
