# <h1 align="center">Laporan Praktikum Modul 6 <br>  CODE BLOCKS IDE & PENGENALAN BAHASA C++</h1>
<p align="center">elfan endriyanto - 103112430040</p>

## Dasar Teori

Bahasa pemrograman C++ adalah salah satu bahasa tingkat tinggi yang banyak dimanfaatkan baik di lingkungan pendidikan maupun industri. Pada umumnya, susunan program C++ diawali dengan header file seperti #include, yang berfungsi untuk mendukung proses input dan output standar. Menurut pendapat Indahyati dan Rahmawati (2020), C++ menjadi dasar penting dalam memahami konsep algoritma serta pemrograman, terutama karena struktur sintaksnya relatif sederhana dan mudah dipahami oleh pemula.



## Guided

### soal stacks.cpp

```go
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node* head = nullptr;
Node* tail = nullptr;

void insertDepan(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->prev = nullptr;
    newNode->next = head;

    if (head != nullptr) {
        head->prev = newNode;
    } else {
        tail = newNode;
    }
    head = newNode;
    cout << "Data " << data << " berhasil ditambahkan di depan.\n";
}

void insertBelakang(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    newNode->prev = tail;

    if (tail != nullptr) {
        tail ->next = newNode;
    } else {
        head = newNode;
    }
    tail = newNode;
    cout << "Data " << data << " berhasil ditambahkan di belakang.\n";
}

void insertSetelah(int target, int data) {
    Node* current = head;
    while (current != nullptr && current->data != target) {
        current = current->next;
    }

    if (current == nullptr) {
        cout << "Data target " << target << " tidak ditemukan.\n";
        return;
    }

    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = current->next;
    newNode->prev = current;

    if (current->next != nullptr) {
        current->next->prev = newNode;
    } else {
        tail = newNode;
    }

    current->next = newNode;
    cout << "Data " << data << " berhail disisipkan setelah " << target << ".\n";
}

void hapusDepan() {
    if (head == nullptr) {
        cout << "List kosong.\n";
        return;
    }

    Node* temp = head;
    head = head->next;

    if (head != nullptr) 
        head->prev = nullptr;
    else
        tail = nullptr;

    cout << "Data " << temp->data << " dihapus dari depan.\n";
    delete temp;
}

void hapusBelakang() {
    if (tail == nullptr) {
        cout << "List kosong.\n";
        return;
    }

    Node* temp = tail;
    tail = tail->prev;

    if (tail != nullptr) 
        tail->next = nullptr;
    else
        head = nullptr;

    cout << "Data " << temp->data << " dihapus dari belakang.\n";
    delete temp;
}

void hapusData(int target) {
    if (head == nullptr) {
        cout << "List kosong.\n";
        return;
    }

    Node* current = head;
    while (current != nullptr && current->data != target) {
        current = current->next;
    }

    if (current == nullptr) {
        cout << "Data " << target << " tidak ditemukan.\n";
        return;
    }

    if (current == head) {
        hapusDepan();
    } else if (current == tail) {
        hapusBelakang();
    } else {
        current->prev->next = current->next;
        current->next->prev = current->prev;
        cout << "Data " << current->data << " dihapus.\n";
        delete current;
    }
}

void updateData(int oldData, int newData) {
    Node* current = head;
    while (current != nullptr && current->data != oldData)
        current = current->next;

    if (current == nullptr) {
        cout << "Data " << oldData << " tidak ditemukan.\n";
        return;
    }

    current->data = newData;
    cout << "Data " << oldData << " diubah menjadi " << newData << ".\n";
}

void tampilDepan() {
    if (head == nullptr) {
        cout << "List kosong.\n";
        return;
    }

    cout << "Isi list (dari depan): ";
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << "\n";
}

// ====================================
// Fungsi: Tampilkan dari belakang
// ====================================
void tampilBelakang() {
    if (tail == nullptr) {
        cout << "List kosong.\n";
        return;
    }

    cout << "Isi list (dari belakang): ";
    Node* current = tail;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->prev;
    }
    cout << "\n";
}

// ====================================
// MAIN PROGRAM (MENU INTERAKTIF)
// ====================================
int main() {
    int pilihan, data, target, oldData, newData;

    do {
        cout << "\n===== MENU DOUBLE LINKED LIST =====\n";
        cout << "1. Insert Depan\n";
        cout << "2. Insert Belakang\n";
        cout << "3. Insert Setelah Data\n";
        cout << "4. Hapus Depan\n";
        cout << "5. Hapus Belakang\n";
        cout << "6. Hapus Data Tertentu\n";
        cout << "7. Update Data\n";
        cout << "8. Tampil dari Depan\n";
        cout << "9. Tampil dari Belakang\n";
        cout << "0. Keluar\n";
        cout << "===================================\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan data: ";
                cin >> data;
                insertDepan(data);
                break;
            case 2:
                cout << "Masukkan data: ";
                cin >> data;
                insertBelakang(data);
                break;
            case 3:
                cout << "Masukkan data target: ";
                cin >> target;
                cout << "Masukkan data baru: ";
                cin >> data;
                insertSetelah(target, data);
                break;
            case 4:
                hapusDepan();
                break;
            case 5:
                hapusBelakang();
                break;
            case 6:
                cout << "Masukkan data yang ingin dihapus: ";
                cin >> target;
                hapusData(target);
                break;
            case 7:
                cout << "Masukkan data lama: ";
                cin >> oldData;
                cout << "Masukkan data baru: ";
                cin >> newData;
                updateData(oldData, newData);
                break;
            case 8:
                tampilDepan();
                break;
            case 9:
                tampilBelakang();
                break;
            case 0:
                cout << "👋 Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }

    } while (pilihan != 0);

    return 0;
}
```
> Output

