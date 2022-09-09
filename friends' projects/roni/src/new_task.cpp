#include<iostream>
using namespace std;

class Person{
public:
    //class variables/class members;
    string name;
    int age;

    //Showing default constructor;
    Person(){};

    //creating parameterized Constructor using Constructor overloading;
    Person(string na,int a){
    name=na;
    age=a;
    }

    //Showing destructor;
    ~Person(){};

    //Showing setter method without constructor;
    void setpersoninfo(string n,int a){
    name=n;
    age=a;
    }

    //Showing getter method;
    string getname(){
        return name;
    }
    int getage(){
        return age;
    }

    //showing showpersoninfo method;
    void showpersoninfo(){
        cout<<"Person name: "<<getname()<<endl;
        cout<<"Person age: "<<getage()<<endl;
    }

};

class Employee:virtual public Person{
public:
    //class variables/class members;
    float salary;
    float workhour;

    //Showing default constructor;
    Employee(){};

    //creating parameterized Constructor using Constructor overloading;
    Employee(string na,int a,float s,float wh):Person(na,a){
        name=na;
        age=a;
        salary=s;
        workhour=wh;
    }

    //Showing destructor;
    ~Employee(){};

    //Showing setter method without constructor;
    void setemployeeinfo(string na,int a,float s,float wh){
        name=na;
        age=a;
        salary=s;
        workhour=wh;
    }

    //Showing getter method;
    string getname(){
        return name;
    }
    int getage(){
        return age;
    }
    float getsalary(){
        return salary;
    }
    float getworkhour(){
        return workhour;
    }

    //showing showemployeeinfo method;
    void showemployeeinfo(){
        cout<<"Employee name: "<<getname()<<endl;
        cout<<"Employee age: "<<getage()<<endl;
        cout<<"Employee salary: "<<getsalary()<<endl;
        cout<<"Employee work hour: "<<getworkhour()<<endl;
    }

};

class Student:virtual public Person{
public:
    //class variables/class members;
    string id;
    float mark;
    float cgpa;

    //Showing default constructor;
    Student(){};

    //creating parameterized Constructor using Constructor overloading;
    Student(string na,int a,string i,float m,float c):Person(na,a){
        name=na;
        age=a;
        id=i;
        mark=m;
        cgpa=c;
    }

    //Showing destructor;
    ~Student(){};

    //Showing setter method without constructor;
    void setstudentinfo(string na,int a,string i,float m,float c){
        name=na;
        age=a;
        id=i;
        mark=m;
        cgpa=c;
    }

    //Showing getter method;
    string getname(){
        return name;
    }
    int getage(){
        return age;
    }
    string getid(){
        return id;
    }
    float getmark(){
        return mark;
    }
    float getcgpa(){
        return cgpa;
    }

    //showing showstudentinfo method;
    void showstudentinfo(){
        cout<<"Student name: "<<getname()<<endl;
        cout<<"Student age: "<<getage()<<endl;
        cout<<"Student id: "<<getid()<<endl;
        cout<<"Student mark: "<<getmark()<<endl;
        cout<<"Student cgpa: "<<getcgpa()<<endl;
    }

};

class Faculty:public Employee{
public:
    //class variables/class members;
    string designation;
    float classhour;

    //Showing default constructor;
    Faculty(){};

    //creating parameterized Constructor using Constructor overloading;
    Faculty(string na,int a,float s,float wh,string ds,float ch):Employee(na,a,s,wh),Person(na,a){
        name=na;
        age=a;
        salary=s;
        workhour=wh;
        designation=ds;
        classhour=ch;
    }

    //Showing destructor;
    ~Faculty(){};

    //Showing setter method without constructor;
    void setfacultyinfo(string na,int a,float s,float wh,string ds,float ch){
        name=na;
        age=a;
        salary=s;
        workhour=wh;
        designation=ds;
        classhour=ch;
    }

    //Showing getter method;
    string getname(){
        return name;
    }
    int getage(){
        return age;
    }
    float getsalary(){
        return salary;
    }
    float getworkhour(){
        return workhour;
    }
    float getclasshour(){
        return classhour;
    }
    string getdesignation(){
        return designation;
    }

    //showing showfacultyinfo method;
    void showfacultyinfo(){
        cout<<"Faculty name: "<<getname()<<endl;
        cout<<"Faculty age: "<<getage()<<endl;
        cout<<"Faculty salary: "<<getsalary()<<endl;
        cout<<"Faculty work hour: "<<getworkhour()<<endl;
        cout<<"Faculty designation: "<<getdesignation()<<endl;
        cout<<"Faculty class hour: "<<getclasshour()<<endl;
    }

};

class Officer:public Employee{
public:
    //class variables/class members;
    string designation;
    string officeroom;

    //Showing default constructor;
    Officer(){};

    //creating parameterized Constructor using Constructor overloading;
    Officer(string na,int a,float s,float wh,string ds,string ofr):Employee(na,a,s,wh),Person(na,a){
        name=na;
        age=a;
        salary=s;
        workhour=wh;
        designation=ds;
        officeroom=ofr;
    }

    //Showing destructor;
    ~Officer(){};

