#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {

    vector<int> v = {40, 10, 30, 20, 20};

    sort(v.begin(), v.end());

    cout << "Sorted: ";
    for(int x : v) {
        cout << x << " ";
    }

    cout << "\nCount of 20: "
         << count(v.begin(), v.end(), 20);

    cout << "\nMinimum: "
         << *min_element(v.begin(), v.end());

    cout << "\nMaximum: "
         << *max_element(v.begin(), v.end());

    cout << "\nSum: "
         << accumulate(v.begin(), v.end(), 0);

    return 0;
}