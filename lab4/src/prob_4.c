#include<stdio.h>

int main()
{
    int i, n, result = 1;

    scanf("%d", &n);

    if(n < 0){
        printf("Invalid Input");
    }else{
        for(i=n; i>=1; i--){
            result *= i;
        }

        printf("%d! = %d", n, result);
    }

    return 0;
}
