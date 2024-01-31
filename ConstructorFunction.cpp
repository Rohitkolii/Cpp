#include <iostream>
using namespace std;

// -----------------Deafault Constructor--------------------------
// class A{
//     public:
//     A(){
//         cout<< "HEllo"<<endl;
//     }
//     ~A(){
//         cout<<" Function Destroyed";
//     }
// };

// -----------------Perameterise Constructor--------------------------
class A{
    public:
    A(int x, int y){
        cout<< x << " " << y <<endl;
    }

    ~A(){
        cout<< "Destroyed" <<endl;
    }
};

int main(){
    A obj(5, 10);
    A obj2(5, 10);
}