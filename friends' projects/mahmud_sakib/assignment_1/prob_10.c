// Write a C program which can input some book’s name, author’s name, pages, price. 
// Display the book’s information which’s name containing the highest number of vowels

#include<stdio.h>
#define MAX_LIMIT 1000

struct Book
{
    char name[MAX_LIMIT];
    char author[MAX_LIMIT];
    int pages;
    double price;
};

int count_vowels(char *p)
{
    int vowels = 0;

    for(int i=0; p[i] != '\0'; i++){
        if(p[i] == 'a' || p[i] == 'e' || p[i] == 'i' || p[i] == 'o' || p[i] == 'u' || p[i] == 'A' || p[i] == 'E' || p[i] == 'I' || p[i] == 'O' || p[i] == 'U'){
            vowels++;
        }
    }

    return vowels;
}

int main()
{
    int n;
    struct Book books[MAX_LIMIT];
    int max_vowels = 0, max_vowels_id = 0;

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        printf("Book No.%d\n", i);
        printf("Name:");
        scanf("%s", &books[i].name);
        printf("Author:");
        scanf("%s", &books[i].author);
        printf("Pages:");
        scanf("%d", &books[i].pages);
        printf("Price:");
        scanf("%lf", &books[i].price);
        printf("\n");

        if(count_vowels(books[i].name) > max_vowels){
            max_vowels = count_vowels(books[i].name);
            max_vowels_id = i;
        }

    }

    printf("Result:\n");
    printf("Name: %s\n", books[max_vowels_id].name);
    printf("Author: %s\n", books[max_vowels_id].author);
    printf("Pages: %d\n", books[max_vowels_id].pages);
    printf("Price: %lf\n", books[max_vowels_id].price);

    return 0;
}