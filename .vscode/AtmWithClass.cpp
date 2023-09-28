#include <iostream>
using namespace std;

class accountdetail{
    private:
    int accountno;
    char name[20], address[20];
    float balance;

    public:
    void create(){
        cout << "Enter the customer name : ";
        cin >> name;

        cout << "Enter the customer address : ";
        cin >> address;

        fflush(stdin);

        cout << "Enter the customer account : ";
        cin >> accountno;

        cout << "Enter the customer Balance : ";
        cin >> balance;
    }

    void display(){
        cout << "customer Name : "<<name<<endl;
        cout << "customer Address : "<<address<<endl;
        cout << "customer Account No. : "<<accountno<<endl;
        cout << "customer Opening Balance : "<<balance<<endl;
    }

    void deposit(float amount){
        balance = balance + amount;
        cout <<amount<< " is deposited successfully"<<endl;
    }

    void withdraw(float amount){
        if(amount <= balance){
            cout<<amount <<" Withdrwan Successfully!"<<endl;
            balance=balance-amount;
        }
        else
            cout<<"Insufficient Balance!"<<endl;
    }

    float balancecheck(){
        return balance;
    }
};

int main(){
    int inp;
    accountdetail c1;
    cout << "--------------------------"<<endl;
    cout << "Welcome to ABC Bank"<<endl;
    cout << "--------------------------"<<endl;
    cout<<endl;

    cout << "--------------------------"<<endl; 
    cout << "Create Account"<<endl;
    cout << "--------------------------"<<endl;
    cout <<endl;
    c1.create();

    cout << "--------------------------"<<endl;
    cout << "Your Account Details"<<endl;
    cout << "--------------------------"<<endl<<endl;
    c1.display();

    cout << "--------------------------"<<endl;
    cout << "Select One"<<endl;
    cout << "Enter 1 for Deposit "<<endl;
    cout << "Enter 2 for Withdraw "<<endl;
    cout << "--------------------------"<<endl<<endl;
    cin >> inp;

    switch (inp){
    case 1:
        cout << "Enter Amount : "<<endl;
        cin >> inp;
        c1.deposit(inp);
        break;
    
    case 2:
        cout << "Enter Amount : "<<endl;
        cin >> inp;
        c1.withdraw(inp);
        break;

    default:
    cout <<"Wrong Input! :("<<endl;
    break;
    }
    
    cout << "Remaining Balance : ";
    cout << c1.balancecheck()<<endl;
    return 0;
}