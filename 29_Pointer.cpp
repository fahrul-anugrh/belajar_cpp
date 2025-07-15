#include <iostream>

using namespace std;

int main(){
    int a = 50;
    int *aPtr = nullptr; // pointer null
    aPtr = &a;

    cout << "Nilai a = " << a << endl;
    cout << "Alamat a = " << aPtr << endl;

    cout << "Ubah isi a menjadi = ";
    cin >> a;

    cout << "Ambil isi pointer a = " << *aPtr << endl;
    
    return 0;
}
