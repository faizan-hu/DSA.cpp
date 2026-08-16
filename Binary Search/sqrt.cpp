#include <iostream>

long long int  sqrtinterger(int n){

    int s = 0;
    int e = n ;

    long long  int ans = -1;
    while(s<=e){
        long long int mid = s + ( e - s)/2;

        long long square = mid * mid ;

        if (square == n){
            return mid ;
        }
        else if (square < n){
            ans = mid ;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + ( e - s)/2;
    }
    return ans;
}  

double moreprescision(int n, int precision, int tempsol){

    double factor = 1;
    double ans = tempsol;

    for (int i = 0; i < precision; i++){
        factor =factor / 10;
        
        for ( double j = ans ; j*j < n; j = j + factor){
            ans = j;
        }
         

    }
    return ans;
}

int main(){
    int n;
    std::cout << " enter your number:  " <<"\n";
    std::cin >> n;

    int tempsol = sqrtinterger(n);

    std ::cout << "Answer is " << moreprescision(n,3,tempsol);
    return 0;

    
}