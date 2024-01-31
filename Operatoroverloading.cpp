#include <iostream>
using namespace std;
class Demo{
    int a;
    public:
        void get(){
            cout<<"Enter Number: ";
            cin>>a;
        }

        void show(){
            cout<<"Value : "<<a<<endl;
        }

        Demo operator+ (Demo bb){
            Demo cc;
            cc.a= a+bb.a;
        }

};

int main(){
    Demo aa, bb, cc;
    aa.get();
    bb.get();
    cc=aa+bb;

    aa.show();
    bb.show();
    cc.show();
}