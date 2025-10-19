#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;
    m[1] = "Apple";
    m[2] = "Banana";
    m[3] = "Cherry";

    cout << "Map elements:\n";
    for (auto &p : m)
        cout << p.first << " => " << p.second << "\n";

    m.erase(2);
    cout << "\nAfter deleting key 2:\n";
    for (auto &p : m)
        cout << p.first << " => " << p.second << "\n";
}
