#include<iostream>
#include<string>
using namespace std;

class Empolyee {
public:
	string name;
	int id;
	float salary;

	Empolyee(string name, int id, float salary) {
		this->name = name;
		this-> id = id;
		this-> salary = salary;
	}

	void display() {
		cout<<"The name of Empolyee is : "<<name<<endl;
		cout<<"The id of Empolyee is : "<<id<<endl;
		cout<<"The salary of Empolyee is : "<<salary<<endl;
	}
};
int main() {
	Empolyee e1 = Empolyee("Ravi",576, 786.6);
	Empolyee e2 = Empolyee("Sumit",784, 687.4);
	cout<<"The first Employee details."<<endl;
	e1.display();
	cout<<"The Second Employee details."<<endl;

	e2.display();
}