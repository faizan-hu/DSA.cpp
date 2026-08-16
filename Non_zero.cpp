#include <iostream>

#include <vector>

using namespace std;


void moveZeroes(vector<int>& nums) {

        int i = 0;

        for( int j= 0 ; j < nums.size(); j ++){
            if (nums[j] != 0){
                swap(nums[j],nums[i]);
                i++;
            }
        }
        
}

int main(){
    
    vector<int> nums = {1,3,5,0,2,0,3,0,6};

    moveZeroes(nums);


    for(int x : nums){
        cout << x << " ";
    }


}
