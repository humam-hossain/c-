#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    float matrix[n][n+1];

    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<n+1; j++){
            scanf("%f", &matrix[i][j]);
        }
    }

    printf("=>\n");
    for(i=0; i<n; i++){
        for(j=0; j<n+1; j++){
            printf("%g\t", matrix[i][j]);
        }
        printf("\n");
    }

    float temp = matrix[0][0];
    for(i=0; i<n+1; i++){
        matrix[0][i] = matrix[0][i] / temp;
    }

    printf("=>\n");
    for(i=0; i<n; i++){
        for(j=0; j<n+1; j++){
            printf("%g\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}