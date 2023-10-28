#include <iostream>
using namespace std;

class binarySearch{
    private:
    int a[10], i, j, temp, count, item;
    int low=0, mid, high=10;

    public:
    void input(){
        cout<<"Enter Elements of an Array ";
        for(i=0; i<10; i++){
            cin>>a[i];
        }
    }

    void sort(){
        for(i=0; i<10; i++){
            for(j=i+1; j<10; j++){
                if(a[i]>a[j]){
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    }

    void userinput(){
        cout<<"Enter Item to be Compared : ";
        cin>>item;
    }

    void output(){
        for(i=0; i<10; i++){
            cout<<a[i];
        }
    }

    void search(){
        while(low<=high){
            mid=(low+high)/2;
            if(a[mid]==item){
                count=1;
                break;
            }else if(a[mid]<item){
                low = mid+1;
            } else{
                high = mid-1;
            }
        }
        if(count == 1)
            cout<<"Item Found";
            else
            cout<<"Item Not Found";
    }
};

int main(){
    binarySearch ob;
    ob.input();
    ob.sort();
    ob.output();
    ob.userinput();
    ob.search();

    return 0;
}