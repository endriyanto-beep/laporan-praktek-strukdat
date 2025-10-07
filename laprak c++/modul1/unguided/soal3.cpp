#include <iostream>
using namespace std;

void Mirror(int n) {
    for (int baris = n; baris >= 1; baris--) {
        for (int jarak = 0; jarak < n - baris; jarak++) {
            cout << "  ";
        }
        for (int kiri = baris; kiri >= 1; kiri--) {
            cout << kiri << " ";
        }
        cout << "*";
        for (int kanan = 1; kanan <= baris; kanan++) {
            cout << " " << kanan;
        }
        cout << endl;
    }

     if (n >= 1) {
        for (int jarak = 0; jarak < n; jarak++) {
            cout << "  ";
        }
         cout << "* " << endl;
    }
}

int main() {
    int jumlah;
    cout << "Masukkan angka: ";
    cin >> jumlah;

    cout << "\n bentuk pola:\n\n";
    Mirror(jumlah);

    return 0;
}
