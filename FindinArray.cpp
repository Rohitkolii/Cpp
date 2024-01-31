#include <iostream>
using namespace std;

class Array{
    private:
    int ar[5] = {5, 9, 7, 12, 88}, sum=0;

    public:
    void Find_Element(){
        for(int i=0; i<5; i++){
            if(ar[i] == 7){
                cout<<"Element Find at position : " << i+1<<endl;
                break;
            }
        }
    }

    void Average(){
        for(int i=0; i<5; i++){
            sum+=ar[i];
        }

        cout<<"Average is : " << sum/5<<endl;
    }

};

int main(){
    Array obj;
    obj.Find_Element();
    obj.Average();
}