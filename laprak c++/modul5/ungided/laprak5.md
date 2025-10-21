# <h1 align="center">Laporan Praktikum Modul 5 <br>  CODE BLOCKS IDE & PENGENALAN BAHASA C++</h1>
<p align="center">elfan endriyanto - 103112430040</p>

## Dasar Teori

Bahasa pemrograman C++ adalah salah satu bahasa tingkat tinggi yang banyak dimanfaatkan baik di lingkungan pendidikan maupun industri. Pada umumnya, susunan program C++ diawali dengan header file seperti #include, yang berfungsi untuk mendukung proses input dan output standar. Menurut pendapat Indahyati dan Rahmawati (2020), C++ menjadi dasar penting dalam memahami konsep algoritma serta pemrograman, terutama karena struktur sintaksnya relatif sederhana dan mudah dipahami oleh pemula.



## Guided

### soal 1

aku mengerjakan perulangan

## Unguided

### Soal 1.searcing pembeli

```go
#include <iostream>
using namespace std;

struct Node {
    string nama;
    string pesanan;
    Node* next;
};
Node* head = nullptr;

Node* createnode(string nama, string pesanan) {
    Node* newnode = new Node();
    newnode->nama = nama;
    newnode->pesanan = pesanan;
    newnode->next = nullptr;
    return newnode;
}

void tambahantrian(string nama, string pesanan) {
    Node* newnode = createnode(nama, pesanan);
    if (head == nullptr) {
        head = newnode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    cout << "pembeli " << nama << " pesanan \"" << pesanan << "\" berhasil ditambahkan ke antrian.\n";
}

void layaniantrian() {
    if (head == nullptr) {
        cout << "tidak ada antrian! tidak ada yang bisa dilayani.\n";
        return;
    }

    Node* temp = head;
    cout << "melayani pembeli: " << temp->nama << " (Pesanan: " << temp->pesanan << ")\n";
    head = head->next;
    delete temp;
}

void tampilkanantrian() {
    if (head == nullptr) {
        cout << "tidak ada antrian!!\n";
        return;
    }

    Node* temp = head;
    cout << "\n=== DAFTAR ANTRIAN PEMBELI ===\n";
    while (temp != nullptr) {
        cout << "nama: " << temp->nama << " | pesanan: " << temp->pesanan << endl;
        temp = temp->next;
    }
    cout << "===============================\n";
}

void cariantrian(string namadicari) {
    if (head == nullptr) {
        cout << "tidak ada antrian!!\n";
        return;
    }

    Node* temp = head;
    bool ditemukan = false;
    int posisi = 1;

    while (temp != nullptr) {
        if (temp->nama == namadicari) {
            cout << "Pembeli \"" << namadicari << "\" ada pada antrian ke-" 
                 << posisi << " dengan pesanan \"" << temp->pesanan << "\".\n";
            ditemukan = true;
            break; 
        }
        temp = temp->next;
        posisi++;
    }

    if (!ditemukan) {
        cout << "Pembeli \"" << namadicari << "\" tidak ada dalam antrian.\n";
    }
}

int main() {
    int pilihan;
    string nama, pesanan;

    do {
        cout << "\n=== MENU ANTRIAN PEMBELI ===\n";
        cout << "1. tambah antrian\n";
        cout << "2. layani antrian\n";
        cout << "3. tampilkan antrian\n";
        cout << "4. cari nama pembeli\n";
        cout << "0. keluar\n";
        cout << "pilih: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "masukkan nama pembeli : ";
                cin >> nama;
                cout << "masukkan pesanan : ";
                cin >> pesanan;
                tambahantrian(nama, pesanan);
                break;
            case 2:
                layaniantrian();
                break;
            case 3:
                tampilkanantrian();
                break;
            case 4:
                cout << "masukkan nama pembeli yang mau dicari: ";
                cin >> nama;
                cariantrian(nama);
                break;
            case 0:
                cout << "program selesai.\n";
                break;
            default:
                cout << "pilihan tidak valid!\n";
        }
    } while (pilihan != 0);

    return 0;
}

```

> Output
> ![Screenshot bagian x](e1.png)

Pada soal Unguided 1,Program ini digunakan untuk mengelola antrian pembeli dengan menggunakan linked list. Setiap pembeli punya data nama dan pesanan. Fungsi tambahantrian() dipakai untuk menambah pembeli ke akhir antrian, layaniantrian() untuk melayani dan menghapus pembeli pertama, dan tampilkanantrian() untuk melihat semua pembeli yang sedang antre. Program ini berjalan dengan sistem FIFO (First In, First Out), artinya pembeli yang datang duluan akan dilayani lebih dulu.
### Soal 2.searcing buku

