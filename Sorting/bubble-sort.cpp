#include <iostream> 

void BubbleSort(int arr[],int n){
    bool swapped = false;
    for(int i = 1; i < n; i++){
        for( int j  = 0; j < n-i; j ++){
            
            if(arr[j] > arr[j+1]){
                std::swap(arr[j],arr[j+1]);
                 swapped= true;
            }
        }
        if(swapped == false){
            break;
        }
    }
    
}

int main(){
    int arr[] = {4,6,2,7,5,9,3};
    int n = 7;

     BubbleSort(arr,7);

    for(int i = 0; i < n; i++){
        std::cout << arr[i] <<" ";
    }
}