#include <iostream>
#include <deque>
using namespace std;

int main() {

    deque<int> dq;

    dq.push_back(20);
    dq.push_back(30);
    dq.push_front(10);
    dq.push_front(5);

    for(int x : dq) {
        cout << x << " ";
    }

    cout << "\nFront: " << dq.front();
    cout << "\nBack: " << dq.back() <<'\n';

    
    dq.erase(dq.begin(),dq.begin()+1);

      for(int x : dq) {
        cout << x << " ";
      }    

}