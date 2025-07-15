#include <iostream>

using namespace std;

int main(){
    cout << "MULAI" << endl;
    for (int i = 0; i <= 10; i++){
        if (i == 7){
            break;
        }
        cout << i << endl;
    }
    cout << "SELESAI" << endl;

    cout << endl << "MULAI LAGI" << endl;
    for (int i = 0; i <= 10; i++){
        if (i == 7){
            continue;
        }
        cout << i << endl;
    }
    cout << "SELESAI LAGI" << endl;
    return 0;


}