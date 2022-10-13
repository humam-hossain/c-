#include<stdio.h>

int main()
{
    int i, n, j=3, sum=0;

    scanf("%d", &n);

    for(i=1; i<=n; i++){
        sum += i * j * (j+1);
        j+=2;
    }

    printf("%d", sum);

    return 0;
}
