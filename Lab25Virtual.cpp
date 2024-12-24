#include<iostream>
using namespace std;
class A{
    public:
    int x;
    virtual void A1(){
        cout<<"A class";
    }
};

class B: public A{
    public:
    int y;
    void B1(){
        cout<<"B class"<<endl;
    }

};

int main(){
    B b;
    cout<<b.x<<" "<<b.y<<" ";
    b.B1();
}