#include<iostream>
#include<string>
using namespace std;
/*
Ques 06 : Write a Program to display the student
details using Parametries constructor.?
*/
class Student{
public:
    string name;
    string course;
    int rollno;
    // Parametries Constructor.
Student(string n, string c, int roll){
    name = n;
    course = c;
    rollno = roll;
}
void display(){
    cout<<"The name is : "<<name<<endl;
    cout<<"The course is : "<<course<<endl;
    cout<<"The roll number : "<<rollno<<endl;
}
};
int main(){
Student st("Suraj", "B.TECH", 53);
st.display();
}