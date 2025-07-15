#include <iostream>

using namespace std;

int kuadrat(int x){
    int y;
    y = x * x;
    return y;
}

void tampilkan(int input){
    cout << "Tampilkan dengan Void" << endl;
    cout << input;
}

int main(){
    int x, y;

    cout << "FUNGSI KUADRAT" << endl;
    cout << "Masukkan Nilai X = ";
    cin >> x;
    y = kuadrat(x);
    tampilkan(y);

    return 0;
}