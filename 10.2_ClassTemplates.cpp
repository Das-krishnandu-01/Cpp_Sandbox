#include <iostream>
using namespace std;

template <class T>
class Calculator {
private:
    T num1, num2;
public:
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    T add() { return num1 + num2; }
    T sub() { return num1 - num2; }
    T multiply() { return num1 * num2; }
    
    T divide() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Error! Division by zero." << endl;
            return 0;
        }
    }
};

int main() {
    // Integer calculator
    Calculator<int> intCalc(10, 5);
    cout << "Int calculation:" << endl;
    cout << "Addition: " << intCalc.add() << endl;
    cout << "Subtraction: " << intCalc.sub() << endl;
    cout << "Multiply: " << intCalc.multiply() << endl;
    cout << "Division: " << intCalc.divide() << endl << endl;

    // Double calculator
    Calculator<double> doubleCalc(30.5, 19.5);
    cout << "Double calculation:" << endl;
    cout << "Addition: " << doubleCalc.add() << endl;
    cout << "Subtraction: " << doubleCalc.sub() << endl;
    cout << "Multiply: " << doubleCalc.multiply() << endl;
    cout << "Division: " << doubleCalc.divide() << endl;
    
    return 0;
}