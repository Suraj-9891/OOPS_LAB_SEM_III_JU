#include<iostream>
using namespace std;
class MyClass {
public:
    string name;
    string course;
    int rollno;
    MyClass() {
       cout<<"Enter your name : "<<endl;
       cin>>name;
       cout<<"Enter your cousre name :"<<endl;
       cin>>course;
       cout<<"Enter your class roll Number : "<<endl;
       cin>>rollno;
        
    }
     void display() {
        cout<<"The name is : "<<name<<endl;
        cout<<"The course name is : "<<course<<endl;
        cout<<"The class roll Number : "<<rollno<<endl;
         
    }
    ~MyClass() { 
        cout << "MyClass destructor called" << endl; 
        
    }
    
};

int main() {
    int numObjects = 2;
    MyClass* objArray = new MyClass[numObjects];

    // Initialize objects
    cout<<"The show all student details is here. "<<endl;
    for (int i = 0; i < numObjects; i++) {
        objArray[i].display();
    }

    // Deallocate memory
    delete[] objArray;

    return 0;
}

