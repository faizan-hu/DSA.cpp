#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int>& pages, int students, int mid) {
    int studentCount = 1;
    int pagesSum = 0;

    for (int i = 0; i < pages.size(); i++) {

        if (pagesSum + pages[i] <= mid) {
            pagesSum += pages[i];
        }
        else {
            studentCount++;

            if (studentCount > students || pages[i] > mid) {
                return false;
            }

            pagesSum = pages[i];
        }
    }

    return true;
}

int allocateBooks(vector<int>& pages, int students) {

    int start = 0; 
    int sum = 0;

    for ( int i = 0 ; i < pages.size(); i++){
        sum += pages[i];
        start = max(start , pages[i]);
    }
    int end = sum;
 

    int ans = -1;

    while (start <= end) {

        int mid = start + (end - start) / 2;

        if (isPossible(pages, students, mid)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    return ans;
}

int main() {

    vector<int> pages = {10, 20, 30, 40,50};

    int students = 2;

    cout << allocateBooks(pages, students);

    return 0;
}