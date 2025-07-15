#include <iostream>

using namespace std;

int main(){
    cout << "LOOP 1" << endl;
    for (int i = 1; i <= 10; i++){
        cout << i << endl;
    }

    cout << endl << "LOOP 2" << endl;
    for (int i = 1; i <= 10; i += 2){
        cout << i << endl;
    }

    cout << endl << "LOOP 3" << endl;
    for (int i = 10; i >= 1; i--){
        cout << i << endl;
    }

    cout << endl << "LOOP 4" << endl;
    int total = 0;
    for (int i = 1; i <= 10; i++, total =+ i){
        cout << i << " | | " << total << endl;
    }
    return 0;
}