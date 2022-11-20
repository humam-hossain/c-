#include<stdio.h>

int main()
{
    int size;
    scanf("%d", &size);

    int arr[size];
    int i;

    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for(i=0; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }

    // printf("%d\n%d\n%d", max, min, max-min+1);

    int count[max-min+1];

    for(i=0; i<max-min+1; i++){
        count[i] = 0;
    }

    for(i=0; i<size; i++){
        count[arr[i]-min]++;
    }

    int j, k;

    for(i=0, j=0; i<max-min+1; i++){
        for(k=0; k<count[i]; k++){
            arr[j] = i+min;
            j++;
        }
    }

    for(i=0; i<size; i++){
        printf("%d ", arr[i]);
    }

    return 0;

}