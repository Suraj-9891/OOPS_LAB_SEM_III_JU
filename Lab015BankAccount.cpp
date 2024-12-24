#include<iostream>
#include<string>
using namespace std;
class BankAccount{
public: // Access Modifier
    long long Accountno; // data member
    string name;
    string AccountTypes;
    long long AmountBalance;
    // Member function.
    void getdata(){
        cout<<"Enter your Account Number : "<<endl;
        cin>>Accountno;
        cout<<"Enter your name is : "<<endl;
        cin>>name;
        cout<<"Enter your Account types : "<<endl;
        cin>>AccountTypes;
        cout<<"Enter your Amount balance : "<<endl;
        cin>>AmountBalance;
    }
    void display(){
        cout<<"The Account number : "<<Accountno<<endl;
        cout<<"The name is : "<<name<<endl;
        cout<<"The Account types is : "<<AccountTypes<<endl;
        cout<<"The Account Balanace is : "<<AmountBalance<<endl;
    }
 
};
int main(){
    BankAccount at[10];
    cout<<"The Enter all Customer details is here now. "<<endl;
    for(int i=1; i<=3; i++){
        cout<<"Enter "<<i<<" Member details"<<endl;
        at[i].getdata();
        cout<<endl;

    }
    cout<<endl;
    cout<<"The show all customer details is : "<<endl;
    for(int i=1; i<=3; i++){
        cout<<"The show"<<i<<" Member detail"<<endl;
        at[i].display();
    }
}