// 3. Use FUNCTIONS to find the areas of different geometrical figures. This has 4 options that 
// can be chosen by the user. The 4 options are –  
// 1) Area of circle,  
// 2) Area of rectangle,  
// 3) Area of triangle,  
// 4) Area of square.  
// After choosing, the geometric figure user will give corresponding inputs (For example in 
// Circle user have to give the Radius). 

#include <iostream>
#include <cmath>

using namespace std;

void circle()
{
    double radius;

    cout << "Circle radius, r = ";
    cin >> radius;

    cout << "Area = " << M_PI * radius * radius;
}

void rectangle()
{
    double length, width;

    cout << "Length = ";
    cin >> length;

    cout << "Width = ";
    cin >> width;

    cout << "Area = " << length * width << endl;
}

void triangle()
{
    double base, height;

    cout << "Base = ";
    cin >> base;

    cout << "Heigth = ";
    cin >> height;

    cout << "Area = " << 0.5 * base * height << endl;
}

void square()
{
    double side;

    cout << "Side = ";
    cin >> side;

    cout << "Area = " << side * side << endl;
}
int main()
{
    int n;

    cout << "1) Area of circle," << endl;
    cout << "2) Area of rectangle," << endl;
    cout << "3) Area of triangle," << endl;
    cout << "4) Area of square." << endl;

    cout << "Enter a number to find the area of different geometrical figures: ";
    cin >> n;

    if(n == 1){
        circle();
    }else if(n == 2){
        rectangle();
    }else if(n == 3){
        triangle();
    }else if(n == 4){
        square();
    }
    
}