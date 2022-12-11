#include<stdio.h>
#include<string.h>
#include<ctype.h>

int is_palindrome(char str[])
{
    int i;    
    char temp[strlen(str)];

    strcpy(temp, str);
    strrev(temp);

    for(i = 0; i<strlen(str); i++){
        if(tolower(temp[i]) != tolower(str[i])){
            return 0;
        }
    }

    return 1;
}

int main()
{
    char str[1000];

    gets(str);
    
    if(is_palindrome(str)){
        printf("palindrome");
    }else{
        printf("not palindrome");
    }

    return 0;
}