    //Showing setter method without constructor;
    void setofficerinfo(string na,int a,float s,float wh,string ds,string ofr){
        name=na;
        age=a;
        salary=s;
        workhour=wh;
        designation=ds;
        officeroom=ofr;
    }

    //Showing getter method;
    string getname(){
        return name;
    }
    int getage(){
        return age;
    }
    float getsalary(){
        return salary;
    }
    float getworkhour(){
        return workhour;
    }
    string getdesignation(){
        return designation;
    }
    string getofficeroom(){
        return officeroom;
    }

    //showing showofficerinfo method;
    void showofficerinfo(){
        cout<<"Officer name: "<<getname()<<endl;
        cout<<"Officer age: "<<getage()<<endl;
        cout<<"Officer salary: "<<getsalary()<<endl;
        cout<<"Officer work hour: "<<getworkhour()<<endl;
        cout<<"Officer designation: "<<getdesignation()<<endl;
        cout<<"Officer office room: "<<getofficeroom()<<endl;
    }

};

class TA:public Student,public Employee{
public:
    //class variables/class members;
    string underwork;

    //Showing default constructor;
    TA(){};

    //creating parameterized Constructor using Constructor overloading;
    TA(string na,int a,string i,float s,float m,float c, float wh,string uw):Employee(na,a,s,wh),Student(na,a,i,m,c),Person(na,a){
        name=na;
        age=a;
        id=i;
        salary=s;
        workhour=wh;
        underwork=uw;
        mark=m;
        cgpa=c;
    }

    //Showing Destructor;
    ~TA(){};

    //Showing setter method without constructor;
    void settainfo(string na,int a,string i,float s,float m,float c, float wh,string uw){
        name=na;
        age=a;
        id=i;
        salary=s;
        workhour=wh;
        underwork=uw;
        mark=m;
        cgpa=c;
    }

    //Showing getter method;
    string getname(){
        return name;
    }
    int getage(){
        return age;
    }
    string getid(){
        return id;
    }
    float getsalary(){
        return salary;
    }
    float getmark(){
        return mark;
    }
    float getcgpa(){
        return cgpa;
    }
    float getworkhour(){
        return workhour;
    }
    string getunderwork(){
        return underwork;
    }

    //showing showtainfo method;
    void showtainfo(){
        cout<<"TA name: "<<getname()<<endl;
        cout<<"TA age: "<<getage()<<endl;
        cout<<"TA id: "<<getid()<<endl;
        cout<<"TA salary: "<<getsalary()<<endl;
        cout<<"TA mark: "<<getmark()<<endl;
        cout<<"TA cgpa: "<<getcgpa()<<endl;
        cout<<"TA work hour: "<<getworkhour()<<endl;
        cout<<"TA work under: "<<getunderwork()<<endl;
    }

};

class Scholarship:public Student{
public:
    //class variables/class members;
    float markpercentage;

    //Showing default constructor;
    Scholarship(){};

    //creating parameterized Constructor using Constructor overloading;
    Scholarship(string na,int a,string i,float m,float c,float mp):Student(na,a,i,m,c),Person(na,a){
        name=na;
        age=a;
        id=i;
        mark=m;
        cgpa=c;
        markpercentage=mp;
    }

    //Showing Destructor;
    ~Scholarship(){}

    //Showing setter method without constructor;
    void setscholarshipinfo(string n,int a,string i,float m,float c,float mp){
        name=n;
        age=a;
        id=i;
        mark=m;
        cgpa=c;
        markpercentage=mp;
    }

    //Showing getter method;
    string getname(){
        return name;
    }
    int getage(){
        return age;
    }
    string getid(){
        return id;
    }
    float getmark(){
        return mark;
    }
    float getcgpa(){
        return cgpa;
    }
    float getmarkpercentage(){
        return markpercentage;
    }

    //showing showscholarshipinfo method;
    void showscholarshipinfo(){
    cout<<"Scholarship Student name: "<<getname()<<endl;
    cout<<"Scholarship Student age: "<<getage()<<endl;
    cout<<"Scholarship Student id: "<<getid()<<endl;
    cout<<"Scholarship Student mark: "<<getmark()<<endl;
    cout<<"Scholarship Student cgpa: "<<getcgpa()<<endl;
    cout<<"Scholarship Student mark parcentage: "<<getmarkpercentage()<<endl;
    }

};

int main (){
    Person p1("Alim",45);
    p1.showpersoninfo();
    cout<<endl<<endl;
    Employee em1("Mia",27,50000.00,4.5);
    em1.showemployeeinfo();
    cout<<endl<<endl;
    Student st1("Siam",21,"22-467731-1",99.0,3.88);
    st1.showstudentinfo();
    cout<<endl<<endl;
    Faculty f1("Risala",69,12000,9.5,"English professor",4.5);
    f1.showfacultyinfo();
    cout<<endl<<endl;
    Officer of1("Alo",36,89000,9.5,"chairman","DS12345");
    of1.showofficerinfo();
    cout<<endl<<endl;
    TA ta1("Tahasin",24,"18-46773-2",50000,99,3.92,5.5,"Seyda Anika");
    ta1.showtainfo();
    cout<<endl<<endl;
    Scholarship sc1("Ahmed",22,"22-46773-1",98,3.90,88);
    sc1.showscholarshipinfo();

    return 0;
}