```go
#include <iostream>
using namespace std;

struct Node {
    string ISBN;
    string judul;
    string penulis;
    Node* next;
};
Node* head = nullptr;

Node* createnode(string ISBN, string judul, string penulis) {
    Node* newnode = new Node();
    newnode->ISBN = ISBN;
    newnode->judul = judul;
    newnode->penulis = penulis;
    newnode->next = nullptr;
    return newnode;
}

void tambahbuku(string judul, string penulis, string ISBN) {
    Node* newnode = createnode(ISBN, judul, penulis);
    if (head == nullptr) {
        head = newnode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    cout << "Buku " << judul << ", penulis " << penulis << ", nomor " << ISBN << " berhasil ditambahkan.\n";
}

void tampilkanbuku() {
    if (head == nullptr) {
        cout << "Daftar kosong.\n";
        return;
    }
    Node* temp = head;
    cout << "\n=== DAFTAR BUKU ===\n";
    while (temp != nullptr) {
        cout << "Judul  : " << temp->judul << endl;
        cout << "Penulis: " << temp->penulis << endl;
        cout << "ISBN   : " << temp->ISBN << endl;
        cout << "----------------------\n";
        temp = temp->next;
    }
}

void caribuku(string katakunci) {
    if (head == nullptr) {
        cout << "Daftar kosong.\n";
        return;
    }
    Node* temp = head;
    bool ditemukan = false;
    cout << "\nHasil buku yang di cari untuk \"" << katakunci << "\":\n";
    cout << "----------------------------------------\n";
    while (temp != nullptr) {
        if (temp->judul == katakunci || temp->penulis == katakunci || temp->ISBN == katakunci) {
            cout << "Judul  : " << temp->judul << endl;
            cout << "Penulis: " << temp->penulis << endl;
            cout << "ISBN   : " << temp->ISBN << endl;
            cout << "----------------------------------------\n";
            ditemukan = true;
        }
        temp = temp->next;
    }
    if (!ditemukan) {
        cout << "Tidak ada buku yang di cari dengan data \"" << katakunci << "\".\n";
    }
}

void hapusbuku(string ISBNhapus) {
    if (head == nullptr) {
        cout << "Daftar kosong.\n";
        return;
    }
    Node* temp = head;
    Node* prev = nullptr;
    bool dihapus = false;
    while (temp != nullptr) {
        if (temp->ISBN == ISBNhapus) {
            if (prev == nullptr) {
                head = temp->next;
            } else {
                prev->next = temp->next;
            }
            cout << "Buku \"" << temp->judul << "\" sudah terhapus.\n";
            delete temp;
            dihapus = true;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    if (!dihapus) {
        cout << "Buku dengan ISBN \"" << ISBNhapus << "\" tidak ditemukan.\n";
    }
}

int main() {
    int pilihan;
    string judul, penulis, ISBN, katakunci;

    do {
        cout << "\n=== MENU DATA BUKU ===\n";
        cout << "1. Tambah buku\n";
        cout << "2. Tampilkan semua buku\n";
        cout << "3. Cari buku (judul/penulis/ISBN)\n";
        cout << "4. Hapus buku dengan ISBN\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> pilihan;
        getline(cin, judul);

        switch (pilihan) {
            case 1:
                cout << "Masukkan judul buku   : ";
                getline(cin, judul);
                cout << "Masukkan penulis : ";
                getline(cin, penulis);
                cout << "Masukkan ISBN         : ";
                getline(cin, ISBN);
                tambahbuku(judul, penulis, ISBN);
                break;
            case 2:
                tampilkanbuku();
                break;
            case 3:
                cout << "Masukkan kata kunci (judul/penulis/ISBN): ";
                getline(cin, katakunci);
                caribuku(katakunci);
                break;
            case 4:
                cout << "Masukkan buku yang ingin di hapus ( dengan ISBN ): ";
                getline(cin, ISBN);
                hapusbuku(ISBN);
                break;
            case 0:
                cout << "Program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 0);

    return 0;
}

```

> Output
> ![Screenshot bagian x](e3.png)

penjelasan kode

Program ini memakai **linked list** untuk menyimpan data angka dan membalik urutannya. Setiap data disimpan dalam node yang punya isi `data` dan penunjuk `next`. Fungsi `insertBelakang()` menambah data di bagian akhir list, sedangkan `tampilkanList()` menampilkan semua data dari awal sampai akhir. Fungsi `membaliklist()` berfungsi untuk membalik urutan data dengan cara menukar arah pointer antar node. Di bagian `main()`, program menambahkan angka 1, 2, dan 3 ke list, lalu menampilkan urutannya sebelum dan sesudah dibalik — hasil akhirnya jadi dari `1 2 3` menjadi `3 2 1`.



## Referensi

1. https://en.wikipedia.org/wiki/Data_structure (diakses blablabla)
