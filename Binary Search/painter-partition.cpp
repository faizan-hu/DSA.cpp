#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int>& boards, int painter, int mid) {
    int painterCount = 1;
    int boardSum = 0;

    for (int i = 0; i < boards.size(); i++) {

        if (boardSum + boards[i] <= mid) {
           boardSum += boards[i];
        }
        else {
            painterCount++;

            if (painterCount > painter||  boards[i] > mid) {
                return false;
            }

          boardSum = boards[i];
        }
    }

    return true;
}

int painterpartition(vector<int>& boards, int painter) {

    int start = 0; 
    int sum = 0;

    for ( int i = 0 ; i < boards.size(); i++){
        sum += boards[i];
        start = max(start , boards[i]);
    }
    int end = sum;
 

    int ans = -1;

    while (start <= end) {

        int mid = start + (end - start) / 2;

        if (isPossible(boards,painter, mid)) {
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

    vector<int> boards = {10, 20, 30, 40,50};

    int painter = 2;

    cout << painterpartition(boards, painter);

    return 0;
}