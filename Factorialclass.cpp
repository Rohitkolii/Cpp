#include <iostream>
using namespace std;

class Factorial{
    private:
    int fact=1, inp;

    public:
    void read_Number(){
        cout<<"Enter Number : ";
        cin>> inp;
    }

    void display_Factorial(){
        for(int i = 1; i<=inp; i++){
            fact*=i;
        }

        cout<<"Factorial of " <<inp<<" is " <<fact<<endl;
    }
};

int main(){
    Factorial obj;
    obj.read_Number();
    obj.display_Factorial();
}