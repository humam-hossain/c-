#include <iostream>
#include "trieType.h"
using namespace std;
int main() {

    // Created a array tester . . . . .
    std::string words[] = {"riasat", "abeer", "sadeed", "pramanik"};
    int size = sizeof(words) / sizeof(words[0]);

    // Created trieType node . . . . . .
    trieType::Node *root = new trieType::Node();

    // inserted all values from tester . . . . . .
    for (int i = 0; i < size; i++)
        root->insert(words[i]);

    // searching prefix from trie object
    if(root->startsWith("sad")){
        cout << "true" << endl;
    }else {
        cout << "false" << endl;
    }

    root->trieDelete("sadeed");

    if(root->startsWith("sadeed")){
        cout << "true" << endl;
    }else {
        cout << "false" << endl;
    }
    
    // searching values from trie object . . . .
    // if(root->search("SDSSA")){
    //     cout << "yES" << endl;
    // }else{
    //     cout << "No" << endl;
    // }


    return 0;
}