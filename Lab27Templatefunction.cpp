#include <iostream>
using namespace std;

// Template function to find the sum of two numbers
template <class T>
T findSum(T num1, T num2) {
    return num1 + num2;

}


int main() {
    // Example usage with integers
    int  x,y;
    cout<<"Enter first Number : "<<endl;
    cin>>x;
    cout<<"Enter Second Number : "<<endl;
    cin>>y;
    cout << "The value of a+b = " << findSum(x, y) << endl;

    return 0;
}
