// Input a word and display the ratio between vowels and consonants of that word using a function. 
// Sample Input: Apple
// Sample Output: 0.666667
#include<stdio.h>
#include<string.h>

float Ratio(char *p){
    float vowels = 0, consonents;
    
    for(int i=0; i<strlen(p); i++){
        if(p[i] == 'a' || p[i] == 'e' || p[i] == 'i' || p[i] == 'o' || p[i] == 'u' || p[i] == 'A' || p[i] == 'E' || p[i] == 'I' || p[i] == 'O' || p[i] == 'U'){
            vowels++;
        }
    }

    consonents = strlen(p) - vowels;

    return vowels/consonents;
}

int main()
{
    char word[1000];
    float ratio;

    scanf("%s", word);
    ratio = Ratio(word);
    printf("%f", ratio);

    return 0;
}