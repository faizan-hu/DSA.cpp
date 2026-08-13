#include <iostream>

int firstoccurence(int arr[], int n, int key){
    int s = 0, e = n-1;
    int mid = s + (e - s)/2;
    int ans = -1;

    while (s<=e){
        if (key == arr[mid]){
            ans = mid ;
            e = mid - 1;
        }
        else if (key>arr[mid]){
            s = mid  + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e - s)/2;


    }
    return ans;

}
int lastoccurence(int arr[], int n, int key){
    int s = 0, e = n-1;
    int mid = s + (e - s)/2;
    int ans = -1;

    while (s<=e){
        if (key == arr[mid]){
            ans = mid ;
            s = mid + 1;
        }
        else if (key>arr[mid]){
            s = mid  + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e - s)/2;


    }
    return ans;
}
int main(){
    int arr[7] = {2,3,3,3,5,9,12};

    std::cout << "first occ of 3 = " << firstoccurence(arr,7,3) << '\n';
    
    std::cout << "last occ of 3 = " << lastoccurence(arr,7,3);
}