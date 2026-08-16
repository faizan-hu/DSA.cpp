#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossible(vector<int>& stalls, int cows, int mid) {
    int cowsCount = 1;
    int lastpoistion = stalls[0];

    for (int i = 1; i < stalls.size(); i++) {

        if (stalls[i] - lastpoistion >= mid) {

            cowsCount++;
            lastpoistion = stalls[i];
        } 
        if (cowsCount == cows){
            return true;
        }
    }

    return false;
}

int aggressiveCows(vector<int>& stalls, int cows) {

    sort(stalls.begin(),stalls.end());

    int start = 0; 
    int maxi = -1;

   int end = stalls[stalls.size() - 1] - stalls[0];
 

    int ans = -1;

    while (start <= end) {

        int mid = start + (end - start) / 2;

        if (isPossible(stalls, cows , mid)) {
            ans = mid;
            start  = mid  + 1;
        }
        else {
            end  = mid - 1;
        }
    }

    return ans;
}

int main() {

    vector<int> stalls = {1,3,5,2,6,8,6,9};

    int cows = 2;

   std:: cout << aggressiveCows(stalls, cows);

    return 0;
}