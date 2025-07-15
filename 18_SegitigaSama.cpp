#include <iostream>

using namespace std;

int main(){

    int n;
    cout << "Masukkan Panjang Pola : ";
    cin >> n;
    cout << endl;

    cout << "POLA 1" << endl;
    for (int i = 1; i <= n; i++){
        for (int j = n; j > i; j--){
            cout << "  ";
        }
        for (int k = 1; k <= (2*i - 1); k++){
            cout << "* ";
        }
        cout << endl;
    }

    cout << "POLA 2" << endl;
    for (int i = n; i >= 1; i--){
        for (int j = i; j < n; j++){
            cout << "  ";
        }
        for (int k = 1; k <= (2*i - 1); k++){
            cout << "* ";
        }
        cout << endl;
    }

        cout << "POLA 3" << endl;
    for (int i = 1; i <= n; i++){
        for (int j = n; j > i; j--){
            cout << "  ";
        }
        for (int k = 1; k <= (2*i - 1); k++){
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 4; i >= 1; i--){
        for (int j = i; j < n; j++){
            cout << "  ";
        }
        for (int k = 1; k <= (2*i - 1); k++){
            cout << "* ";
        }
        cout << endl;
    }
     return 0;
}