#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int year_of_joining;
    double salary;
    string address;

public:
    // setters
    void setName(string a){
        name = a;
    }
    void setYearOfJoining(int a){
        year_of_joining = a;
    }
    void setSalary(double a){
        salary = a;
    }
    void setAddress(string a){
        address = a;
    }

    void info(){
        cout << name << "\t" << year_of_joining << "\t" << address << endl;
    }
};

int main()
{
    Employee emp1, emp2, emp3;

    emp1.setName("Robert");
    emp1.setYearOfJoining(1994);
    emp1.setAddress("64C-WallsStreat");

    emp2.setName("Sam");
    emp2.setYearOfJoining(2000);
    emp2.setAddress("68D-WallsStreat");

    emp3.setName("John");
    emp3.setYearOfJoining(1999);
    emp3.setAddress("26B-WallsStreat");

    cout << "Name\tYear of Joining\tAddress"<< endl;
    emp1.info();
    emp2.info();
    emp3.info();
    
    return 0;
}