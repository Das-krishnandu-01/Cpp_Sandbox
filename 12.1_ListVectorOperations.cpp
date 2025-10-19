#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
    // List operations
    list<int> l = {10, 20, 30};
    l.push_back(40);
    l.push_front(5);
    cout << "List elements: ";
    for (int x : l) cout << x << " ";
    cout << "\nAfter deleting front and back: ";
    l.pop_front();
    l.pop_back();
    for (int x : l) cout << x << " ";
    
    cout << "\n\n";

    // Vector operations
    vector<int> v = {1, 2, 3};
    v.push_back(4);
    v.push_back(5);
    cout << "Vector elements: ";
    for (int x : v) cout << x << " ";
    v.pop_back();
    cout << "\nAfter pop_back: ";
    for (int x : v) cout << x << " ";
}
