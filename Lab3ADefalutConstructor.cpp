#include<iostream>
using namespace std;
class Add{
public:
    int a,b;
    Add(){
        cout<<"Enter a first Number : "<<endl;
        cin>>a;
        cout<<"Enter a Second Number : "<<endl;
        cin>>b;
    }
    void display(){
        cout<<"The sum of a+b = "<<a+b<<endl;
    }
};
int main(){
Add at;
at.display();
}