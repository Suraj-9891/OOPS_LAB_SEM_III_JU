#include<iostream>
using namespace std;
class A{
    public:
    int val;
    A(int x):val(x){};
    void setVar(int s){
        val = s;
        return;
    }
    int getVar(){
        return val;
    }
};
int main(){
    A a(1);
    a.setVar(2);
    cout<<"The value of Var is : "<<endl;
    cout<<a.getVar()<<endl;
}