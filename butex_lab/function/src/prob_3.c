#include<stdio.h>

int is_leap_year(int year)
{
    if(year%400 == 0 || year%100 != 0 && year%4 == 0){
        return 1;
    }

    return 0;
}

int main()
{
    int year;
    scanf("%d", &year);

    printf("%d", is_leap_year(year));

    return 0;
}
