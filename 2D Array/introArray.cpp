#include <iostream>
using namespace std;

bool ispresent(int arr[][3],int target , int row,  int col){
    for(int i = 0; i < row ; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}

/*void printSum(int arr[][3] , int row ,int col){
       for(int i = 0; i < row ; i++){
        int sum = 0;
            for(int j = 0; j < col; j++){
                sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}
*/

/*void printSum(int arr[][3] , int row ,int col){
       for(int i = 0; i < col ; i++){
        int sum = 0;
            for(int j = 0; j < row; j++){
                sum += arr[j][i];
        }
        cout << sum << " ";
    }
    cout << endl;
}*/
int lagestRowSum(int arr[][3],int row,int col){
    int maxi = INT_MIN;
    int rowIndex = -1; 
    for(int i = 0; i < row ; i++){
        int sum = 0;
            for(int j = 0; j < col; j++){
                sum += arr[i][j];
            }
            if(sum > maxi){
                maxi = sum;
                rowIndex = i;
            }
    }
    cout <<"the maxi sum is : " << maxi << endl;
    
    return rowIndex;
}

int main(){

    //create 2D array
    int arr[3][3];
    //int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    //int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    //taking input <- row wise input 
    for(int row = 0 ;  row < 3 ; row++){
        for(int col = 0 ; col < 3 ; col++){
            cin >> arr[row][col] ;
        }
        
    }
    
    //taking input <- col wise input 
    /*for(int col = 0 ;  col < 3 ; col++){
        for(int row = 0 ; row < 3 ; row++){
            cin >> arr[row][col]  ;
        }
        
    }*/
        

    //tanking output 

    for(int row = 0 ; row < 3 ; row++){
        for(int col = 0; col < 3; col++ ){
            cout << arr[row][col] << " ";
        }
       cout << endl; 
    }

   /* cout << "Enter to serched element ";

    int target;
    cin >> target;

    if(ispresent(arr,target,3,3)){
        cout <<"Element is found";
    }
    else{
        cout <<"Not fond";
    }
    cout << endl;

    //print sum row  wise

    //printSum(arr,3,3);

    //print sum col  wise
    printSum(arr,3,3);
    */

    int ans = lagestRowSum(arr,3,3);
    cout <<"maxium largestsum row is : " << ans << endl;


}

