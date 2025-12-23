#ifndef MULTILIST_H
#define MULTILIST_H

#define Nil NULL

typedef int infotypeinduk;
typedef int infotypeanak;

typedef struct elemen_list_induk *address;
typedef struct elemen_list_anak *address_anak;

struct elemen_list_anak {
    infotypeanak info;
    address_anak next;
    address_anak prev;
};

struct listanak {
    address_anak first;
    address_anak last;
};

struct elemen_list_induk {
    infotypeinduk info;
    listanak lanak;
    address next;
    address prev;
};

struct listinduk {
    address first;
    address last;
};

bool ListEmpty(listinduk L);
bool ListEmptyAnak(listanak L);

void CreateList(listinduk &L);
void CreateListAnak(listanak &L);

address alokasi(infotypeinduk x);
address_anak alokasiAnak(infotypeanak x);

void dealokasi(address &P);
void dealokasiAnak(address_anak &P);

address findElm(listinduk L, infotypeinduk x);
address_anak findElmAnak(listanak L, infotypeanak x);

void insertFirst(listinduk &L, address P);
void insertLast(listinduk &L, address P);
void insertAfter(listinduk &L, address Prec, address P);

void insertFirstAnak(listanak &L, address_anak P);
void insertLastAnak(listanak &L, address_anak P);
void insertAfterAnak(listanak &L, address_anak Prec, address_anak P);

void delFirst(listinduk &L, address &P);
void delLast(listinduk &L, address &P);

void printInfo(listinduk L);
void printInfoAnak(listanak L);

int nbList(listinduk L);
int nbListAnak(listanak L);

#endif
