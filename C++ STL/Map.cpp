#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {

    map<int, string> m;

    m[101] = "Faizan";
    m[103] = "Rahul";
    m[102] = "Ali";

    cout << "Map:\n";

    for(auto x : m) {
        cout << x.first << " → " << x.second << endl;
    }

    cout << "\nStudent 101: " << m[101] << endl;

    if(m.find(102) != m.end()) {
        cout << "102 is present";
    }

    m.erase(103);

    cout << endl;
    //Most important DSA use: Frequency Counting
    vector<int> v = {1, 2, 2, 3, 1, 2};
    map<int, int> freq;

    for(int x : v) {
    freq[x]++;
    }

    for(auto x : freq) {
    cout << x.first << " → " << x.second << endl;
    }

    return 0;
}