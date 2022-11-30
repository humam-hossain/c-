#include<stdio.h>

float avg_arr(int arr[], int size)
{
    int i;
    float sum = 0;


    for(i=0; i<size; i++){
        sum += arr[i];
    }

    return sum/size;
}

int main()
{
    int size;
    scanf("%d", &size);

    int arr[size];
    int i;

    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    printf("average = %f", avg_arr(arr, size));
    return 0;
}
