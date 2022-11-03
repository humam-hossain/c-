// Write a C program which can input some fruits name, price, typical lowest weight, 
// typical highest weight. Display all the fruits information which’s name start with a vowel.

#include<stdio.h>

#define MAX_LIMIT 1000

struct Fruit
{
    char name[MAX_LIMIT];
    double price;
    double lowest_weight;
    double highest_weight;
};

int main()
{
    int n;
    struct Fruit fruits[MAX_LIMIT];

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        printf("Fruit No.%d\n", i);
        printf("Name: ");
        scanf("%s", &fruits[i].name);
        printf("Price: ");
        scanf("%lf", &fruits[i].price);
        printf("Typical Lowest Weight: ");
        scanf("%lf", &fruits[i].lowest_weight);
        printf("Typical Higest Weight: ");
        scanf("%lf", &fruits[i].highest_weight);
        printf("\n");
    }

    printf("Result:\n");
    for(int i=0; i<n; i++){
        if(fruits[i].name[0] == 'a' || fruits[i].name[0] == 'e' || fruits[i].name[0] == 'i' || fruits[i].name[0] == 'o' || fruits[i].name[0] == 'u' || fruits[i].name[0] == 'A' || fruits[i].name[0] == 'E' || fruits[i].name[0] == 'I' || fruits[i].name[0] == 'O' || fruits[i].name[0] == 'U'){
            printf("Name: %s\n", fruits[i].name);
            printf("Price: %lf\n", fruits[i].price);
            printf("Typical Lowest Weight: %lf\n", fruits[i].lowest_weight);
            printf("Typical Highest Weight: %lf\n", fruits[i].highest_weight);
            printf("\n");
        }
    }
    return 0;
}