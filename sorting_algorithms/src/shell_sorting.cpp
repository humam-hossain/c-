#include <stdio.h>
int main()
{
    int gap, i, j, n, temp;
    printf("Enter the integer number=");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (gap = n / 2; gap >= 1; gap = gap / 2)
    {
        for (j = gap; j < n; j++)
        {
            for (i = j - gap; i >= 0; i = i - gap)
            {
                if (a[i + gap] > a[i])
                {
                    break;
                }
                else
                {
                    temp = a[i];
                    a[i] = a[i + gap];
                    a[i + gap] = temp;
                }
            }
        }
    }
    printf("\nSorted array in ascending order is :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}