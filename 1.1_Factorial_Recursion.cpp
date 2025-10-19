#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1) {
        return 1; // Base case: 0! or 1! = 1
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    }

    return 0;
}