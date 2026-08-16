#include <iostream>
#include <queue>
using namespace std;

int main() {

    priority_queue<int> maxi;
    priority_queue<int, vector<int>, greater<int>> mini;

    //for max_heap 

    maxi.push(10);
    maxi.push(30);
    maxi.push(20);
    maxi.push(50);

    cout << "Top: " << maxi.top() << endl;

    maxi.pop();

    cout << "After pop: " << maxi.top() << endl;

    cout << "Size: " << maxi.size() << endl;

   //for min_haep

   mini.push(30);
   mini.push(10);
   mini.push(20);

   cout << mini.top();

    return 0;
}