#include<iostream>
#include<string>
using namespace std;
class Employee{
    public:
    string name;
    long long id;

    void getdata(){
        cout<<"Enter your name : "<<endl;
        cin>>name;
        cout<<"Enter your id number : "<<endl;
        cin>>id;
    }
    void putdata() const{
        cout<<"The name of employee is : "<<name<<endl;
        cout<<"The id number of Employee is : "<<id<<endl;
    }
};

class Manager : public Employee{
public:
    string title;
    long long due;

    void getdata(){
        Employee::getdata();
        cout<<"Enter your title : "<<endl;
        cin>>title;
        cout<<"Enter your glof club due : "<<endl;
        cin>>due;
    }
    void putdata() const{
        Employee::putdata();
        cout<<"The title of manager is : "<<title<<endl;
        cout<<"The Golf Club due : "<<due<<endl;
    }
};

int main(){
    Employee E1;
    Manager M1;

    // User Input the data for Employee 
    cout<<"Enter the data for Employee. "<<endl;
    E1.getdata();
    
    // User Input the data for Manager 
    cout<<"Enter the data for Manager. "<<endl;
    M1.getdata();

    // display the data for Employee 
    cout<<"The Data  on Employee."<<endl;
    E1.putdata();

    // display the data for manager 
    cout<<"The Data  on manager."<<endl;
    M1.putdata();
}