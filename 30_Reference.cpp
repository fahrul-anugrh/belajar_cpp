#include <iostream>

using namespace std;

int main(){
    int a = 50;
    int *aPtr = nullptr; // pointer null
    aPtr = &a;

    cout << " Nilai a = " << a << endl;
    cout << "Alamat a = " << aPtr << endl << endl;

    int &b = a;
    cout << " Nilai b = " << b << endl;
    cout << "Alamat b = " << &b << endl << endl;

    cout << "Ubah isi a menjadi = ";
    cin >> a;
    cout << " Nilai a = " << a << endl;
    cout << " Nilai b = " << b << endl << endl;

    cout << "Ubah isi b menjadi = ";
    cin >> b;
    cout << " Nilai a = " << a << endl;
    cout << " Nilai b = " << b << endl << endl;
   
    return 0;
}