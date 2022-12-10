#include<stdio.h>

int collatz_conj(int num)
{
    int count = 0;

    while(num!=1){
        if(num%2 == 0){
            num = num/2;
            count++;
        }else{
            num = num * 3 + 1;
            count++;
        }
    }

    return count;
}

int main()
{
    int a, b;

    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);   

    printf("%d", collatz_conj(a) < collatz_conj(b) ? a : b);
    
    return 0;
}