#include <iostream>

using namespace std;

int faktorial(int a);

int main(){
    int a;

    cout << endl << "Masukkan Bilangan : ";
    cin >> a;

    cout << endl << "Hasil dari Faktorial " << a;
    cout << " = " << faktorial(a) << endl;
    return 0;
}

int faktorial(int a){
    if (a <= 1){
       return a;
    } else {
        return a = a * faktorial(a-1);
    }
}