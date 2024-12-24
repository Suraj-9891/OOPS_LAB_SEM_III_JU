#include<iostream>
using namespace std;
void SwapNo(int &first, int&second){
    int temp = first;
    first = second;
    second = temp;
}
int main(){
    int a, b;
    cout<<"Enter the first Number : ";
    cin>>a;
    cout<<"Enter the Second Number : ";
    cin>>b;
    SwapNo(a,b);
    cout<<"The Swap of two Number : "<<a<<" "<<b<<endl;
}