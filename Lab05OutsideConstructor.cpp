#include<iostream>
using namespace std;
/*
Ques 5 : Write a program to find the Reactangle of Area, 
Volume using Outside constructor.
*/
class Reactangle{
public:
    float length, width, height, Area, Volume;
    Reactangle();
    void display();
};
Reactangle::Reactangle(){
    cout<<"Enter a length of reactangle : "<<endl;
    cin>>length;
    cout<<"Enter a width of reactangle : "<<endl;
    cin>>width;
    cout<<"Enter a height of reactangle : "<<endl;
    cin>>height;
}
void Reactangle::display(){
    Area = length*width;
    cout<<"The Area of reactangle is : "<<Area<<endl;
    Volume = length*width*height;
    cout<<"The Volume of reactangle is : "<<Volume<<endl;
}
int main(){
Reactangle rt;
rt.display();
}