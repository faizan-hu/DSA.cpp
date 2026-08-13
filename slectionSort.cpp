#include <iostream>

void slectionSort(int arr[],int n){

    for ( int i = 0; i < n-1; i++){
        int minIndex = i;

        for ( int j = i + 1; j < n; j++){
            if ( arr[j] < arr[minIndex]){

                minIndex = j;

            }
        }
        std::swap(arr[i],arr[minIndex]);
    }

}

int main(){


    int arr[6] = {5,7,3,4,2,1};

    slectionSort(arr,6);

     for ( int i = 0 ; i < 6; i ++){
        std::cout << arr[i] << " ";
     }
}