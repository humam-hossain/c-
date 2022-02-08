#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter 2 Integer ";

    cin>>a>>b;

    if(a%2==0)
    {
        cout<<a<<" Is Even"<<endl;
    }

    else
    {
        cout<<a<<" Is Odd"<<endl;

    }

    if(b%2==0)
    {
        cout<<b<<" Is Even"<<endl;

    }
    else
    {
        cout<<b<<" Is Odd"<<endl;

    }

    if(a>b)
    {
        cout<<a<<" Is The Maximum Number"<<endl;

    }
    else
    {
        cout<<b<<" Is The Maximum Number"<<endl;
    }


    return 0;
}
