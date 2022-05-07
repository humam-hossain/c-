#include <iostream>

using namespace std;

class Employee
{
protected:
    int employeeID;
    string employeeName;
    double salary;

public:
    Employee(){};
    Employee(int employeeID, string employeeName, double salary)
    {
        this->employeeID = employeeID;
        this->employeeName = employeeName;
        this->salary = salary;
    }

    ~Employee(){};

    // getters
    int getEmployeeID()
    {
        return this->employeeID;
    }

    string getEmployeeName()
    {
        return this->employeeName;
    }

    double getSalary()
    {
        return this->salary;
    }

    // setters
    void setEmployeeID(int employeeID)
    {
        this->employeeID = employeeID;
    }
    void setEmployeeName(string employeeName)
    {
        this->employeeName = employeeName;
    }
    void setSalary(double salary){
        this->salary = salary;
    }

    void showDetails()
    {
        cout << "Employee ID: " << this->employeeID << "\nEmployee Name: " << this->employeeName << "\nSalary: " << this->salary << endl;
    }
};

class Salesman : public Employee
{
    string salesArea, productName;
    int managerID;

public:

    Salesman(int employeeID, string employeeName, double salary, string salesArea, string productName, int managerID) : Employee(employeeID, employeeName, salary)
    {
        this->salesArea = salesArea;
        this->productName = productName;
        this->managerID = managerID;
    }

    ~Salesman(){};

    // getters
    string getSalesArea()
    {
        return this->salesArea;
    }
    string getProductName()
    {
        return this->productName;
    }
    int getManagerID()
    {
        return this->managerID;
    }

    // setters
    void setSalesArea(string salesArea)
    {
        this->salesArea = salesArea;
    }
    void setProductName(string productName)
    {
        this->productName = productName;
    }
    void setManagerID(int managerID){
        this->managerID = managerID;
    }

    void showDetails()
    {
        cout << "Employee ID: " << this->employeeID << "\nEmployee Name: " << this->employeeName << "\nSalary: " << this->salary << "\nSales Area: " << this->salesArea << "\nProduct Name: " << this->productName << "\nManager ID: " << this->managerID << endl;
    }
};

class Manager : public Employee
{
    string territoryName;

public:
    Manager(int employeeID, string employeeName, double salary, string territoryName) : Employee(employeeID, employeeName, salary)
    {
        this->territoryName = territoryName;
    }

    ~Manager(){};

    void showDetails()
    {
        cout << "Employee ID: " << this->employeeID << "\nEmployee Name: " << this->employeeName << "\nSalary: " << this->salary << "\nTerritory Name: " << this->territoryName << endl;
    }

    void incrementSalary(Salesman* salesman, double amount)
    {
        if(salesman->getManagerID() == this->employeeID){
            double newSalary = salesman->getSalary() + amount;
            // cout << newSalary << endl;

            salesman->setSalary(newSalary);
        }
    }
};


int main()
{
    Manager manager(1, "Rayhan", 20000, "Banasree");
    manager.showDetails();

    cout << endl;

    Salesman salesman(1, "Abdullah", 10000, "Banasree", "puppy", 1);
    salesman.showDetails();

    cout << endl;

    manager.incrementSalary(&salesman, 1000);
    salesman.showDetails();

    return 0;
}