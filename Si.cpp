#include <iostream>
using namespace std;

int main(){
    int p,r,t,si;
    cout<< "Enter Principle Amount : ";
    cin >> p;
    cout<< "Enter Rate in %/ Amount : ";
    cin >> r;
    cout<< "Enter Time in years Amount : ";
    cin >> t;
    si = p*r*t/100;

    cout<< "Simple Interest is : " <<si;
    return 0;
}