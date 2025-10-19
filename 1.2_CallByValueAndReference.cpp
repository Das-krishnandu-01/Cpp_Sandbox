#include <iostream>
using namespace std;

void callByValue(int a) {
    a = a + 10;
    cout << "Inside callByValue, a = " << a << endl;
}

void callByReference(int &b) {
    b = b + 10;
    cout << "Inside callByReference, b = " << b << endl;
}

int main() {
    int x = 5, y = 5;

    cout << "Before callByValue, x = " << x << endl;
    callByValue(x);
    cout << "After callByValue, x = " << x << endl << endl;

    cout << "Before callByReference, y = " << y << endl;
    callByReference(y);
    cout << "After callByReference, y = " << y << endl;

    return 0;
}