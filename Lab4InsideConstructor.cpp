#include<iostream>
using namespace std;
/*
Ques 4 : Write a program to find Circle of Area, Circumference, 
Diameter using inside constructor
*/
class Circle{
public:
    float radius, pi,Area, Circumference, Diameter;
    // Non-Parametries Constructor
    Circle(){
        cout<<"Enter a radius of Circle : "<<endl;
        cin>>radius;
        pi=3.14;
        
    }
    void display(){
        Area = pi*radius*radius;
        cout<<"The Area of circle is : "<<Area<<endl;
        Circumference = 2*pi*radius;
        cout<<"The Circumference of circle is : "<<Circumference<<endl;
        Diameter = 2*radius;
        cout<<"The Daimeter of circle is : "<<Diameter<<endl;

    }
    ~Circle(){
        cout<<"Hi I delete everything..."<<endl;
    }
};
int main(){
Circle ct;
ct.display();
}