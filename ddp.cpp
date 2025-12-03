#include <iostream>
using namespace std;

float tambah(float a, float b) {
    return a + b;
}

float kurang(float a, float b) {
    return a - b;
}

float kali(float a, float b) {
    return a * b;
}

float bagi(float a, float b) {
    if (b == 0) {
        cout << "Error: pembagian dengan nol tidak diperbolehkan!" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    float a, b;
    int pilihan;

    cout << "=============================" << endl;
    cout << "|  KALKULATOR SEDERHANA     |" << endl;
    cout << "=============================" << endl;

    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua  : ";
    cin >> b;

    cout << "==== PILIH OPERASI ====" << endl;
    cout << "1. Tambah" << endl;
    cout << "2. Kurang" << endl;
    cout << "3. Kali" << endl;
    cout << "4. Bagi" << endl;
    cout << "=======================" << endl;
    cout << "Masukkan pilihan: ";
    cin >> pilihan;

    cout << "=======================" << endl;

    switch(pilihan) {
        case 1:
            cout << "Hasil: " << tambah(a, b) << endl;
            break;
        case 2:
            cout << "Hasil: " << kurang(a, b) << endl;
            break;
        case 3:
            cout << "Hasil: " << kali(a, b) << endl;
            break;
        case 4:
            cout << "Hasil: " << bagi(a, b) << endl;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
    }

    cout << "=======================" << endl;
    return 0;
}

