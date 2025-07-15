#include <iostream>

using namespace std;

double volume_kubus(double p = 1, double l = 1, double t = 1);

int main(){
    cout << "Volume Kubus = " << volume_kubus(4,5,6) << endl;
    cout << "Volume Kubus = " << volume_kubus(4,5) << endl;
    cout << "Volume Kubus = " << volume_kubus(4) << endl;
    cout << "Volume Kubus = " << volume_kubus() << endl;
}

double volume_kubus(double p, double l, double t){
    double v;
    v = p * l * t;
    return v;
}