#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int scores[1000];
    int min = 0, max = 0, min_r = 0, max_r = 0;

    cin >> n;
    cin >> scores[0];
    
    max = scores[0];
    min = scores[0];

    for(int i=1; i<n; i++){
        cin >> scores[i];

        if(scores[i] > max){
            max = scores[i];
            max_r++;
        }else if(scores[i] < min){
            min = scores[i];
            min_r++;
        }
    }

    cout << max_r << " " << min_r;
    
    return 0; 

}