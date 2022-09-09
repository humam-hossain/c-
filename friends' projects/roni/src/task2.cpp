#include<iostream>
using namespace std;
int main()
{
    int i, mark[5];
    float sum=0, avg, perc;
    cout<<"Enter Marks obtained in 5 Subjects: ";
    for(i=0; i<5; i++)
    {
        cin>>mark[i];
        sum = sum+mark[i];
    }
    avg = sum/5;

    cout<<" Total Number "<<sum;
    cout<<"\nAverage Marks = "<<avg;

    cout<<endl;
    return 0;
}