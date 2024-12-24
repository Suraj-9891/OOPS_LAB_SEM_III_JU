#include<iostream>
#include<string>
using namespace std;
class Student{
public:
    string name;
    int age;
    void getdata(){
        cout<<"Enter your name : "<<endl;
        cin>>name;
        cout<<"Enter your age : "<<endl;
        cin>>age;
    }
    void putdata() const{
        cout<<"The name is : "<<name<<endl;
        cout<<"The age is : "<<age<<endl;
    }
};
class Teacher:public Student{
public:
    long long salary;
    void getdata(){
        Student::getdata();
        cout<<"Enter your Salary : "<<endl;
        cin>>salary;
    }
    void putdata() const{
        Student::putdata();
        cout<<"The Salary is : "<<salary<<endl;

    }
};
int main(){
       Teacher T1,T2;
    Student s1;
    cout<<"Enter the data for Student : "<<endl;
    s1.getdata();
    cout<<"Enter the data for Teacher 1 : "<<endl;
    T1.getdata();
    cout<<"Enter the data for Teacher 2 : "<<endl;
    T2.getdata();
    
    cout<<"The data on Student : "<<endl;
    s1.putdata();
    cout<<"The Data on Teachre 1 : "<<endl;
    T1.putdata();
    cout<<"The Data on Teachre 2 : "<<endl;
    T2.putdata();
}