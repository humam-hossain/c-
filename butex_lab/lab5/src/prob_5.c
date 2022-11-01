#include<stdio.h>

int main()
{
    int i, num1, num2, num3, lcm, gcd;

    scanf("%d %d %d",  &num1, &num2, &num3);

    // GCD Calculation
    for(i=1; i<=num1 && i<=num2 && i<=num3; i++){
        if(num1%i == 0 && num2%i == 0 && num3%i == 0){
            gcd = i;
        }
    }
    printf("GCD of %d, %d, %d is %d\n", num1, num2, num3, gcd);

    // LCM Calculation
    lcm = num1;

    if(num2 > lcm){
        lcm = num2;
    }

    if(num3 > lcm){
        lcm = num3;
    }

    while(1){
        if(lcm%num1 == 0 && lcm%num2 == 0 && lcm%num3 == 0){
            printf("LCM of %d, %d and %d is %d", num1, num2, num3,lcm);
            break;
        }
        lcm++;
    }

    return 0;
}
