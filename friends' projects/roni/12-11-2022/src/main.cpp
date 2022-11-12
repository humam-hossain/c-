#include <iostream>
using namespace std;

#define max_friends 100000

int friends[max_friends];
int z = -1;

int empty()
{
    return (z == -1);
}
void push(int x)
{
    friends[++z] = x;
}
int top()
{
    return friends[z];
}
int pop()
{
    return friends[z--];
}

void solve()
{
    int n, k;
    cin >> n;
    cin >> k;

    int friends[n];

    for (int i = 0; i < n; i++)
    {
        cin >> friends[i];

        z = -1;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            while (!empty() && (friends[i] > top()) && (count < k))
            {
                pop();
                count++;
            }
            push(friends[i]);
        }
        while (!empty() && count < k)
        {
            pop();
            count++;
        }
    }
    int real_friends[n - k], i = n - k - 1;

    while (!empty())
    {
        real_friends[i--] = top();
        pop();
    }
    for (int i = 0; i < n - k; i++)
    {
        cout << real_friends[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}