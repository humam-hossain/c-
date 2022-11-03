/*
n^2 < 5000,
a = n(+ve) highest value
b = n(-ve) lowest value

range = a - b

*/

#include<stdio.h>

int main()
{
    int n_sq = 5000, i, a, b;

    for(i=0; i*i<n_sq; i++){
        a = i;
    }

    printf("a = %d\n", a);

    for(i=0; i*i<n_sq; i--){
        b = i;
    }

    printf("b = %d\n", b);

    printf("range = %d\n", a-b);

    return 0;
}