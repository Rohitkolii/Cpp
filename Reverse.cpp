#include <iostream>
using namespace std;

class Reverse{
    private:
    int num, rev=0, rem;

    public:
    void input(){
        cout<<"Enter Number : ";
        cin>>num;
    }

    void Reversed(){
        while(num>0){
            rem=num%10;
            rev=(rev*10)+rem;
            num=num/10;
        }
        cout<<"Reversed Number is : "<<rev;
    }
    
};

int main(){
    Reverse ob;
    ob.input();
    ob.Reversed();
    return 0;
}