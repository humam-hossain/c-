/*
13. Write a C program which can input a word and display the following:
    Number of uppercase vowels
    Ratio of lowercase and uppercase letters
    Whether exist same letter in two consecutive positions
*/

#include <stdio.h>

#define MAX_LIMIT 1000

int main()
{
    char p[MAX_LIMIT];
    int cap_vowels = 0;
    double uppercases = 0, lowercases = 0;
    int same_exists = 0;

    scanf("%s", &p);

    for (int i = 0; p[i] != '\0'; i++)
    {
        if (p[i] >= 'A' && p[i] <= 'Z')
        {
            uppercases++;

            if (p[i] == 'A' || p[i] == 'E' || p[i] == 'I' || p[i] == 'O' || p[i] == 'U')
            {
                cap_vowels++;
            }
        }
        else
        {
            lowercases++;
        }

        if (p[i] == p[i + 1])
        {
            same_exists = 1;
        }
    }

    printf("Number of uppercase vowels: %d\n", cap_vowels);
    printf("Ratio of lowercase and uppercase letters: %lf\n", lowercases / uppercases);

    if (same_exists == 1)
    {
        printf("exists same letter in two consecutive positions");
    }
    else
    {
        printf("does not exist same letter in two consecutive positions");
    }

    return 0;
}