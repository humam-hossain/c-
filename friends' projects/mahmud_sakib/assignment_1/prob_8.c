// Input a sentence and display the longest word (May use a function. Or without function is also ok)

// Sample Input: Baby is sleeping
// Sample Output: sleeping

#include<stdio.h>
#include<string.h>
#define MAX_LIMIT 1000

int main()
{
    char sentence[MAX_LIMIT];
    char max_word[MAX_LIMIT];
    int spaces_index[MAX_LIMIT];
    int j = 0, i, m, n, length=0;


    for(int i=0; i<MAX_LIMIT; i++){
        spaces_index[i] = -1;
    }

    fgets(sentence, MAX_LIMIT, stdin);

    for(int i=0; i<strlen(sentence); i++){
        if(sentence[i] == ' '){
            spaces_index[j] = i;
            j++;
        }
    }

    i = 0;
    m = -1;
    n = spaces_index[i];

    while(spaces_index[i] != -1){
        if(n-m-1 > length){
        }
    }

    return 0;
}