#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    // Pure virtual function
    virtual void displayArea() = 0;
};

// Derived class 1
class Rectangle : public Shape {
    public:
    double length;
    double width;


    Rectangle(double l, double w) : length(l), width(w) {}

    void displayArea() override {
        cout << "Area of Rectangle: " << length * width << endl;
    }

   
};

// Derived class 2
// class Circle : public Shape {
// private:
//     double radius;

// public:
//     Circle(double r) : radius(r) {}

//     void displayArea() override {
//         cout << "Area of Circle: " << 3.14159 * radius * radius << endl;
//     }

//     ~Circle() {
//         cout << "Circle destructor called." << endl;
//     }
// };

int main() {
    Shape* shape; // Pointer to the abstract base class

    // Dynamic allocation of Rectangle
    shape = new Rectangle(10, 5);
    shape->displayArea();
    delete shape;

    // // Dynamic allocation of Circle
    // shape = new Circle(7);
    // shape->displayArea();
    // delete shape;

    return 0;
}
