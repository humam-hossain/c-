// 4. Write a program that takes the month and year (as integers) and returns 
// the number of days in that month.  
// Sample Input: 2, 2020 Sample Output: 29 
// Sample Input: 4, 654 Sample Output: 30 
// Sample Input: 2, 1000 Sample Output: 28 

#include <stdio.h>

int main()
{
    int month, year;

    // info
    printf("Department: type_dep\n");
    printf("Name: type_name\n");
    printf("ID: type_id\n\n");

    scanf("%d %d", &month, &year);

    if(month == 2){
        if(year%400 == 0 || (year%100 != 0 && year%4 == 0)){
            printf("%d", 29);
        }else{
            printf("%d", 28);
        }
    }else if(month <= 7){
        if(month % 2 == 0){
            printf("%d", 30);
        }else{
            printf("%d", 31);
        }
    }else{
        if(month % 2 == 0){
            printf("%d", 31);
        }else{
            printf("%d", 30);
        }
    }

    return 0;
}