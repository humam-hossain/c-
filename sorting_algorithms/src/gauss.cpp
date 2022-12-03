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

    int p, q;
    int k;

    for(k=0; k<n; k++){
        float temp = matrix[k][k];
        for(i=0; i<n+1; i++){
            matrix[k][i] = matrix[k][i] / temp;
        }

        printf("=>\n");
        for(p=0; p<n; p++){
            for(q=0; q<n+1; q++){
                printf("%f\t", matrix[p][q]);
            }
            printf("\n");
        }

        for(i=0; i<n; i++){
            if(i != k){
                temp = matrix[i][k];
                for(j=0; j<n+1; j++){
                    matrix[i][j] = matrix[i][j] - matrix[k][j] * temp;
                }
                printf("=>\n");
                for(p=0; p<n; p++){
                    for(q=0; q<n+1; q++){
                        printf("%f\t", matrix[p][q]);
                    }
                    printf("\n");
                }
            }
                
        }
    }    

    return 0;
}