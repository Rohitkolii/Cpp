#include <iostream>
#include <stdexcept>
using namespace std;

int main(){
double balance = 1000;

try{
    double amt;
    cout<<"Enter Deposit Amount";
    cin>>amt;
    if(amt<=0){
        throw invalid_argument("Invalid Amount");
    }
    balance=balance+amt;
    cout<<"Available Balance is "<< balance;

    //Withdraw

    cout<<"Enter Withdraw Amount";
    cin>>amt;
    if(amt>balance){
        throw runtime_error("Insufficient Balance!");
    }
    balance-=amt;
    cout<<"Available Balance"<<balance;
} catch(exception & e){
    cout<<e.what();
    }
}