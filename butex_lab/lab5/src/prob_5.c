#include<stdio.h>

int main()
{
    int num1, num2, min, max, r, temp;

    scanf("%d %d",  &num1, &num2);

    // GCD Calculation
    max = num1>num2 ? num1 : num2;
    min = num1<num2 ? num1 : num2;

    while(r != 0){
        r = max%min;
        max = min;
        min = r;
    }
    printf("GCD of %d and %d is %d\n", num1, num2, max);

    // LCM Calculation
    max = num1>num2 ? num1 : num2;

    while(1){
        if(max%num1 == 0 && max%num2 == 0){
            printf("LCM of %d and %d is %d", num1, num2, max);
            break;
        }
        max++;
    }

    return 0;
}
