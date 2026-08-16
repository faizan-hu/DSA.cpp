#include <iostream>
#include <array>
using namespace std;

int main() {

    array<int, 5> arr = {10, 20, 30, 40, 50};

    cout << "Size: " << arr.size() << endl;
    cout << "First: " << arr.front() << endl;
    cout << "Last: " << arr.back() << endl;

    cout << "Elements: ";

    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}