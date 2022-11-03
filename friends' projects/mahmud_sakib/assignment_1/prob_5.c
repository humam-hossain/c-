// Input a word and display number of uppercase letters in that word using a function. 
// Sample Input: Apple
// Sample Output: 1

#include<stdio.h>
#include<string.h>

int CountUpper(char *p){
    int result = 0;

    for(int i=0; i<strlen(p); i++){
        if(p[i] >= 'A' && p[i] <= 'Z'){
            result++;
        }
    }

    return result;
}

int main()
{
    char word[1000];
    int result;

    scanf("%s", &word);
    result = CountUpper(word);
    printf("%d", result);

    return 0;
}
