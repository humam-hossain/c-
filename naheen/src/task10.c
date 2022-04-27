// 10.  Write a C program that takes a chess board square’s coordinates and returns its color. 

#include <stdio.h>

int main()
{
    char c;
    int row, column;
    // info
    printf("Department: type_dep\n");
    printf("Name: type_name\n");
    printf("ID: type_id\n\n");

    scanf("%c %d", &c, &row);

    column = c - 96;

    // printf("%d %d", row, column);

    if(row % 2 == 0){
        if(column % 2 == 0){
            printf("Black");
        }else{
            printf("White");
        }
    }else{
        if(column % 2 == 0){
            printf("White");
        }else{
            printf("Black");
        }
    }
    return 0;
}