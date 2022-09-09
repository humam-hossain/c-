#include<iostream>
using namespace std;

class Rectangle
{

private:
    double area;
    double length;
    double breadth;

public:

    void setLength()
    {
        cout<<"enter the value of length: ";
        double l;
        cin>>l;
        length=l;
    }
    void setBreadth()
    {
        cout<<"enter the value of breadth: ";
        double b;
        cin>>b;
        breadth=b;
    }
    void returnArea()
    {

        cout<<"Area of rectangle: "<<length*breadth<<endl;
    }
};
int main()
{

    Rectangle r;

    r.setLength();
    r.setBreadth();
    r.returnArea();

    return 0;
}
