#include <iostream>
using namespace std;

class complex{
    private:
    int real,img;

    public:
    void input(){
        cout<<"Enter Real & Imaginary Value : ";
        cin>>real>>img;
    }

    void output(){
        cout<<real;
        if(img>=0)
        cout<<"+"<<img<<"i"<<endl;
        else
        cout<<img<<"i"<<endl;
    }

    complex plus(complex c2){
        complex c3;
        c3.real = real + c2.real;
        c3.img = img + c2.img;
        return c3;
    }

};

int main(){
    complex c1,c2,c3;
    c1.input();
    c1.output();
    c2.input();
    c2.output();
    cout<<endl;
    c3=c1.plus(c2);
    cout<<"Addition of two complex Value is : ";
    c3.output();
return 0;
}