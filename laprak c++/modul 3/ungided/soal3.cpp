#include <iostream>
using namespace std;

struct Matrix {
    int data[3][3];
};

void tampil(Matrix M) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << M.data[i][j] << " ";
        }
        cout << endl;
    }
}

void tukar_posisi(Matrix &A, Matrix &B, int baris, int kolom) {
    int temp = A.data[baris][kolom];
    A.data[baris][kolom] = B.data[baris][kolom];
    B.data[baris][kolom] = temp;
}

int main() {
    Matrix A = {{{1,2,3},{4,5,6},{7,8,9}}};
    Matrix B = {{{9,8,7},{6,5,4},{3,2,1}}};

    cout << "Matrix A sebelum ditukar:\n";
    tampil(A);
    cout << "\nMatrix B sebelum ditukar:\n";
    tampil(B);

    int baris = 0, kolom = 2;
    cout << "\nMenukar elemen di posisi [" << baris << "][" << kolom << "]...\n\n";

    tukar_posisi(A, B, baris, kolom);

    cout << "Matrix A setelah ditukar:\n";
    tampil(A);
    cout << "\nMatrix B setelah ditukar:\n";
    tampil(B);

    return 0;
}
