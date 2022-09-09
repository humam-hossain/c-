#include <iostream>

using namespace std;


int main()
{
    int num1, num2;

    cout <<"Enter Two Integers: ";
    cin >>num1>> num2;

    if ( num1 % num2 == 0 ){
        cout <<num1<< " Is a Multiple Of " <<num2<<endl;
    }else{
        cout <<num1<< " Is Not a Multiple Of " <<num2<<endl;
    }
        


    return 0;

}
