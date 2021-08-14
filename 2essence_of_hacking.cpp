// The following math problem illustrates the essence of hacking:
// Use each of the numbers 1,3,4 and 6 exactly once with any
// of the four basic math operations (addition, subtraction,
// multiplication and division) to total. Each number must be
// used once and only once, and you may define the order of operations,
//  3 * (4+6) + 1 = 31 is valid, howerver incorrect, since it
// doesn't total 24.

// 6/(1–(3/4))
// = 6/(1/4)
// = 6 * 4
// = 24

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    // 24 = 4 * 6
    int i=0;
    string num_char("1346");
    char operators[14] = {'+','-','/','*','(',')','/(','*(','-(','+(',')/',')*',')+',')-'};
    string num_perm_arr[24];

    // number permutations
    do{
        num_perm_arr[i] = num_char;
        i++;
    }while(next_permutation(num_char.begin(), num_char.end()));

    // for(int i=0; i<24; i++){
    //     cout << num_perm_arr[i]<<endl;
    // }

    // operator permutations with repetition

    return 0;
    
}

/**
4
1 3 4 6
24

 * **/