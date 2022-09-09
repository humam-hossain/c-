#include<iostream>
// #include<conio.h>
// #include<math.h>

using namespace std;
int main()
{
    float m,h,BMI;

    cout<<"Value Of Mass:"<<endl;
    cin>>m;

    cout<<"Value of Height:"<<endl;
    cin>>h;

    BMI= m/(h*h);
    cout<<"BMI="<<BMI;

    return 0;
}
