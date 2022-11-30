#include<stdio.h>

int is_prime(int num)
{
    int i;

    if(num < 2){
        return 0;
    }

    for(i=2; i<num; i++){
        if(num%i == 0){
            return 0;
        }
    }

    return 1;
}

int main()
{
    int num, start, end;
    scanf("%d %d", &start, &end);

    for(num=start; num<=end; num++){
        if(is_prime(num) == 1){
            printf("%d ", num);
        }
    }

    return 0;
}
