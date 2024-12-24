#include <iostream>
using namespace std;

class Encapsulation {
private:
    // Data hidden from outside world
    int x,y;

public:
    // Function to set value of
    // variable x
    void set(int a,int b) { 
        x = a; 
        y = b;
    }

    // Function to return value of
    // variable x
    int get() { 
        return x+y; 
    }
};

// Driver code
int main()
{
    Encapsulation obj;
    obj.set(5,10);
    cout << obj.get();
    return 0;
}