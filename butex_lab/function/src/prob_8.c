#include<stdio.h>

int fact(int num)
{
    if(num == 0){
        return 1;
    }

    return num * fact(num - 1);
}

int main()
{
    int num;
    scanf("%d", &num);

    printf("%d! = %d", num, fact(num));

    return 0;
}
