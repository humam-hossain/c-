#include <stdio.h>

int main()
{

    int n, i, j, gap;
    scanf("%d", &n);
    printf("The array:");

    float array[n], temp;

    for (i = 0; i < n; i++)
    {
        scanf("%f", &array[i]);
    }

    for (gap = n / 2; gap >= 1; gap /= 2)
    {
        for (j = gap; j < n; j++)
        {
            for (i = j - gap; i >= 0; i - gap)
            {
                if (array[i + gap] > array[i])
                {
                    break;
                }
                else
                {
                    temp = array[i];
                    array[i] = array[i + gap];
                    array[i + gap] = temp;
                }
                printf("loop 3\n");
            }
            printf("loop 2\n");
        }

        printf("loop 1\n");
    }

    for(i=0; i<n; i++){
        printf("%f ", array[i]);
    }

    return 0;
}