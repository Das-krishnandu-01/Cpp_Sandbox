#include <iostream>
using namespace std;

int main() {
    int numerator, denominator;
    double result;

    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        if (denominator == 0) {
            throw denominator; // Throw an integer exception
        }
        result = (double)numerator / denominator;
        cout << "Result = " << result << endl;
    } catch (int e) {
        cout << "Error: Division by zero is not allowed! Exception code: " << e << endl;
    }

    cout << "End of program." << endl;
    return 0;
}