#include <iostream>
#include <set>
using namespace std;

int main() {

    set<int> s;

    s.insert(40);
    s.insert(10);
    s.insert(30);
    s.insert(20);
    s.insert(20);

    cout << "Set: ";

    for(int x : s) {
        cout << x << " ";
    }

    cout << "\nSize: " << s.size();

    if(s.find(30) != s.end()) {
        cout << "\n30 is present";
    }

    s.erase(30);

    cout << "\nAfter erase: ";

    for(int x : s) {
        cout << x << " ";
    }

    return 0;
}