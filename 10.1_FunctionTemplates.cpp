#include <iostream>
using namespace std;

template <typename T>
T myMax(T x, T y) {
    return (x > y) ? x : y;
}

template <typename T>
void mySwap(T &x, T &y) {
    T temp = x;
    x = y;
    y = temp;
}

int main() {
    // Integer test
    int a = 10, b = 20;
    cout << "Max of " << a << " and " << b << " is: " << myMax(a, b) << endl;
    cout << "Before swap: a=" << a << ", b=" << b << endl;
    mySwap(a, b);
    cout << "After swap: a=" << a << ", b=" << b << endl << endl;

    // Double test
    double x = 5.5, y = 2.3;
    cout << "Max of " << x << " and " << y << " is: " << myMax(x, y) << endl;
    cout << "Before swap: x=" << x << ", y=" << y << endl;
    mySwap(x, y);
    cout << "After swap: x=" << x << ", y=" << y << endl << endl;

    // Char test
    char c1 = 'A', c2 = 'Z';
    cout << "Max of " << c1 << " and " << c2 << " is: " << myMax(c1, c2) << endl;
    cout << "Before swap: c1=" << c1 << ", c2=" << c2 << endl;
    mySwap(c1, c2);
    cout << "After swap: c1=" << c1 << ", c2=" << c2 << endl;

    return 0;
}