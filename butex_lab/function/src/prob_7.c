#include<stdio.h>
#include<string.h>

int is_palindrome(char str[])
{
    int c;
    char temp[strlen(str)];

    strcpy(temp, str);
    strrev(temp);
    c = strcmp(temp, str);

    if(c == 0){
        return 1;
    }

    return 0;
}

int main()
{
    char str[256];
    scanf("%s", str);

    printf("%d", is_palindrome(str));

    return 0;
}
