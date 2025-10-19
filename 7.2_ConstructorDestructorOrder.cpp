#include <iostream>
using namespace std;

class Parent {
public:
    Parent() {
        cout << "Parent class constructor" << endl;
    }
    ~Parent() {
        cout << "Parent class destructor" << endl;
    }
};

class Child : public Parent {
public:
    Child() {
        cout << "Child class constructor" << endl;
    }
    ~Child() {
        cout << "Child class destructor" << endl;
    }
};

int main() {
    cout << "Creating Child object..." << endl;
    Child c;
    cout << "Child object is about to be destroyed." << endl;
    return 0;
}