#include <iostream>

using namespace std;

double luas(double p, double l){
    double x;
    x = p * l;
    return x;
}

double keliling(double p, double l){
    double y;
    y = p + l;
    return y;
}

void tampilkan(double p, double l){
    cout << "Luas = ";
    cout << luas(p, l) << endl;

    cout << "Keliling = ";
    cout << keliling(p, l) << endl;
}

int main(){
    int p, l;
    cout << "PROGRAM MENGHITUNG" << endl << "LUAS DAN KELILING" << endl << "PERSEGI PANJANG" << endl << endl;
    cout << "Masukkan Panjang = ";
    cin >> p;
    cout << "Masukkan Lebar = ";
    cin >> l;

    cout << endl << "HASILNYA ADALAH : " << endl;
    tampilkan(p, l);
    return 0;
}