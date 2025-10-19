#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d;
    d.push_back(10);
    d.push_front(5);
    d.push_back(15);

    cout << "Deque elements: ";
    for (int x : d) cout << x << " ";

    d.pop_front();
    d.pop_back();

    cout << "\nAfter deleting front and back: ";
    for (int x : d) cout << x << " ";
}
