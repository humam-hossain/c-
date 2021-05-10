#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> num;
    int temp, temp_size=0;
    char ch;
    
    stringstream ss;
    ss << str;
    
    // cout << size << endl;
    
    for(int i=0; i < str.size(); i++){
        ss >> temp;
        num.emplace_back(temp);
        
        if(ss >> ch){
            temp_size++;
        }else{
            break;
        }
    }
    
    return num;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
