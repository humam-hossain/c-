#include<stdio.h>

int main()
{
    int i, j=1, n, sum = 0;

    scanf("%d", &n);

    for(i=1; i<=n; i++){
        if(j%3 == 0){
            j++;
        }
        sum += j;
        j++;
    }

    printf("%d", sum);

    return 0;
}
