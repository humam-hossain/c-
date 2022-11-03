// Input a sentence and display the length of the highest word (May use a function. Or without function is also ok)

// Sample Input: Baby is sleeping
// Sample Output: 8

#include<stdio.h>
#include<string.h>
#define MAX_LIMIT 1000

int main()
{
    char sentence[MAX_LIMIT];
    int max_word_length=0;
    int j=0, count=0;

    fgets(sentence, MAX_LIMIT, stdin);

    for(int i=0; i<strlen(sentence); i++){
        if(sentence[i] == ' '){
            if(count > max_word_length){
                max_word_length = count;
            }
            j++;
            count=0;
        }else{
            count++;    
        }

    }

    if(count-1 > max_word_length){
        max_word_length = count - 1;
    }

    printf("%d", max_word_length);

    return 0;
}