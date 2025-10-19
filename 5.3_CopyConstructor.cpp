#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;
public:
    // Parameterized constructor
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }
    // Copy constructor
    Rectangle(const Rectangle &r) {
        length = r.length;
        width = r.width;
        cout << "Copy constructor called!" << endl;
    }
    void setLength(int l) {
        length = l;
    }
    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    int l, w;
    cout << "Enter length and width: ";
    cin >> l >> w;

    Rectangle rect1(l, w);
    cout << "\nOriginal Rectangle (rect1):" << endl;
    rect1.display();

    // The copy constructor is called here
    Rectangle rect2 = rect1; 
    cout << "\nCopied Rectangle (rect2):" << endl;
    rect2.display();

    // Change the original object
    rect1.setLength(l + 10);
    cout << "\nAfter changing rect1's length:" << endl;
    cout << "rect1: ";
    rect1.display();
    cout << "rect2: ";
    rect2.display(); // rect2 remains unchanged

    return 0;
}