#include <iostream>
using namespace std;

class Account{
    private:
    string name = "Rohan", address = "Saket";
    int Balance = 500, input;
    double Account_number = 222222222222;

    public:
    void display_balance(){
        cout<<"Your Balance is : " <<Balance<<endl;
    }

    void withdraw(){
        cout<<"Enter Withdrawing Amount : "<<endl;
        cin>>input;
        if(input > Balance){
            cout<<"Insufficient Balance"<<endl;
        }else{
            Balance-=input;
            cout<<"Available balance is : "<<Balance<<endl;
        }
    }

    friend void display_info(Account);
};

void display_info(Account obj){
    cout<<"==== Account Information ===="<<endl;
    cout<<"Name : " << obj.name <<endl;
    cout<<"Account Number : " << obj.Account_number <<endl;
    cout<<"Balance : " << obj.Balance <<endl;
    cout<<"Address : " << obj.address <<endl;
}

int main(){
    Account c1; int inp;
    cout<< "press 1 to continue"<<endl;
    cin>> inp;

    while(inp){
        cout<<"What you want to perform : "<<endl;
        cin>>inp;

        switch (inp){
        case 1:
        c1.display_balance();
        break;
        case 2:
        c1.withdraw();
        break;
        case 3:
        display_info(c1);
        break;
        
        default:
            break;
        }
    }

}