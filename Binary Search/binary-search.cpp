#include <iostream>

int binarysearch(int arr[],int size,int key){
    int start = 0;
    int end = size - 1;

    int mid = (start + (end - start)/2);

    while (start <= end ){
        if(arr[mid] == key){

            return mid;
        }
        if(key >arr[mid]){
            start =  mid + 1;
        }
        else{
            end = mid - 1;
        }
         mid = (start + (end - start)/2);
    }
  
     return -1 ;

}    
int main(){
    int odd[7] = {1,3,5,7,11,17,23};
    int even[8] = {2,4,6,8,10,12,14,16};
     
    int oddindex = binarysearch(odd,7,17);

    std::cout << "index of 17 is: " << oddindex << "\n";

    int evenindex = binarysearch(even,8,14);

    std::cout << "index of 14 is: " <<  evenindex << "\n";
}
