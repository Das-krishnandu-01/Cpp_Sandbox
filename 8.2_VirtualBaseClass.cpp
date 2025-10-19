#include <iostream>
using namespace std;

// In a diamond inheritance structure (A -> B, A -> C, {B, C} -> D),
// D would get two copies of A's members.
// 'virtual' inheritance solves this.

class A {
public:
    A() { cout << "A Constructor" << endl; }
    ~A() { cout << "A Destructor" << endl; }
    void show() {
        cout << "Function of class A" << endl;
    }
};

class B : virtual public A {
public:
    B() { cout << "B Constructor" << endl; }
    ~B() { cout << "B Destructor" << endl; }
};

class C : virtual public A {
public:
    C() { cout << "C Constructor" << endl; }
    ~C() { cout << "C Destructor" << endl; }
};

class D : public B, public C {
public:
    D() { cout << "D Constructor" << endl; }
    ~D() { cout << "D Destructor" << endl; }
};

int main() {
    D obj;
    obj.show(); // No ambiguity because D has only one copy of A's members
    return 0;
}