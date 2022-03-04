// 2. The game will ask to write a word using a given letter, and while the world entered the 
// program will check the word if it has that character and show the result.  
// Example: 
// How many characters: 3 
// Must have character: c 
// Write your answer: cat 
// Your given word cat has 3 character and character c 

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    srand(time(NULL));

    int c_num = 2 + rand() % 9;
    char c = 'a' + rand() % 26;
    char answer[100];
    bool isTrue = false;

    cout << "How many characters: " << c_num << endl;
    cout << "Must have character: " << c << endl;
    cout << "Write your answer: ";
    cin >> answer;

    for(int i=0; i<strlen(answer); i++){
        if(answer[i] == c){
            isTrue = true;
        }
    }

    if(strlen(answer) == c_num && isTrue){
        cout << "Your given word " << answer << " has " << c_num << " character and character " << c;
    }else{
        cout << "Your given word " << answer << " has not " << c_num << " character and character " << c;
    }

}