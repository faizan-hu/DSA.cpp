#include <iostream> 

using namespace std;

char ToLowercase(char ch){
    if(ch >= 'a' && ch <='z'){
        return  ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}


bool checkPalindrome(char a[],int n){
    int s = 0;
    int e = n - 1;
    while(s<e){
        if(ToLowercase(a[s]) != ToLowercase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
         
    }
    return 1;
}

void reverseString(char name[], int n){

    int s = 0;
    int e = n-1;

    while(s<e){
        swap(name[s++],name[e--]);
    }

}


int getlength(char name[]){
    int count = 0;

    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){


    char name[50];

    /*cout << "Enter your name: " << endl;
    cin >> name;
    */

    /*cout << "Enter your name: " << endl;
    cin.getline(name,50);
    */

    cout << "Enter your name: " << endl;
    cin >> name;
    //name[3] = '\0';

    
    cout << "yours name is: ";
    cout << name << endl;

    int len = getlength(name);

    cout <<"length is: " << len << endl;

    reverseString(name,len);
    cout << "yours name is: ";
    cout << name << endl;

    cout <<"palindrome or not: " <<checkPalindrome(name,len) <<endl;

    cout <<"CHARACTER IS : " << ToLowercase('b') <<endl;
    cout <<"CHARACTER IS: " << ToLowercase('A') << endl;

     
}