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

    int left, right;
    int pivot = arr[size-1];
    int sorted[size];

    for(left=0, right=size-1; left < right;){
        

        if(left == right){
            sorted[left] = pivot;
        }
    }

    for(i=0; i<size; i++){
        printf("%d ", sorted[i]);
    }

    return 0;
}