#include <iostream>
using namespace std;

class Complex{
    private:
    int real, img;

    public:
    Complex(int r = 0, int i = 0){
        real = r;
        img = i;
    }

    Complex operator+(Complex obj){
        Complex res;
        res.real = real + obj.real;
        res.img = img + obj.img;
        return res;
    }

    void show(){
        cout<<real << " + i"<< img << '\n';
    }
};

int main(){
    Complex obj(5, 6), obj2(5,6);
    Complex obj3 = obj + obj2;
    obj3.show();
    return 0;
}