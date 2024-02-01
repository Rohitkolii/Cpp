#include <iostream>
using namespace std;

class Matrix{
    int ar[3][3];
    public:
    void input();
    void display();
    void operator +(Matrix);
};

void Matrix::input(){
    for(int i=0; i<3; i++){
        for (int j = 0; j < 3; j++){
            cin>>ar[i][j];
        }
    }
}

void Matrix::display(){
    for(int i=0; i<3; i++){
        for (int j = 0; j < 3; j++){
            cout<<ar[i][j];
            cout<<"\t";
        }
        cout<<endl;
    }
}

void Matrix::operator+(Matrix x){
    int sum[3][3];

    for(int i=0; i<3; i++){
        for (int j = 0; j < 3; j++){
            sum[i][j]=0;
            sum[i][j] = ar[i][j] + x.ar[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for (int j = 0; j < 3; j++){
            cout<<sum[i][j];
            cout<<"\t";
        }
        cout<<endl;
    }
}
int main(){
    Matrix M1, M2;
    cout<<"Enter Matrix Value for 1 : ";
    M1.input();
    cout<<"Enter Matrix Value for 2 : ";
    M1.input();
    cout<<"Value of Matrix 1 : ";
    M1.display();
    cout<<"Value of Matrix 2 : ";
    M1.display();
    cout<<"Sum of Matrix 1 & 2 : ";
    M1+M2;
}