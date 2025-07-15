#include <iostream>

using namespace std;

int main(){
    int a = 0;
    int b = 10;

    cout << "a = " << a << endl;
    ++a;
    cout << "a + 1 = " << a << endl;
    ++a;
    cout << "a + 1 = " << a << endl;
    ++a;
    cout << "a + 1 = " << a << endl;
    ++a;
    cout << "a + 1 = " << a << endl << endl;

    cout << "b = " << b << endl;
    --b;
    cout << "b - 1 = " << b << endl;
    --b;
    cout << "b - 1 = " << b << endl;
    --b;
    cout << "b - 1 = " << b << endl;
    --b;
    cout << "b - 1 = " << b << endl;

    return 0;
}