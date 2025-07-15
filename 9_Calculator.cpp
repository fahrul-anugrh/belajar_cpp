#include <iostream>

using namespace std;

int main(){
    float a,b,hasil;
    char Op;

    cout << "Masukkan Angka Pertama : ";
    cin >> a;
    cout << "Pilih Operator (+,-,/,*) : ";
    cin >> Op;
    cout << "Masukkan Angka Kedua : ";
    cin >> b;

    if (Op == '+'){
        hasil = a + b;
        cout << "Hasil Operasi " << a << Op << b << " = " << hasil;
    } else if (Op == '-'){
        hasil = a - b;
        cout << "Hasil Operasi " << a << Op << b << " = " << hasil;
    } else if (Op == '/'){
        hasil = a / b;
        cout << "Hasil Operasi " << a << Op << b << " = " << hasil;
    } else if (Op == '*'){
        hasil = a * b;
        cout << "Hasil Operasi " << a << Op << b << " = " << hasil;
    } else {
        cout << "Operator tidak ditemukan";
    }
    cin.get();
    return 0;
}