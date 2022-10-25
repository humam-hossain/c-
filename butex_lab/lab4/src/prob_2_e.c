// 1 - 2 + 3 - 4 + 5 - ....
#include<stdio.h>

int main()
{
    int i, n, sum = 0;

    scanf("%d", &n);

    for(i=1; i<=n; i++){
        if(i%2 == 0)
            sum -= i;
        else
            sum += i;
    }

    printf("Sum = %d", sum);

    return 0;
}
