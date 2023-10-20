#include <iostream>
using namespace std;

class Palindrome{
    private:
    int num, rev=0, rem, sum=0;

    public:
    void input(){
        cout<<"Enter Number : ";
        cin>>num;
    }

    void check(){
        while(num>0){
            rem=num%10;
            sum+=rem;
            num=num/10;
        }
        cout<<"Sum is : "<<sum;
    }
    
};

int main(){
    Palindrome ob;
    ob.input();
    ob.check();
    return 0;
}