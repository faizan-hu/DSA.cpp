#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v;

    v.push_back(10);
    cout << "capicity:" << v.capacity() <<"\n";
    
    v.push_back(20);
    cout << "capicity:" << v.capacity() <<"\n";

    v.push_back(30);
     cout << "capicity:" << v.capacity() <<"\n";
     
    v.push_back(40);
     cout << "capicity:" << v.capacity() <<"\n";

    cout << "Size: " << v.size() << endl;
    cout << "First: " << v.front() << endl;
    cout << "Last: " << v.back() << endl;

    cout << "Elements: ";

    for(int x : v) {
        cout << x << " ";
    }

    return 0;
}