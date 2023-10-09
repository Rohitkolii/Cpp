#include <iostream>
using namespace std;

class Employee{
    private:
    int id, age;
    char name[20], department[20];

    public:
    void getEmpDetails(){
        cout<<endl<<"Enter Employee Details"<<endl<<endl;

        cout<<endl<<"Enter Employee Id : ";
        cin>>id;
        cout<<endl<<"Enter Employee Name : ";
        cin>>name;
        cout<<endl<<"Enter Employee Age : ";
        cin>>age;
        cout<<endl<<"Enter Employee Department : ";
        cin>>department;
    }

    void showEmpDetails(){
        cout<<endl<<"Employee Details"<<endl<<endl;

        cout<<"Employee Id : " <<id<<endl;
        cout<<"Employee Name : " <<name<<endl;
        cout<<"Employee Age : " <<age<<endl;
        cout<<"Employee Department : " <<department<<endl;
    }
};

class Manager : public Employee{
    private:
    int managerid;
    char managerdepartment[30];

    public:
    void getManagerDetails(){
        cout<<endl<<"Enter Manager Details"<<endl<<endl;

        cout<<"Enter Manager ID : ";
        cin>>managerid;
        cout<<"Enter Manager Department Name : ";
        cin>>managerdepartment;
    }

    void showManagerDetails(){
        cout<<endl<<"Manager Details"<<endl<<endl;

        cout<<"Manager Id : "<<managerid<<endl;
        cout<<"Manager Department : "<<managerdepartment<<endl;
    }
};

int main(){
    Manager obj1;
    obj1.getEmpDetails();
    obj1.getManagerDetails();
    obj1.showEmpDetails();
    obj1.showManagerDetails();

    return 0;
}