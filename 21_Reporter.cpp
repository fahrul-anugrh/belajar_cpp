#include <iostream>

using namespace std;

int kuadrat(int x){
    int y;
    y = x * x;
    return y;
}

int tambah(int a, int b){
    int c;
    c = a + b;
    return c;
}

int main(){
    int x, y, a, b, c;

    cout << "FUNGSI KUADRAT" << endl;
    cout << "Masukkan Nilai X = ";
    cin >> x;
    y = kuadrat(x);
    cout << "Kuadrat dari " << x << " = " << y << endl << endl;

    cout << "FUNGSI PENJUMLAHAN" << endl;
    cout << "Masukkan Nilai A = ";
    cin >> a;
    cout << "Masukkan Nilai B = ";
    cin >> b;
    c = tambah(a,b);
    cout << "Hasil Penjumlahan " << a << " + " << b << " = "<< c << endl;

    return 0;
}