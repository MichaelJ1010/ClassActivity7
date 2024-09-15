#include <iostream>

using namespace std;
int main(){
    string names[3];
    string currentName;
    cout << "Please write down three names" << "\n";
    for(int i = 0; i < 3; i++){
        cin >> currentName;
        names[i] = currentName;
    }
    cout << "First name enterd: " << names[0];
    
    

}