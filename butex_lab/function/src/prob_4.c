#include<stdio.h>

float calc_grade(int num)
{
    if(num >= 90){
        return 4.0;
    }
    if(num >= 80){
        return 3.5;
    }
    if(num >= 70){
        return 3.0;
    }
    if(num >= 60){
        return 2.5;
    }
    if(num >= 50){
        return 2.0;
    }

    return 0.0;
}

int main()
{
    int num;
    scanf("%d", &num);

    printf("%f", calc_grade(num));

    return 0;
}
