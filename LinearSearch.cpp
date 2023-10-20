#include <iostream>
using namespace std;

class LinearSearch{
    private:
    int ar[10], found=0, i, Num, count=0;

    public:
    void input(){
        cout<<"Enter Elements of Array : ";
        for(i=0; i<10; i++){
            cin>>ar[i];
        }
        cout<<"Enter Element to be Search : ";
        cin>>Num;
    }

    void search(){
        for(i=0; i<10; i++){
            if(ar[i]==Num){
                found=1;
                count++;
                if(found==1){
                    cout<<"Element Found at Location "<<i<<endl;
                }
                continue;
            }
        }
        cout<<endl<<"Element Found "<<count<<"Times";
    }
};

int main(){
    LinearSearch ob;
    ob.input();
    ob.search();
}