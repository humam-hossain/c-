#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);

    int arr[size];
    int i;

    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for (i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    int count_size = max - min + 1;
    int count[count_size];

    for (i = 0; i < count_size; i++)
    {
        count[i] = 0;
    }

    for (i = 0; i < size; i++)
    {
        count[arr[i] - min]++;
    }

    int k, j = 0;

    for (i = 0; i < count_size; i++)
    {
        for (k = 0; k < count[i]; k++)
        {
            arr[j] = i + min;
            j++;
        }
    }

    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}