> ![Screenshot bagian x](a1.png)


penjelasan kode

Program ini menerapkan **stack menggunakan linked list**, di mana operasi **push** menambahkan elemen di atas stack, **pop** menghapus elemen teratas, dan fungsi **show** menampilkan isi stack dari atas ke bawah, sehingga terlihat bahwa elemen terakhir yang dimasukkan (30) keluar pertama saat pop dijalankan.

## Unguided

### Soal 1,1 Doublylist.h

```go
#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H

#include <string>
using namespace std;

struct kendaraan {
    string nopol;
    string warna;
    int thnBuat;
};

typedef kendaraan infotype;

struct ElmList {
    infotype info;
    ElmList* next;
    ElmList* prev;
};

typedef ElmList* address;

struct List {
    address First;
    address Last;
};

void CreateList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void printInfo(List L);
void printInfoReverse(List L);
void insertLast(List &L, address P);
address findElm(List L, string nopolDicari);
void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
void deleteAfter(address Prec, address &P);

#endif

```

Kode DOUBLYLIST_H merupakan ADT doubly linked list yang digunakan untuk menyimpan data kendaraan seperti nomor polisi, warna, dan tahun pembuatan. Setiap data disimpan dalam node yang saling terhubung ke depan dan ke belakang, sehingga data bisa diakses dari dua arah. Di dalamnya tersedia fungsi untuk membuat list, menambah, menghapus, mencari, dan menampilkan data kendaraan secara berurutan maupun terbalik.

### Soal 1,2 Doublylist.cpp

```go
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

void dealokasi(address &P) {
    delete P;
    P = NULL;
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

void printInfo(List L) {
    address P = L.First;
    while (P != NULL) {
        cout << "No Polisi : " << P->info.nopol << endl;
        cout << "Warna     : " << P->info.warna << endl;
        cout << "Tahun     : " << P->info.thnBuat << endl << endl;
        P = P->next;
    }
}

void printInfoReverse(List L) {
    address P = L.Last;
    while (P != NULL) {
        cout << "No Polisi : " << P->info.nopol << endl;
        cout << "Warna     : " << P->info.warna << endl;
        cout << "Tahun     : " << P->info.thnBuat << endl << endl;
        P = P->prev;
    }
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

    if (P->next != NULL) {
        P->next->prev = Prec;
    }
}


```
penjelasan kode

Kode Doublylist.cpp ini merupakan implementasi dari ADT doubly linked list yang berfungsi untuk mengelola data kendaraan. Program ini mengatur proses pembuatan list kosong, pembuatan dan penghapusan node, penambahan data di akhir list, pencarian data berdasarkan nomor polisi, serta penampilan data dari depan maupun dari belakang. Selain itu, tersedia juga operasi penghapusan data seperti menghapus elemen pertama, terakhir, dan elemen setelah node tertentu dengan tetap menjaga hubungan pointer next dan prev agar struktur list tetap benar.

### Soal 1,3 main.cpp

```go
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
    printInfoReverse(L);

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
        if (P == L.First)
            deleteFirst(L, P);
        else if (P == L.Last)
            deleteLast(L, P);
        else
            deleteAfter(P->prev, P);

        dealokasi(P);
        cout << "Data berhasil dihapus.\n";
    } else {
        cout << "Data tidak ditemukan.\n";
    }

    cout << "\nDATA LIST : \n\n";
    printInfoReverse(L);

    return 0;
}


```
> Output

> ![Screenshot bagian x](a1.png)

> ![Screenshot bagian x](a2.png)

> ![Screenshot bagian x](a3.png)

penjelasan kode

Kode main.cpp ini digunakan untuk menguji dan menjalankan seluruh fungsi pada ADT doubly linked list kendaraan. Program dimulai dengan membuat list kosong, lalu meminta pengguna memasukkan data kendaraan dan memastikan nomor polisi tidak boleh duplikat sebelum disimpan ke dalam list. Setelah data berhasil dimasukkan, isi list ditampilkan dari belakang ke depan, kemudian program menyediakan fitur pencarian kendaraan berdasarkan nomor polisi dan menampilkan datanya jika ditemukan. Selanjutnya, pengguna dapat menghapus data kendaraan tertentu, baik itu di awal, di akhir, maupun di tengah list, dan hasil akhir list kembali ditampilkan untuk memastikan data sudah terhapus dengan benar.


## Referensi

1. https://en.wikipedia.org/wiki/Data_structure (diakses blablabla)
