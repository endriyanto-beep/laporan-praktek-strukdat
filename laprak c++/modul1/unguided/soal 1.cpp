#include <iostream>
using namespace std;

int main() {
    float x, y;

    cout << "masukan angka pertama (float): ";
    cin >> x;
    cout << "masukan angka kedua (float) : ";
    cin >> y;

    cout << "\n total perhitungan semua nya" << endl;
    cout << "Tambah       = " << x + y << endl;
    cout << "Kurang       = " << x - y << endl;
    cout << "Kali         = " << x * y << endl;

    if (y == 0) {
        cout << "Bagi         = tidak bisa dibagi nol00" << endl;
    } else {
        cout << "Bagi         = " << (x / y) << endl;
    }

    return 0;
}
