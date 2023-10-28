#include <iostream>
#include <cstring>
using namespace std;

class palindrome{
    private:
    char a[20];
    int i,j, f=0;

    public:
    void input(){
        cout<<"Enter Word : ";
        cin>>a;
    }

    void check(){
        for(i=0; i<strlen(a); i++){
            if(a[i] != a[strlen(a)-i-1]){
                f=1;
                break;
            }
        }
        if(f==1){
            cout<<"Not Palindrome";
        } else cout<<"Palindrome";
    }
};

int main(){
    palindrome ob;
    ob.input();
    ob.check();
    return 0;
}