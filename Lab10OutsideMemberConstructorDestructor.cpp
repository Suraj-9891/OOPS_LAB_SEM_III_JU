#include<iostream>
#include<string>
using namespace std;
class Student{ // Create class
public: // Access modifier
// Data member.
string name;
string course;
string city;
int rollno;
void getdata(); // user input
void display(); // print the details
Student(); // Constructor
~Student(); // Destructor

};
Student::Student(){
    cout<<"Enter the Student details......."<<endl;
}
void Student::getdata(){
    cout<<"Enter a your Name : "<<endl;
    cin>>name;
    cout<<"Enter a your Course name : "<<endl;
    cin>>course;
    cout<<"Enter a your City name : "<<endl;
    cin>>city;
    cout<<"Enter a your class rollno : "<<endl;
    cin>>rollno;
}
void Student::display(){
    cout<<"Name is : "<<name<<endl;
    cout<<"Course namw is : "<<course<<endl;
    cout<<"City name is : "<<city<<endl;
    cout<<"Class roll number is : "<<rollno<<endl;
}
Student::~Student(){
    cout<<"The memory is free... "<<endl;
}
int main(){
 
Student st1;
st1.getdata();
st1.display();

}