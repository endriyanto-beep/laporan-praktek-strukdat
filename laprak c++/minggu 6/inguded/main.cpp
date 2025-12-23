#include <iostream>
#include <string>
#include "Doublylist.h"
#include "Doublylist.cpp"
using namespace std;

int main() {
    List L;
    CreateList(L);

    infotype x;
    int validData = 0;

    while (validData < 3) {
        cout << "masukkan nomor polisi: ";
        cin >> x.nopol;
        cout << "masukkan warna kendaraan: ";
        cin >> x.warna;
        cout << "masukkan tahun kendaraan: ";
        cin >> x.thnBuat;
        cout << endl;

        if (findElm(L, x.nopol) != NULL) {
            cout << "nomor polisi sudah terdaftar\n\n";
        } else {
            insertLast(L, alokasi(x));
            validData++;
        }
    }

    cout << "\nDATA LIST : \n\n";
    printInfo(L);

    string cariNopol;
    cout << "Masukkan Nomor Polisi yang dicari : ";
    cin >> cariNopol;

    address F = findElm(L, cariNopol);
    if (F != NULL) {
        cout << "\nNomor Polisi : " << F->info.nopol << endl;
        cout << "Warna        : " << F->info.warna << endl;
        cout << "Tahun        : " << F->info.thnBuat << endl;
    } else {
        cout << "Data tidak ditemukan.\n";
    }

    string delNopol;
    cout << "\nMasukkan Nomor Polisi yang akan dihapus : ";
    cin >> delNopol;

    address P = findElm(L, delNopol);
    if (P != NULL) {
        if (P == L.First) {
            deleteFirst(L, P);
        }
        else if (P == L.Last) {
            deleteLast(L, P);
        }
        else {
            deleteAfter(P->prev, P);
        }
        cout << "Data dengan nomor polisi " << delNopol << " berhasil dihapus.\n";
    } else {
        cout << "Data tidak ditemukan.\n";
    }

    cout << "\nDATA LIST : \n\n";
    printInfo(L);

    return 0;
}
