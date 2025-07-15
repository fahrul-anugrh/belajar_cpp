#include <iostream>

using namespace std;

int main(){
    int a;

    cout << "Masukkan Password : ";
    cin >> a;

    if (a == 6666){
        cout << "Password Anda Benar" << endl;
    } else if (a == 6868){
        cout << "Itu adalah Password Lama Anda" << endl;
    } else {
        cout << "Password Anda Salah" << endl;
    }
    return 0;
}