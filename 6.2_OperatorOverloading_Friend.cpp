#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;
public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }

    friend Complex operator-(const Complex& c);
    friend Complex operator++(Complex& c);
    friend Complex operator+(const Complex& a, const Complex& b);
    friend Complex operator-(const Complex& a, const Complex& b);
};

// Friend function definitions
Complex operator-(const Complex& c) {
    return Complex(-c.real, -c.imag);
}

Complex operator++(Complex& c) {
    ++c.real;
    ++c.imag;
    return c;
}

Complex operator+(const Complex& a, const Complex& b) {
    return Complex(a.real + b.real, a.imag + b.imag);
}

Complex operator-(const Complex& a, const Complex& b) {
    return Complex(a.real - b.real, a.imag - b.imag);
}

int main() {
    Complex c1(3, 4), c2(1, 2), c3;
    cout << "Original complex numbers:" << endl;
    cout << "c1 = "; c1.display();
    cout << "c2 = "; c2.display();

    c3 = -c1; // Calls operator-(c1)
    cout << "\nAfter unary - on c1:" << endl;
    cout << "c3 = "; c3.display();

    ++c1; // Calls operator++(c1)
    cout << "\nAfter unary ++ on c1:" << endl;
    cout << "c1 = "; c1.display();

    c3 = c1 + c2; // Calls operator+(c1, c2)
    cout << "\nAfter c1 + c2:" << endl;
    cout << "c3 = "; c3.display();

    c3 = c1 - c2; // Calls operator-(c1, c2)
    cout << "\nAfter c1 - c2:" << endl;
    cout << "c3 = "; c3.display();

    return 0;
}