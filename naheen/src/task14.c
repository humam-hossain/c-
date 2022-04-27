#include <stdio.h>

int main()
{
    int n;

    // info
    printf("Department: type_dep\n");
    printf("Name: type_name\n");
    printf("ID: type_id\n\n");

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        for(int j=n; j>i; j--){
            printf(" ");
        }
        for(int j=0; j<i; j++){
            printf("*");
        }
        for(int j=0; j<i-1; j++){
            printf("*");
        }
        printf("\n");
    }

    for(int i=n; i>0; i--){
        for(int j=n; j>i; j--){
            printf(" ");
        }
        for(int j=0; j<i; j++){
            printf("*");
        }
        for(int j=0; j<i-1; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;    
}