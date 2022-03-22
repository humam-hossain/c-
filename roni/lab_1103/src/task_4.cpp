#include <iostream>
using namespace std;

class Box
{
private:
    double length;
    double width;
    double height;

public:
    // setters
    void setLength()
    {
        cout << "Enter the value of length: ";
        cin >> length;
    }
    void setWidth(){
        cout << "Enter the value of width: ";
        cin >> width;
    }
    void setHeight(){
        cout << "Enter the value of height: ";
        cin >> height;
    }

    // getters
    double getLength()
    {
        return length;
    }
    double getWidth()
    {
        return width;
    }
    double getHeight()
    {
        return height;
    }
};

int main()
{
    Box b;

    b.setLength();
    b.setWidth();
    b.setHeight();

    cout << "The volume of the box is " << b.getLength() * b.getWidth() * b.getHeight();

    return 0;
}