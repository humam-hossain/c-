#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
public:
    string name;
    int age;
    virtual void getdata(){};
    virtual void putdata(){};
};
class Professor : public Person
{
public:
    int publications;
    static int pr_id;
    int cur_id = pr_id;

    Professor(){
        pr_id++;
    }

    void getdata(){
        cin >> name >> age >> publications;
    }

    void putdata(){
        //print name, age, publications, cur_id
        cout << name << " "<< age << " "<< publications << " " << cur_id << endl;
    }        
};
class Student : public Person
{
public:
    int marks;
    int sum=0;
    static int st_id;
    int cur_id = st_id;

    Student(){
        st_id++;
    }

    void getdata(){
        cin >> name >> age;
        for(int i=0; i<6; i++){
            cin >> marks;
            sum += marks;
        }
    }

    void putdata(){
        //print the name, age, sum of marks, cur_id
        cout << name << " "<< age << " " << sum << " " << cur_id << endl;
    }
};

int Professor::pr_id = 1;
int Student::st_id = 1;

int main(){
    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;
}
