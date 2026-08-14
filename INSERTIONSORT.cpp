#include <iostream>

void INSERTIONSORT(int arr[],int n){

    for(int i = 1 ; i < n ; i ++){
        int temp = arr[i];

        int j = i-1;

        while(j >= 0 && arr[j]>temp )
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] =  temp;
        
    }
}

int main(){
    int arr[] = {5,7,9,3,1,6,4,7};
    int n= 8;

    INSERTIONSORT(arr,n);

    for(int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
}