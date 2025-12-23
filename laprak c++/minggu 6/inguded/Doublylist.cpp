#include "Doublylist.h"
#include <iostream>
using namespace std;

void CreateList(List &L) {
    L.First = NULL;
    L.Last = NULL;
}

address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = NULL;
    P->prev = NULL;
    return P;
}

void dealokasi(address P) {
    delete P;
}

void printInfo(List L) {
    address P = L.First;
    while (P != NULL) {
        cout << "No Polisi : " << P->info.nopol << endl;
        cout << "Warna     : " << P->info.warna << endl;
        cout << "Tahun     : " << P->info.thnBuat << endl << endl;
        P = P->next;
    }
}

void insertLast(List &L, address P) {
    if (L.First == NULL) {
        L.First = P;
        L.Last = P;
    } else {
        L.Last->next = P;
        P->prev = L.Last;
        L.Last = P;
    }
}

address findElm(List L, string nopolDicari) {
    address P = L.First;
    while (P != NULL) {
        if (P->info.nopol == nopolDicari)
            return P;
        P = P->next;
    }
    return NULL;
}

void deleteFirst(List &L, address &P) {
    P = L.First;
    if (P == NULL) return;
    if (L.First == L.Last) {
        L.First = NULL;
        L.Last = NULL;
    } else {
        L.First = P->next;
        L.First->prev = NULL;
    }
}

void deleteLast(List &L, address &P) {
    P = L.Last;
    if (P == NULL) return;
    if (L.First == L.Last) {
        L.First = NULL;
        L.Last = NULL;
    } else {
        L.Last = P->prev;
        L.Last->next = NULL;
    }
}

void deleteAfter(address Prec, address &P) {
    if (Prec == NULL || Prec->next == NULL) return;
    P = Prec->next;
    Prec->next = P->next;
    if (P->next != NULL)
        P->next->prev = Prec;
}
