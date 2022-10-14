#include<stdio.h>

int main()
{
    int i, n, sum=0;

    scanf("%d", &n);

    for(i=1; i<=n; i++){
        sum += i * (i+1);
    }

    printf("Sum = %d", sum);

    return 0;
}
