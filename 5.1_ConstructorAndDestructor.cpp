#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
public:
    // Constructor
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Constructor called for " << name << endl;
    }
    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    string n;
    int a;
    cout << "Enter student name: ";
    getline(cin, n);
    cout << "Enter student age: ";
    cin >> a;

    Student s1(n, a);
    s1.display();
    
    cout << "End of main function.\n";
    return 0; // Destructor for s1 is called here as it goes out of scope
}