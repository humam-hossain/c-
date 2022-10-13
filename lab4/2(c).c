// 2^2 * 4^2 * 6^2 ....
#include<stdio.h>

int main()
{
    int i, j=2, n, result=1;

    scanf("%d", &n);

    for(i=1; i<=n; i++){
        result *= j*j;
        j+=2;
    }

    printf("Result = %d", result);

    return 0;
}
