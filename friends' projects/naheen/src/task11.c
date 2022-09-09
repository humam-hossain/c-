// 11.  Write a C program to check whether a number is magic or not. (A number is said to be a magic 
// number if the sum of its digits are calculated till a single digit and this single digit comes out to be 1)

#include <stdio.h>

int sum_of_digits(int num)
{
    int sum = 0;

    while(num != 0){
        sum += num % 10;
        num = num /10;
    }

    return sum;
}

int main()
{
    int num;

    // info
    printf("Department: type_dep\n");
    printf("Name: type_name\n");
    printf("ID: type_id\n\n");

    scanf("%d", &num);

    while(num >= 10){
        num = sum_of_digits(num);
    }

    // printf("%d", num);
    if(num == 1){
        printf("This is a magic number");
    }else{
        printf("This is not a magic number");
    }

    return 0;
}