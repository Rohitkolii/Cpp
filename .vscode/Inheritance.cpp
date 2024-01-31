#include <iostream>
using namespace std;

class Base{
    private:
    int a, b;
    public:
    void input(){
        cout<< "Enter value of A";
        cin>> a;
        cout<< "Enter value of B";
        cin >> b;
    }

    void sum(){
        cout<< "Sum is" << a + b;
    }
};

class Base2: public Base{
    public:
    void sayhello(){
        cout<<"Hello Guys";
    }
};

class Derived : public Base2{

};

int main(){
    Derived ob1;
    ob1.input();
    ob1.sum();
    ob1.sayhello();
}