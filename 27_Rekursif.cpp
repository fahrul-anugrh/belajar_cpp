#include <iostream>

using namespace std;

int pangkat(int a, int b){
    if (b <= 1){
       return a;
    } else {
        a = a * pangkat(a, b-1);
    }
}

int main(){
    int a;
    int b;

    cout << endl << "Masukkan Bilangan : ";
    cin >> a;
    cout << "Masukkan Pangkat : ";
    cin >> b;

    cout << endl << "Hasil dari ";
    cout << a << " pangkat " << b;
    cout << " = " << pangkat(a,b) << endl;
    return 0;
}