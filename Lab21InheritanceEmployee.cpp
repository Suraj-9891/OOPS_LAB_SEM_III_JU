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
        cout<<"The title of manager is : "<<endl;
        cout<<"The Golf Club due : "<<due<<endl;
    }
};
class Scientist : public Employee{
public:
    int pubs;
    void getdata(){
        Employee::getdata();
        cout<<"Enter Number of pub:"<<endl;
        cin>>pubs;
    }
    void putdata() const{
        Employee::putdata();
        cout<<"The Number of publication : "<<pubs<<endl;
    }
};
class laborer : Employee{

};
int main(){
    Manager m1,m2;
    Scientist s1;
    laborer l1;
    cout<<endl;

    // Get data for several employees.

    // User Input the data for Manager 1
    cout<<"Enter the data for Manager 1 "<<endl;
    m1.getdata();
    
    // User Input the data for Manager 2
    cout<<"Enter the data for Manager 2 "<<endl;
    m2.getdata();

    // User Input the data for Scientist 1
    cout<<"Enter the data for Scientist 1 "<<endl;
    s1.getdata();

    // User Input the data for Laborer 1
    // cout<<"Enter the data for Laborer 1  "<<endl;
    // l1.getdata();


    //display data for several employees
    // display the data for manager 1
    cout<<"The Data  on manager 1 "<<endl;
    m1.putdata();


    // Display the data for manager 2
    cout<<"The Data  on manager 2 "<<endl;
    m2.putdata();
   
   
    // Display the data for Scientist 2
    cout<<"The Data  on Scientist "<<endl;
    s1.putdata();
}