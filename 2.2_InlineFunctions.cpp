#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    int a = 5, b = 10;
    cout << "Square of " << a << " is: " << square(a) << endl;
    cout << "Square of " << b << " is: " << square(b) << endl;
    return 0;
}