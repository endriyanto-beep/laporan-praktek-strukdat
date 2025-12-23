#include "circularlist.h"
#include <iostream>
using namespace std;

void createList(List &L) {
    L.First = Nil;
}

address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = Nil;
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = Nil;
}

void insertFirst(List &L, address P) {
    if (L.First == Nil) {
        L.First = P;
        P->next = P;
    } else {
        address Q = L.First;
        while (Q->next != L.First) {
            Q = Q->next;
        }
        P->next = L.First;
        Q->next = P;
        L.First = P;
    }
}

void insertLast(List &L, address P) {
    if (L.First == Nil) {
        insertFirst(L, P);
    } else {
        address Q = L.First;
        while (Q->next != L.First) {
            Q = Q->next;
        }
        Q->next = P;
        P->next = L.First;
    }
}

void insertAfter(List &L, address Prec, address P) {
    if (Prec != Nil) {
        P->next = Prec->next;
        Prec->next = P;
    }
}

void insertSortedByNIM(List &L, address P) {
    address Q;
    if (L.First == Nil) {
        insertFirst(L, P);
    } else if (P->info.nim < L.First->info.nim) {
        insertFirst(L, P);
    } else {
        Q = L.First;
        while (Q->next != L.First &&
               Q->next->info.nim < P->info.nim) {
            Q = Q->next;
        }
        insertAfter(L, Q, P);
    }
}

address findElm(List L, infotype x) {
    address P = L.First;
    if (P != Nil) {
        do {
            if (P->info.nim == x.nim) {
                return P;
            }
            P = P->next;
        } while (P != L.First);
    }
    return Nil;
}

void printInfo(List L) {
    address P = L.First;
    if (P != Nil) {
        do {
            cout << "nama : " << P->info.nama << endl;
            cout << "NIM : " << P->info.nim << endl;
            cout << "L/P : " << P->info.jenis_kelamin << endl;
            cout << "IPK : " << P->info.ipk << endl << endl;
            P = P->next;
        } while (P != L.First);
    }
}
