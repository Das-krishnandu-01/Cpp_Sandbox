#include <iostream>
using namespace std;

class Shape {
public:
    // virtual function
    virtual void draw() {
        cout << "Drawing a generic shape" << endl;
    }
};

class Circle : public Shape {
public:
    // override the virtual function
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle" << endl;
    }
};

class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Triangle" << endl;
    }
};

int main() {
    Shape* shapePtr; // A base class pointer

    Shape s;
    Circle c;
    Rectangle r;
    Triangle t;

    shapePtr = &s;
    shapePtr->draw(); // Calls Shape::draw()

    shapePtr = &c;
    shapePtr->draw(); // Calls Circle::draw() at runtime

    shapePtr = &r;
    shapePtr->draw(); // Calls Rectangle::draw() at runtime

    shapePtr = &t;
    shapePtr->draw(); // Calls Triangle::draw() at runtime
    
    return 0;
}