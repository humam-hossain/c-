#include<stdio.h>

int main()
{
    int size;
    scanf("%d", &size);

    int arr[size];
    int i,j;

    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    /*
                        19 
                66          77 
            15      51   46      10 
        11      21 6 91

        77 15 91 21 6 46 10 11 66 51 19
    */

    int n = size;
    while(size != 0){
        for(i=(size/2)-1; i>=0; i--){
            int max = arr[i];
            int max_i = i;

            if(arr[2*i+1] > max){
                max = arr[2*i+1];
                max_i = 2*i+1;
            }

            if(2*i+2 < size && arr[2*i+2] > max){
                max = arr[2*i+2];
                max_i = 2*i+2;
            }

            int temp = arr[i];
            arr[i] = max;
            arr[max_i] = temp;
        }


        int temp = arr[0];
        arr[0] = arr[size-1];
        arr[size-1] = temp;

        // printf("%d\n", size);
        size--;
    }

    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}