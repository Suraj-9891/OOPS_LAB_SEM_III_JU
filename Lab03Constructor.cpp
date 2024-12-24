#include<iostream>
using namespace std;
/*
Ques 3 : Write a Program to constructor concepts.?
*/
class Iteam{
public:
    int a,b;
    Iteam(){
        a=10;
        b=20;
    }
    Iteam(int x, int y){
        a = x;
        b = y;
    }
    void display(){
        cout<<"The first number is : "<<a<<endl;
        cout<<"The Second number is : "<<b<<endl;
    }
};
int main(){
Iteam obj;
Iteam obj1(50,100);
obj.display();
obj1.display();
}