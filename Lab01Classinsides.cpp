#include<iostream>
#include<string>
using namespace std;
/*
Ques 1 : Write a Program to display the Student details using 
Class and Object on the inside member function.
*/
class Student{
public: // Access Modifier
    string name; // Data Member
    string course;
    string branch;
    string sem;
    char sec;
    string session;
    int rollno;
    int enrollment;
    string university;
    string mob;
void getdata(){ // Member function
// These process of User input
    cout<<"Enter a your name : "<<endl;
    cin>>name;
    cout<<"Enter a your course name : "<<endl;
    cin>>course;
    cout<<"Enter a your branch name : "<<endl;
    cin>>branch;
    cout<<"Enter a your semester name : "<<endl;
    cin>>sem;
    cout<<"Enter a your session name : "<<endl;
    cin>>sem;
    cout<<"Enter a your roll number : "<<endl;
    cin>>rollno;
    cout<<"Enter a your enrollment number : "<<endl;
    cin>>enrollment;
    cout<<"Enter a your University name : "<<endl;
    cin>>university;
    cout<<"Enter a your mobile number : "<<endl;
    cin>>mob;
}
void display(){
    // These process of display the details -->> output 
    cout<<"The Student details is here now...."<<endl;
    cout<<"Name is "<<name<<endl;
    cout<<"Course name is : "<<course<<endl;
    cout<<"Branch name is : "<<branch<<endl;
    cout<<"Semester name is : "<<sem<<endl;
    cout<<"Class Section is : "<<sem<<endl;
    cout<<"Class Roll number is : "<<rollno<<endl;
    cout<<"Enrollment number is : "<<enrollment<<endl;
    cout<<"University name is : "<<university<<endl;
    cout<<"Mobile number is : "<<mob<<endl;
}


};
int main(){
    Student obj; // Object
    obj.getdata();
    obj.display();
}