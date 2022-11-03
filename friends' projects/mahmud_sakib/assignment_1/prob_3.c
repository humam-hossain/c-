// Input some numbers and display the maximum number of that array. Calculating the maximum should be done in a function. 
// Sample Input: 5
// 12 15 11 22 14
// Sample Output: 22

#include<stdio.h>

int FindMax(int *p, int n){
    int max = p[0];

    for(int i=1; i<n; i++){
        if(p[i] > max){
            max = p[i];    
        }
    }

    return max;
}

int main()
{
    int n, max;
    int arr[1000];

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    max = FindMax(arr, n);
    printf("%d", max);

    return 0;
}