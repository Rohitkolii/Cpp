#include <iostream>
using namespace std;

class Student{
    protected:
    string name, course;
    int rollno, classs, age;

    public:
    Student(){
        cout<<"Enter Student Details : "<<endl;
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Course : ";
        cin>>course;
        cout<<"Enter Roll No : ";
        cin>>rollno;
        cout<<"Enter Class : ";
        cin>>classs;
        cout<<"Enter Age : ";
        cin>>age;
    }

    void display(){
        cout<<"Student Details Base: "<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Course : "<<course<<endl;
        cout<<"Roll No : "<<rollno<<endl;
        cout<<"Class : "<<classs<<endl;
        cout<<"Age : "<<age<<endl;
    }
};

class working_Student: public Student{
    public:
    virtual void display(){
        cout<<"Student Details Derive : "<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Course : "<<course<<endl;
        cout<<"Roll No : "<<rollno<<endl;
        cout<<"Class : "<<classs<<endl;
        cout<<"Age : "<<age<<endl;
    }
};

int main(){
    Student obj; working_Student obj2;
    obj2.display();
    obj2.display();
}