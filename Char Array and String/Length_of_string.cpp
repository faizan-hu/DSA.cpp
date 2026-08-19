#include <iostream> 

using namespace std;


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

    

    cout <<"length is: " << getlength(name) << endl;


}