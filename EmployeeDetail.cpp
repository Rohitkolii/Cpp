#include <iostream>
using namespace std;

class EmployeeDetail{
    private:
    double empid;
    char empname[20], address[30], designation[20],empphone[12];

    public:
    void input(){
        cout<<"=================================="<<endl;
        cout<<"Enter Employee Details"<<endl;
        cout<<"=================================="<<endl<<endl;
        cout<<"Enter Employee Id : ";
        cin>>empid;
        cout<<"Enter Employee Name : ";
        cin>>empname;
        cout<<"Enter Employee Address : ";
        cin>>address;
        cout<<"Enter Employee Designation : ";
        cin>>designation;
        cout<<"Enter Employee Phone : ";
        cin>>empphone; 

    }

    void output(){
        cout<<"=================================="<<endl;
        cout<<"Your Employee Details"<<endl;
        cout<<"=================================="<<endl<<endl;
        cout << "Employee Id : "<<empid<<endl;
        cout << "Employee Name : "<<empname<<endl;
        cout << "Employee Address : "<<address<<endl;
        cout << "Employee Designation : "<<designation<<endl;
        cout << "Employee Phone : "<<empphone<<endl;
    }

    void  searchbyid(int id){
        if (this->empid == id){
            cout<<"=================================="<<endl;
            cout<<"Your Employee Details"<<endl;
            cout<<"=================================="<<endl<<endl;
            
            cout<<"Employee Details Found"<<endl;
            cout<<endl;
            cout << "Employee Name : "<<empname<<endl;
            cout << "Employee Address : "<<address<<endl;
            cout << "Employee Designation : "<<designation<<endl;
            cout << "Employee Phone : "<<empphone<<endl;
            exit(0);
        } else{
            cout<<"Employee" <<id<<"Not MAtch!"<<endl;
        }
    }
};

int main(){
    EmployeeDetail emp[3];
    int id;
    for (int i = 0; i < 3; i++){
        emp[i].input();
        // emp[i].output();
    }

    for (int i = 0; i < 3; i++){
        // emp[i].input();
        emp[i].output();
    }

    cout<<endl;
    cout<<"=================================="<<endl;        
    cout<<"Enter Id to be search : ";
    cin>>id;

    for (int i = 0; i < 3; i++){
        emp[i].searchbyid(id);
    }
    return 0;
}
