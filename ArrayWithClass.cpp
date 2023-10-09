#include <iostream>
using namespace std;

class Array{
    private:
    int ar[4];

    public:
    void input(){
        cout<<endl<<"Enter Elements : "<<endl;
        for(int i=0; i<4; i++){
            cout<<"Enter " <<i+1<<"Element : ";
            cin>>ar[i];
        }
    }

    void output(){
        cout<<endl<<"Output of Array "<<endl;
        for (int i = 0; i < 4; i++){
            cout<<ar[i]<<"\t";
        }
    }

    Array add(Array a){
        Array temp;
        for(int i=0; i<4; i++){
            temp.ar[i] = ar[i]+a.ar[i];
        }
        return temp;
    }

    Array reverse(Array a){
        cout<<endl<<"Reverse of Array is : "<<endl;
        for(int i=3; i>=0; i--){
            cout<<a.ar[i]<<"\t";
        }
    }

    Array unionfind(Array B){
        Array C;
        for(int i=0; i<=3; i++){
            C.ar[i]=ar[i];
        }
        int k=4;
        
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(B.ar[j]==ar[i]){
                continue;
                }else{
                    C.ar[k]=B.ar[j];
                    k++;
                }
            }
        }
        
        for (int i = 0; i < 8; i++){
            cout<<C.ar[i]<<endl;
        }
        
    }

};

int main(){
    Array obj1, obj2, obj3, rev, uni; 

    obj1.input();
    obj1.output();
    obj2.input();
    obj2.output();
    obj3=obj1.add(obj2);
    obj3.output();
    rev.reverse(obj3);
    uni=obj1.unionfind(obj2); 
    return 0;
}