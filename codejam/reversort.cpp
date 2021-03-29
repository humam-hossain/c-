#include <iostream>
#include <cstring>
#include <stdio.h>

// void reverse(int arr[], int i, int j)
// {
//     int temp;
//     // printf("Function called");
//     for(i=i; i<=j; i++, j--){
//         temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//     }
//     // for(int i=0; i<size; i++){
//     //     printf("%d ",arr[i]);
//     // }
// }

int j_findout(int arr[], int i, int size)
{
    int j=i;
    int l;
    int temp;

    for(int k=i+1; k<size; k++){
        if(arr[k] < arr[j]){
            j = k;
        }
    }

    // printf("j = %d\n", j);
    l=j;
    // printf("Function called");
    for(int k = i; k<=l; k++, l--){
        temp = arr[k];
        arr[k] = arr[l];
        arr[l] = temp;
    }
    // for(int i=0; i<size; i++){
    //     printf("%d ",arr[i]);
    // }

    return j-i+1;
}

int main()
{
    int T;
    int N, size;
    int A[100];
    int cost = 0;
    int o[100];

    scanf("%d", &T);
    for (int t = 0; t < T; t++)
    {
        //scanning part of the Problem
        // printf("Input no of element in array A: ");
        scanf("%d", &N);
        // printf("You entered: %d\n", N);
        // printf("Input array A elements in one line: ");
        for (int i = 0; i < N; i++)
        {
            fscanf(stdin, "%d", &A[i]);
        }
        // for (int xx = 0; xx < N; xx++)
        // {
        //     printf("A[%d] is: %d\n", xx, A[xx]);
        // }
        for(int i=0; i<N-1; i++){
            cost = cost + j_findout(A,i,N);
        }
        
        o[t] = cost;
        // printf("cost = %d", cost);

        cost = 0;
        // printf("\n");
        // for(int i=0; i<N; i++){
        //     printf("%d ",A[i]);
        // }
    }

    for(int i=0; i<T; i++){
        printf("Case #%d: %d\n",i+1,o[i]);
    }

    return 0;
}

/* 
N=4, L=[4,2,1,3]

i -> last = minimum value of L

4 2 1 3 i=0, j=2 -> 3 i++
1 2 4 3 i=1, j=1 -> 1
1 2 4 3 i=2, j=3 -> 2
1 2 3 4

cost = 3+1+2 = 6

*/
