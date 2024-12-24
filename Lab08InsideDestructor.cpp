#include<iostream>
#include<string>
using namespace std;
/*
Ques: 08 Write a Program to Inside of Destructor.?
*/
class Student{
public:
string name;
string course;
string add;
int rollno;
~Student(){
    cout<<"I am Destructor and free of memory..."<<endl;
}
};
int main(){
Student st;
st.~Student();
}