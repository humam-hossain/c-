#include <stdio.h>
#define MAX 50
int main()
{
    int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
    int a_rows, a_cols, b_rows, b_cols;
    int i, j, k;
    int sum = 0;

    // part 1
    printf("Enter the rows and columns of the matrix a: ");
    scanf(" %d %d", &a_rows, &a_cols);
    printf("Enter the elements of matrix a:\n");
    for (i = 0; i < a_rows; i++)
    {
        for (j = 0; j < a_cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the rows and columns of the matrix b: ");
    scanf("%d %d", &b_rows, &b_cols);
    if (b_rows != a_cols)
    {
        printf("Sorry! We cannot multiply the matrices a and b ");
    }
    else
    {
        printf("Enter the elements of matrix b: \n");
        for (i = 0; i < b_rows; i++)
        {
            for (j = 0; j < b_cols; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
    }

    printf("\n");
    for (i = 0; i < a_rows; i++)
    {
        for (j = 0; j < b_cols; j++)
        {
            for (k = 0; k < b_rows; k++) // we can also take k<a_cols, because a_cols and b_rows are always same
            {
                sum = sum + a[i][k] * b[k][j];
            }
            product[i][j] = sum;
            sum = 0;
        }
    }

    // printing the array elements
    printf("Resultant Matrix\n");
    for (i = 0; i < a_rows; i++)
    {
        for (j = 0; j < b_cols; j++)
        {
            printf(" %d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}