#include <iostream>
#include <string>

using namespace std;

class Mobile
{
    string owner_name, sim_number, os_name;
    double balance;
    bool lock_status;

public:
    Mobile(){
        cout << "Owner Name: ";
        cin >> this->owner_name;
        cout << "OS name: ";
        cin >> this->os_name;
        cout << "SIM Number: ";
        cin >> this->sim_number;
        cout << "Balance: ";
        cin >> this->balance;
        cout << "Lock Status: ";
        cin >> this->lock_status;

        cout << endl;
    }
    Mobile(string owner_name, string os_name, string sim_number, double balance, bool lock_status){
        this->owner_name = owner_name;
        this->os_name = os_name;
        this->sim_number = sim_number;
        this->balance = balance;
        this->lock_status = lock_status;
    }

    // setters
    void set_owner_name(string owner_name){
        this->owner_name = owner_name;
    }
    void set_os_name(string os_name){
        this->os_name = os_name;
    }
    void set_sim_number(string sim_number){
        this->sim_number = sim_number;
    }
    void set_balance(double balance){
        this->balance = balance;
    }
    void set_lock_status(bool lock_status){
        this->lock_status = lock_status;
    }

    // getters
    string get_owner_name(){
        return this->owner_name;
    }
    string get_os_name(){
        return this->os_name;
    }
    string get_sim_number(){
        return this->sim_number;
    }
    double get_balance(){
        return this->balance;
    }
    bool get_lock_status(){
        return this->lock_status;
    }

    void show_info(){
        cout << "Owner Name: " << this->owner_name << endl;
        cout << "OS name: " << this->os_name << endl;
        cout << "SIM Number: " << this->sim_number << endl;
        cout << "Balance: " << this->balance << endl;
        cout << "Lock Status: " << this->lock_status << endl;

        cout << endl;
    }

    void recharge(int ammount){
        if(!this->lock_status){
            cout << "Recharging " << ammount << " tk ..." << endl;
            this->balance += ammount;
        }else{
            cout << "Error: "<< this->sim_number <<" is locked" << endl;
        }

    }

    void call_someone(int time_duration){
        if(!this->lock_status){
            cout << "Call duration " << time_duration << " min" << endl;
            this->balance -= time_duration * 0.5;
        }else{
            cout << "Error: "<< this->sim_number <<" is locked" << endl;
        }
    }

    ~Mobile(){

    }
};


int main(){
    Mobile m1, m2;

    m1.recharge(10);
    m2.call_someone(2);

    m1.show_info();
    m2.show_info();
}