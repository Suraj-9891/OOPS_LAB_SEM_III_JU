#include <iostream>
using namespace std;
int main() {
    try {
        int a, b;
        cout << "Enter two integers (a and b): ";
        cin >> a >> b;

        if (b == 0)
            throw "Division by zero is not allowed!";
        
        cout << "Result of a / b: " << a / b << endl;
    } catch (const char* e) {
        cout << "Exception caught: " << e << endl;
    }

    return 0;
}
