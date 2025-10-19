#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
public:
    void setData(string n, int a) {
        name = n;
        age = a;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Static object
    Student s1;
    s1.setData("Dinesh", 20);
    s1.display();

    // Pointer to a static object
    Student* ptr;
    ptr = &s1;
    cout << "Accessing through pointer: ";
    ptr->display();

    // Pointer to a dynamically allocated object
    Student* ptr2 = new Student;
    ptr2->setData("Charan", 22);
    cout << "Accessing dynamic object: ";
    ptr2->display();
    
    // Free the dynamically allocated memory
    delete ptr2;

    return 0;
}