#include <iostream>
using namespace std;

class A{
    public:
    virtual void disp(){
        cout<<"Its Class A";
    }
};

class B:public A{
    public:
    void disp(){
        cout<<"Its Class B";
    }
};

int main(){
    A *ptr; B obj;
    ptr = &obj;
    ptr->disp();
    obj.disp();
}