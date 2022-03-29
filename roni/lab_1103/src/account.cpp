#include <iostream>
#include <string>

using namespace std;

class Account
{
    string account_name, account_type;
    int account_no;
    double balance;

public:
    Account()
    {
        cout << "Account No: ";
        cin >> this->account_no;
        cout << "Account Name: ";
        cin >> this->account_name;
        cout << "Account Type: ";
        cin >> this->account_type;
        cout << "Balance: ";
        cin >> this->balance;
        cout << endl;
    }
    Account(int account_no, string account_name, string account_type, double balance)
    {
        this->account_name = account_name;
        this->account_no = account_no;
        this->balance = balance;
        this->account_type = account_type;
    }

    // setters
    void set_account_name(string account_name){
        this->account_name = account_name;
    }
    void set_account_no(int account_no){
        this->account_no = account_no;
    }
    void set_balance(double balance){
        this->balance = balance;
    }
    void set_account_type(string account_type){
        this->account_type = account_type;
    }

    // getters
    string get_account_name(){
        return this->account_name;
    }
    string get_account_type(){
        return this->account_type;
    }
    int get_account_no(){
        return this->account_no;
    }
    double get_balance(){
        return this->balance;
    }

    void deposit(int ammount){
        cout << "Depositing " << ammount <<" tk in the account no." << this->get_account_no() << endl;
        this->balance += ammount;
    }
    void withdraw(int ammount){
        cout << "Withdrawing " << ammount <<" tk from the account no." << this->get_account_no() << endl;
        this->balance -= ammount;
    }
    void transfer(int ammount, Account receiver){
        cout << "Transfering "<< ammount <<" tk from the account no." << this->get_account_no() << " to the account no." << receiver.get_account_no() << endl;
        this->balance -= ammount;
        receiver.balance += ammount;
    }
    void show_account_details(){
        cout << "Account No: " << this->account_no << endl;
        cout << "Account Name: " << this->account_name << endl;
        cout << "Account Type: " << this->account_type << endl;
        cout << "Balance: " << this->balance << endl;
    }

    ~Account(){

    }
};

int main()
{
    Account a1, a2;

    a1.withdraw(1000);
    a2.transfer(5000, a1);

    a1.show_account_details();
    a2.show_account_details();
}