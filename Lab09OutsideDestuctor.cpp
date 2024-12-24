#include<iostream>
#include<string>
using namespace std;
/*
Ques : 09 Write a Program to Outside of Constructor declare.?
*/
class Student{
    public:
    string name;
    string cousre;
    ~Student();
};
Student::~Student(){
    cout<<"I am Destructor and memory deallocated..."<<endl;
}
int main(){
Student st;
st.~Student();
}