#include <iostream>
using namespace std;

class Palindrome{
    private:
    int num, rev=0, rem, temp;

    public:
    void input(){
        cout<<"Enter Number : ";
        cin>>num;
    }

    void check(){
        temp = num;
        while(num>0){
            rem=num%10;
            rev=(rev*10)+rem;
            num=num/10;
        }
        if(temp == rev)
        cout<<"Palindrome :) ";
        else
        cout<<"Not Palindrome!";
    }
    
};

int main(){
    Palindrome ob;
    ob.input();
    ob.check();
    return 0;
}