#include <iostream>
using namespace std;

class matrix{
    private:
    int mat[2][2];

    public:
    void input(){
        int i,j;
        cout <<"Enter Matrix Elements : "<<endl;
        for (i = 0; i < 2; i++){
            for (j = 0; j < 2; j++){
                cin>>mat[i][j];
            }
        }
    }

    void output(){
        int i,j;
        for(i=0; i<2; i++){
            for(j=0; j<2; j++){
                cout<<mat[i][j];
                cout<<"\t";
            }
            cout<<endl;
        }
    }

    matrix plus(matrix mat2){
        int i,j;
        matrix mat3;

        for ( i = 0; i < 2; i++){
            for (j = 0; j < 2; j++){
                mat3.mat[i][j] = mat[i][j] + mat2.mat[i][j];
            }
        }
        return mat3;
    } 
};

int main(){
    matrix m1,m2,m3;
    m1.input();
    cout<<endl;
    m1.output();
    cout<<endl;
    m2.input();
    cout<<endl;
    m2.output();
    cout<<endl;
    cout << "Adition of Matrix is : "<<endl;
    m3=m1.plus(m2);
    m3.output();
    return 0;
}