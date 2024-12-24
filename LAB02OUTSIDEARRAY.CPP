#include<iostream>
#include<string>
using namespace std;
/*
Ques 2:  Write a program to display the student details using outside member
function through the Array at leats 2 Student
*/
class Student{
public:
string name;
string cousre;
int rollno;
void getadat();
void display();
};
void Student::getadat(){
    cout<<"Enter a your name : "<<endl;
    cin>>name;
    cout<<"Enter a your course name : "<<endl;
    cin>>cousre;
    cout<<"Enter a your class roll number : "<<endl;
    cin>>rollno;
}
void Student::display(){
    cout<<"Name is : "<<name<<endl;
    cout<<"Course name is : "<<cousre<<endl;
    cout<<"Class roll number : "<<rollno<<endl;
}
int main(){
    Student arr[5];
    for(int i=1; i<=2; i++){
        cout<<"Enter the "<<i<<" Student detail fill it's."<<endl;
        arr[i].getadat();
    }
    cout<<endl;
    cout<<"The all student detail is here now..........."<<endl;
    for(int i=1; i<=2; i++){
        cout<<"The show of "<<i<<" Student detail is here"<<endl;
        arr[i].display();
    }
   
}