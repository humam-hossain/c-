#include<iostream>
using namespace std;

class Student
{

private:
    string name;
    string roll_number;
    string phone_number;
    string address;

public:

    void setName (string n)
    {
        name = n;
    }
    void setRollNumber (string r)
    {
        roll_number = r;
    }
    void setPhoneNumber (string p)
    {
        phone_number = p;
    }
    void setAddress (string a)
    {
        address = a;
    }
    void showStudentinfo()
    {

        cout<<name<<endl;
        cout<<roll_number<<endl;
        cout<<phone_number<<endl;
        cout<<address<<endl;

    }

};
int main()
{

    Student s1,s2;

    s1.setName ("Sam");
    s1.setRollNumber ("12");
    s1.setPhoneNumber("01696996969");
    s1.setAddress("69/A");

    s1.showStudentinfo();

    cout<<"\n"<<endl;

    s2.setName ("John");
    s2.setRollNumber ("13");
    s2.setPhoneNumber("01969696969");
    s2.setAddress("69/B");

    s2.showStudentinfo();

    return 0;
}
