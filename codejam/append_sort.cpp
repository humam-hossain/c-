#include <bits/stdc++.h>

using namespace std;

void solve(int t) {
    cout << "Case #" << t << ": ";

    int n, num[100];
    int temp, result = 0;

    cin >> n;

    for(int i=0; i<n; i++) cin >> num[i];


    for(int i=0; i<n-1; i++){
        if(num[i] >= num[i+1]){
            num[i+1] = num[i+1] * 10;
            result++;
            i--;
        }
    }

    cout << result << endl;
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++) solve(t);
}

/*
    100 7 10
    100 700 1000


    22 45 77
*/