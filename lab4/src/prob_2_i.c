// 1+2+4+5+7+8....

#include<stdio.h>

int main()
{
    int i, num=1, n, sum = 0;

    scanf("%d", &n);

    for(i=1; i<=n; i++){
        if(num%3 == 0){
            num++;
        }
        sum += num;
        num++;
    }

    printf("%d", sum);

    return 0;
}
