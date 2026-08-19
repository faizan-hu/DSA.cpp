#include <iostream> 

using namespace std;

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
    name[3] = '\0';

    
    cout << "yours name is: ";
    cout << name << endl;


}