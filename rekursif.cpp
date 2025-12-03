#include <iostream>
using namespace std;

int daya(int a, int b) {
    if (b == 0) {
        return 1;
    }
    return a * daya(a, b - 1);
}

int main() {
    int a, b;

    cout << "==== Program Daya Rekursif ====" << endl;
    cout << "Masukkan bilangan : ";
    cin >> a;
    cout << "Masukkan bilanga (pangkat) : ";
    cin >> b;

    cout << "==== Hasil ====" << endl;
    cout << a << "^" << b << " = " << daya(a, b) << endl;
    cout << "================" << endl;

    return 0;
}
