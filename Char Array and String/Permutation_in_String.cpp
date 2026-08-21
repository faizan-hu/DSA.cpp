#include <iostream>
#include<string>
using namespace std;


class Solution {
private:
    bool checkequal(int a[26], int b[26]) {

        for(int i = 0; i < 26; i++) {
            if(a[i] != b[i]) {
                return false;
            }
        }

        return true;
    }

public:
    bool checkInclusion(string s1, string s2) {

        // If s1 is bigger, permutation possible nahi hai
        if(s1.length() > s2.length()) {
            return false;
        }

        // Count frequency of s1
        int count1[26] = {0};

        for(int i = 0; i < s1.length(); i++) {
            int index = s1[i] - 'a';
            count1[index]++;
        }

        // First window
        int windowsize = s1.length();
        int count2[26] = {0};

        int i = 0;

        while(i < windowsize) {
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }

        // Check first window
        if(checkequal(count1, count2)) {
            return true;
        }

        // Sliding window
        while(i < s2.length()) {

            // Add new character
            int newchar = s2[i];
            int index = newchar - 'a';
            count2[index]++;

            // Remove old character
            int oldchar = s2[i - windowsize];
            index = oldchar - 'a';
            count2[index]--;

            // Check current window
            if(checkequal(count1, count2)) {
                return true;
            }

            i++;
        }

        return false;
    }
};