#include <iostream>
#include "multilist.h"
#include "multilist.cpp"
using namespace std;

int main() {
    listinduk L;
    CreateList(L);

    address P1 = alokasi(1);
    address P2 = alokasi(2);
    address P3 = alokasi(3);

    insertLast(L, P1);
    insertLast(L, P2);
    insertLast(L, P3);

    address_anak A1 = alokasiAnak(10);
    address_anak A2 = alokasiAnak(20);
    address_anak A3 = alokasiAnak(30);

    insertLastAnak(P1->lanak, A1);
    insertLastAnak(P1->lanak, A2);
    insertLastAnak(P2->lanak, A3);

    printInfo(L);

    cout << "Jumlah induk : " << nbList(L) << endl;
    cout << "Jumlah anak induk 1 : " << nbListAnak(P1->lanak) << endl;

    return 0;
}
