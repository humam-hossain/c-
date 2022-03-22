#include<iostream>
using namespace std;

//class ClassName { body };
class Student{
//access modifiers
private:
    //properties/attributes/data members
    string name="";
    string id="";
    int age=0;
    float cgpa=0;

public:
        //setter method
    void setName(string n){
        name = n;
    }

    void setId(string i){
        id = i;
    }

    void setAge(int a){
        age = a;
    }

    void setCgpa(float c){
        if(c>=0 && c <=4){
            cgpa = c;
        }
        else{
            cout<<"Invalid CGPA Value"<<endl;
        }
    }
    //getter method
    float getCgpa(){
        return cgpa;
    }

    //methods
    void showStudentInfo(){
        cout<< name <<endl;
        cout<< id <<endl;
        cout<< age <<endl;
        cout<< cgpa <<endl;
    }

};

int main(){
    //student

    Student s1;
    //s1.showStudentInfo(); //showing the default values

    s1.name = "Karim";
    //s1.cgpa = 3.75;

    s1.setName("Karim");
    s1.setId("20-XXXX1-2");
    s1.setAge(21);
    s1.setCgpa(3.77);

    s1.showStudentInfo();

        cout<<s1.getCgpa();



return 0;
}
