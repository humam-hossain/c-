#include<stdio.h>

int main()
{
    int i, sum = 0;
    int num = 60;

    for(i=num; i>0; i-=3){
        sum += i;
    }

    printf("%d", sum);

    return 0;
}
