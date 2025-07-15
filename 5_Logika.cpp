#include <iostream>

using namespace std;

int main(){
    int a = 10;
    int b = 15;
    bool hasil;

    cout << "OPERATOR LOGIKA NOT" << endl;

    hasil = !(a==10);
    cout << hasil << endl << endl;

    cout << "OPERATOR LOGIKA AND" << endl;
    hasil = (a==10) && (b==15);
    cout << hasil << endl;
    hasil = (a==10) && (b==10);
    cout << hasil << endl << endl;

    cout << "OPERATOR LOGIKA OR" << endl;
    hasil = (a==10) || (b==15);
    cout << hasil << endl;
    hasil = (a==10) || (b==10);
    cout << hasil << endl;

    return 0;
}