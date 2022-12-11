#include<stdio.h>

int is_vowel(char ch)
{
    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        return 1;
    }

    return 0;
}

int main()
{
    int i, count = 0;
    char str[1000];

    gets(str);

    for(i=0; str[i] != '\0'; i++){
        if(is_vowel(str[i]) == 1){
            count++;
        }
    }

    printf("%d", count);

    return 0;
}