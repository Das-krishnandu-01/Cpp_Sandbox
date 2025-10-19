#include <iostream>
#include <string>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Simple calculator" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    try {
        if (op != '+' && op != '-' && op != '*' && op != '/') {
            throw string("Invalid operator!");
        }
        if (op == '/' && num2 == 0) {
            throw 0; // throw int for division by zero
        }
        if (num1 < 0 || num2 < 0) {
            throw -1.0; // throw double for negative numbers
        }

        double result;
        switch (op) {
            case '+': result = num1 + num2; break;
            case '-': result = num1 - num2; break;
            case '*': result = num1 * num2; break;
            case '/': result = num1 / num2; break;
        }
        cout << "Result: " << result << endl;

    } catch (int e) {
        cout << "Error: Division by zero is not allowed!" << endl;
    } catch (double e) {
        cout << "Error: Negative numbers are not allowed!" << endl;
    } catch (string e) {
        cout << "Error: " << e << endl;
    }

    cout << "Program execution completed." << endl;
    return 0;
}