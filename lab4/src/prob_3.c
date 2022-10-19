// 0+1+1+2+3+5+8+....
#include<stdio.h>

int main()
{
    int i, n, f=0, s=1, temp, sum=f;

    scanf("%d", &n);

    for(i=1; i<n; i++){
        sum += s;
        temp = f + s;
        f = s;
        s = temp;
    }

    printf("%d", sum);

    return 0;
}
