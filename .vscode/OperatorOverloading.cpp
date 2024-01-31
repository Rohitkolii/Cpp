#include <iostream>
using namespace std;

class Demo{
    int a;
    public:
    void input(){
        cout << "Enter Value of a"<<endl;
        cin>>a;
    }

    void show(){
        cout << "value is : " << a << endl;
    }

    Demo operator+ (Demo BB){
        Demo CC;
        CC.a = a + BB.a;
        return CC;
    }
};

int main(){
    Demo aa , bb, cc;
    aa.input();
    aa.show();
    bb.input();
    bb.show();
    cc = aa + bb;
    cc.show();
}