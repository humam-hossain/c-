// Input a sentence and display the length of each word (May use a function. Or without function is also ok)

// Sample Input: Baby is sleeping
// Sample Output: 4 2 8

#include<stdio.h>
#include<string.h>
#define MAX_LIMIT 1000

int main()
{
    char sentence[MAX_LIMIT];
    int word_length[MAX_LIMIT];
    int j=0, count=0;

    fgets(sentence, MAX_LIMIT, stdin);

    for(int i=0; i<strlen(sentence); i++){
        if(sentence[i] == ' '){
            word_length[j] = count;
            j++;
            count=0;
        }else{
            count++;    
        }

    }

    word_length[j] = count-1;

    for(int i=0; i<=j; i++){
        printf("%d ", word_length[i]);
    }

    return 0;
}