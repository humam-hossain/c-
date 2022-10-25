#include<stdio.h>

int main()
{
    int i, n, num=1, sum = 0;

    scanf("%d", &n);

    for(i=0; i<n; i++, num+=4){
        sum += num;
    }

    printf("%d", sum);

    return 0;
}
