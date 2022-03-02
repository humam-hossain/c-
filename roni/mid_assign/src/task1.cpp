// 1. A simple grade conversion that can convert the numerical value to letter grade and grade 
// point. 
// Example:  
// Input Marks: 91 
// Your Grade is: A+ 
// Your Grade Point is: 4

#include <iostream>

using namespace std;

int main()
{
    double mark;

    cout << "Input Marks: ";
    cin >> mark;

    if(mark >= 90){
        cout << "Your Grade is: A+\nYour Grade Point is: " << 4;
    }else if(mark >= 85){
        cout << "Your Grade is: A\nYour Grade Point is: " << 3.75;
    }else if(mark >= 80){
        cout << "Your Grade is: B+\nYour Grade Point is: " << 3.5;
    }else if(mark >= 75){
        cout << "Your Grade is: B\nYour Grade Point is: " << 3.25;
    }else if(mark >= 70){
        cout << "Your Grade is: C+\nYour Grade Point is: " << 3;
    }else if(mark >= 65){
        cout << "Your Grade is: C+\nYour Grade Point is: " << 2.75;
    }else if(mark >= 60){
        cout << "Your Grade is: D+\nYour Grade Point is: " << 2.5;
    }else if(mark >= 50){
        cout << "Your Grade is: D+\nYour Grade Point is: " << 2.25;
    }else {
        cout << "Your Grade is: F\nYour Grade Point is: " << 0;
    }
}