#include <iostream>
using namespace std;

class A{
    public:
    void print(){
        cout<<"Hello" <<endl;
    }
};

class B{
    public:
    void print(int x){
        cout << x<< endl;
    }
};

class C{
    public:
    void print(int x, int y){
        cout << x << " " << y <<endl;
    }
};

int main(){
    A obj ; B ob2 ; C ob3;
    obj.print();
    ob2.print(5);
    ob3.print(5,6);
}