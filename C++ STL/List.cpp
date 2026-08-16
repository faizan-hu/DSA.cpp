#include <iostream>
#include <list>
using namespace std;

int main() {

    list<int> l;

    l.push_back(10);
    l.push_back(20);
    l.push_front(5);

    cout << "List: ";

    for(int x : l) {
        cout << x << " ";
    }

    cout << "\nFront: " << l.front();
    cout << "\nBack: " << l.back();

    return 0;
}