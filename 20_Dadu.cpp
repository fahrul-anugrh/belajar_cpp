#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    char Lempar;

    while(true){
        cout << "Lempar Dadu (y/n)? ";
        cin >> Lempar;

        if (Lempar == 'y'){
            cout << 1 + rand() % 6 << endl;
        } else if (Lempar == 'n'){
            break;
        } else {
            cout << "ketik y atau n dongggggzz" << endl;
        }
    }
   return 0;
}