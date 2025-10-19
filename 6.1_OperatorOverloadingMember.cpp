#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;
public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    // Overload unary -
    Complex operator-() {
        return Complex(-real, -imag);
    }
    
    // Overload unary ++ (prefix)
    Complex operator++() {
        ++real;
        ++imag;
        return *this;
    }

    // Overload binary +
    Complex operator+(const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    // Overload binary -
    Complex operator-(const Complex& obj) {
        return Complex(real - obj.real, imag - obj.imag);
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2), c3;

    cout << "Original complex numbers:" << endl;
    cout << "c1 = "; c1.display();
    cout << "c2 = "; c2.display();

    c3 = -c1; // Calls c1.operator-()
    cout << "\nAfter unary - on c1:" << endl;
    cout << "c3 = "; c3.display();

    ++c1; // Calls c1.operator++()
    cout << "\nAfter unary ++ on c1:" << endl;
    cout << "c1 = "; c1.display();

    c3 = c1 + c2; // Calls c1.operator+(c2)
    cout << "\nAfter c1 + c2:" << endl;
    cout << "c3 = "; c3.display();

    c3 = c1 - c2; // Calls c1.operator-(c2)
    cout << "\nAfter c1 - c2:" << endl;
    cout << "c3 = "; c3.display();

    return 0;
}