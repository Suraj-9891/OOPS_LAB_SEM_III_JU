#include<iostream>
using namespace std;
class Calculator{
public:
float a,b;
static int Add(float a, float b){
    return a+b;
}    
static int Add(float a, int b, float c){
    return a+b+c;
}
static int Volume(float a){
    return (a*a*a);
}
static int Volume(float l, float b, float h){
    return (l*b*h);
}
};
int main(){
Calculator ct;
cout<<"The sum of  a+b = ";
cout<<ct.Add(7.3,25.2)<<endl;
cout<<"The sum of a+b+c = ";
cout<<ct.Add(15.3,35.7,3.6)<<endl;
cout<<"The value of cuboid of Volume = ";
cout<<ct.Volume(3.2)<<endl;
cout<<"The value of reatangle of Volume = ";
cout<<ct.Volume(8.2,9.3,7.2);
}