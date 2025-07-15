#include <iostream>

using namespace std;

int main(){
    int a = 100;

    cout << a << " Ditambah 20 = ";
    a += 20;
    cout << a << endl;

    cout << a << " Dikurang 20 = ";
    a -= 20;
    cout << a << endl;

    cout << a << " Dikali 20 = ";
    a *= 20;
    cout << a << endl;

    cout << a << " Dibagi 20 = ";
    a /= 20;
    cout << a << endl;

    cout << a << " Dimodulus 20 = ";
    a %= 20;
    cout << a << endl;

    return 0;
}