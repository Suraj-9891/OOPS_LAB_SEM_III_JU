#include<iostream>
using namespace std;
/*
Ques 7 : Write a Program to find the Area, Volume of Reatangle
using Parametries & copy constructor.?
*/
class Reatangle{
public:
    float length, width, height, Area, Volume;
    // Default  constructor.
    Reatangle(){
        cout<<"I am default constructor."<<endl;
    }
    // Parametries constructor
    Reatangle(float l, float w, float h){
        cout<<"This is Parametries constructor..."<<endl;
        length = l;
        width = w;
        height = h;
    }
    // Copy Constructor
    Reatangle(Reatangle &rt1){
        cout<<"The custom copy constructor is here now..."<<endl;
        length = rt1.length;
        width = rt1.width;
        height = rt1.height;
    }
    void display(){
        Area = length*width;
        cout<<"The Area of Reatangle = "<<Area<<endl;
        Volume = length*width*height;
        cout<<"The Volume of Reatangle = "<<Volume<<endl;
    }
    ~Reatangle(){
        cout<<"The memory is allocated."<<endl;
    }

};
int main(){
Reatangle rt1(8.2,8.5,9.2);
rt1.display();
Reatangle rt2 = rt1;
rt2.display();
}