#include <iostream>
using namespace std;

int main(){
    int pin, inp,balance=500;
    cout<<endl;
    cout << "----------------------------------------------------"<<endl;
    cout << "Welcome to ABC Bank"<<endl;
    cout << "----------------------------------------------------"<<endl;
    cout <<endl;
    cout << "Enter your 4 digit pin"<<endl;
    cin >> pin;
    cout <<endl;
    switch (pin){
    case 4444:
        cout <<"-----------------------------------------------------"<<endl;
        cout << "Wow Your Total Balance is : "<< balance <<endl;
        cout << "----------------------------------------------------"<<endl;
        cout <<endl;
        cout << "Select One : "<<endl;
        cout << "To Withdraw Enter : 1"<<endl;
        cout << "To Deposit Enter : 2"<<endl;

        cin >> inp;
        switch (inp){
            case 1:
            cout << "Enter Withdrawl Amount : ";
            cin >> inp;
            cout << "Successfully Withdrawl : "<<inp <<" Rupees" <<endl;    
            balance-=inp;
            cout<< endl;
            cout<< "Want to check balance : 1 for yes, any key for No : ";
            cin >> inp;
            switch (inp)
            {
            case 1:
                cout <<endl;
                cout << "----------------------------------------------------"<<endl;
                cout <<"Remaining Balance : " << balance;
                cout << "----------------------------------------------------"<<endl;
                break;
            
            default:
                cout << "Thank You vist Again :) ";
                break;
            }
            break;
            
            case 2:
            cout << "Enter Deposit Amount : "<<endl;
            cin >> inp;
            cout << "Successfully Deposit "<<inp <<"Rupees" <<endl;
            balance+=inp;
            cout<< endl;
            cout<< "Want to check balance : 1 for yes, any key for No ";
            cin >> inp;
            switch (inp)
            {
            case 1:
                cout << endl;
                cout << "----------------------------------------------------"<<endl;
                cout <<"Current Balance : " << balance;
                cout << "----------------------------------------------------"<<endl;
                break;
            
            default:
                cout << "Thank You vist Again :) ";
                break;
            }
            break;

            default:
            cout << "Wrong Input --- "<<endl;    
            break;
        }
        break;
    
    default:
            cout << "Wrong pin :( See you again!"<<endl;    
        break;
    }
    return 0;
}