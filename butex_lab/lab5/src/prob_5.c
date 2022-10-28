#include<stdio.h>

int main()
{
    int i, num1, num2, lcm, gcd;

    scanf("%d %d",  &num1, &num2);

    // GCD Calculation
    for(i=1; i<=num1 && i<=num2; i++){
        if(num1%i == 0 && num2%i == 0){
            gcd = i;
        }
    }
    printf("GCD of %d and %d is %d\n", num1, num2, gcd);

    // LCM Calculation
    lcm = num1>num2 ? num1 : num2;

    while(1){
        if(lcm%num1 == 0 && lcm%num2 == 0){
            printf("LCM of %d and %d is %d", num1, num2, lcm);
            break;
        }
        lcm++;
    }

    return 0;
}
