#include <iostream>
using namespace std;

int luas(int p, int l){
    return p * l;
}

double luas(double p, double l){
    return p * l;
}

int luas(int p){
    return p * p;
}

double luas(double p){
    return p * p;
}

int main(){
    cout << "Luas Kotak (2 x 4) = " << luas(2,4) << endl;
    cout << "Luas Kotak (2 x 2) = " << luas(2) << endl;
    cout << "Luas Kotak (2.5 x 2.5) = " << luas(2.5) << endl;
    cout << "Luas Kotak (2.5 x 3.4) = " << luas(2.5 , 3.4) << endl;
    return 0;
}