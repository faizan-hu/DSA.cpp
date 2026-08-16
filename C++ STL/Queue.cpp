#include <iostream>
#include <queue>
using namespace std;

int main() {

    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;
    cout << "Size: " << q.size() << endl;

    q.pop();

    cout << "After pop: " << q.front() << endl;

    return 0;
}