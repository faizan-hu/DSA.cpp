#include <iostream>
#include <vector>
 

using namespace std;

void reverse(vector<int>& v)  {

     int s= 0 , e = v.size()-1;

     while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
     
}

void print(vector<int> v){
    for(int i = 0 ; i <v.size(); i ++){
        cout << v[i] <<" ";
    }
    cout <<endl;
}
 



int main(){

    vector<int> v ;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

      reverse(v);

    cout << "print reverse array " << endl;

    print(v);


    

  return 0;
}