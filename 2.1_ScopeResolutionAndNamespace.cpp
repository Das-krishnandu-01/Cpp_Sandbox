#include <iostream>
using namespace std;

int value = 100; // Global variable

namespace DemoNamespace {
    int value = 200;
    void display() {
        cout << "Inside DemoNamespace, value = " << value << endl;
    }
}

void showGlobal() {
    int value = 50; // Local variable
    cout << "Local value = " << value << endl;
    cout << "Global value using scope resolution ::value = " << ::value << endl;
}

int main() {
    showGlobal();
    DemoNamespace::display();
    cout << "Accessing value from namespace directly: " << DemoNamespace::value << endl;
    return 0;
}