#include <iostream>

using namespace std;

int main(){
    int n;
    int f_n1 = 1;
    int f_n2 = 0;
    int f_n = f_n1 + f_n2;

    cout << "Masukkan Panjang Deret = ";
    cin >> n;

    cout << f_n << " ";
    for (int i = 1; i < n; i++){
        f_n = f_n1 + f_n2;
        f_n2 = f_n1;
        f_n1 = f_n;

        cout << f_n << " " ;
    } 
    return 0;
}