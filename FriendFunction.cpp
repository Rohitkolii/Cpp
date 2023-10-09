#include <iostream>
using namespace std;

class B;
class A{
    private:
    int num1=20;

    friend void add(A,B);
};

class B{
    private:
    int num2=10;
    friend void add(A,B);
};

void add(A a, B b){
    cout<<"Sum is : "<<a.num1 + b.num2;
}

int main(){
    A obj1;
    B obj2;
    add(obj1, obj2);
    return 0;
}