// sinx = x^1 / 1! - x^3 / 3! + x^5 / 5! - x^7 / 7! + ...

#include<stdio.h>
#include<math.h>

double fact(int num)
{
    int i;
    double result=1;

    for(i=num; i>0; i--){
        result *= i;
    }

    return result;
}

double sin(double x)
{
    int i;
    double  sum = 0, term = x;
    sum += term;

    for(i=1; term >= 0.001; i++){
        term = pow(x, 2*i+1) / fact(2*i+1);

        if(i%2 == 0){
            sum += term;
        }else{
            sum -= term;
        }
    }

    return sum;
}

int main()
{
    double x, y;

    scanf("%lf", &y);
    x = y * (22.0/7.0) / 180;

    printf("%lf", sin(x));

    return 0;
}