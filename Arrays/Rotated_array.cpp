#include <iostream>

#include <vector>

using namespace std;


void RotatedArray(vector <int>&nums, int k){

      vector<int> temp(nums.size());
        

        for( int i = 0 ; i < nums.size() ; i++){
            temp[(i + k) % nums.size()] = nums[i];
        }

        nums = temp;

}

void  print( vector<int> nums){
    for(int i = 0 ; i < nums.size(); i++){
        cout << nums[i] << " " ;
    }
}
        
        
int main(){
   
    vector<int> nums = {3,5,2,7,9,6};
    
    RotatedArray(nums,2);
     
    print(nums);
}        
        
        