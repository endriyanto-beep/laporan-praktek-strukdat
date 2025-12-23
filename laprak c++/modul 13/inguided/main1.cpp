#include <iostream>
#include "circularlist.h"
#include "circularlist.cpp"
using namespace std;

address createData(string nama, string nim, char jenis_kelamin, float ipk) {
    infotype x;
    x.nama = nama;
    x.nim = nim;
    x.jenis_kelamin = jenis_kelamin;
    x.ipk = ipk;
    return alokasi(x);
}

int main() {
    List L;
    address P;

    createList(L);
    cout << "coba insert first,last,dan after" << endl;

    P = createData("ali", "01", 'l', 3.3);
    insertSortedByNIM(L, P);

    P = createData("bobi", "02", 'l', 3.71);
    insertSortedByNIM(L, P);

    P = createData("cindi", "03", 'p', 3.5);
    insertSortedByNIM(L, P);

    P = createData("danu", "04", 'l', 4.0);
    insertSortedByNIM(L, P);

    P = createData("eli", "05", 'p', 3.4);
    insertSortedByNIM(L, P);

    P = createData("fahmi", "06", 'l', 3.45);
    insertSortedByNIM(L, P);

    P = createData("gita", "07", 'p', 3.75);
    insertSortedByNIM(L, P);

    P = createData("hilmi", "08", 'p', 3.3);
    insertSortedByNIM(L, P);

    printInfo(L);
    return 0;
}
