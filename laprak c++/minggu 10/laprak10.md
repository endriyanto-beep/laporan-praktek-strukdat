

# <h1 align="center">Laporan Praktikum Modul 10 <br>  CODE BLOCKS IDE & PENGENALAN BAHASA C++</h1>
<p align="center">elfan endriyanto - 103112430040</p>

## Dasar Teori

Bahasa pemrograman C++ adalah salah satu bahasa tingkat tinggi yang banyak dimanfaatkan baik di lingkungan pendidikan maupun industri. Pada umumnya, susunan program C++ diawali dengan header file seperti #include, yang berfungsi untuk mendukung proses input dan output standar. Menurut pendapat Indahyati dan Rahmawati (2020), C++ menjadi dasar penting dalam memahami konsep algoritma serta pemrograman, terutama karena struktur sintaksnya relatif sederhana dan mudah dipahami oleh pemula.



## Guided

### soal 1

aku mengerjakan perulangan

## Unguided

### Soal 1,1 bstree.h

```go
#ifndef BSTREE_H
#define BSTREE_H

#include <iostream>
using namespace std;

typedef int infotype;
typedef struct Node* address;

struct Node {
    infotype info;
    address left;
    address right;
};

#define Nil NULL

address alokasi(infotype x);
void insertNode(address &root, infotype x);
address findNode(infotype x, address root);

void InOrder(address root);
void PreOrder(address root);
void PostOrder(address root);

int hitungNode(address root);
int hitungTotal(address root);
int hitungKedalaman(address root, int start);

#endif


```
penjelasan kode

Kode BSTREE_H ini berisi definisi ADT Binary Search Tree (BST) untuk menyimpan data bertipe integer. Setiap node memiliki satu data (info) serta dua pointer, yaitu left untuk anak kiri dan right untuk anak kanan, yang disusun berdasarkan aturan BST. Header ini menyediakan fungsi untuk mengalokasikan node baru, memasukkan data ke dalam tree, dan mencari node tertentu. Selain itu, terdapat fungsi traversal InOrder, PreOrder, dan PostOrder untuk menelusuri isi tree, serta fungsi tambahan untuk menghitung jumlah node, total nilai seluruh node, dan kedalaman tree. Secara keseluruhan, kode ini digunakan sebagai kerangka dasar pengolahan data menggunakan struktur Binary Search Tree.

### Soal 1,2 bstree.cpp

```go

#include "bstree.h"

address alokasi(infotype x) {
    address p = new Node;
    p->info = x;
    p->left = Nil;
    p->right = Nil;
    return p;
}

void insertNode(address &root, infotype x) {
    if (root == Nil) {
        root = alokasi(x);
    }
    else if (x < root->info) {
        insertNode(root->left, x);
    }
    else if (x > root->info) {
        insertNode(root->right, x);
    }
    // jika x == root->info → diabaikan
}

address findNode(infotype x, address root) {
    if (root == Nil || root->info == x)
        return root;
    if (x < root->info)
        return findNode(x, root->left);
    return findNode(x, root->right);
}

void InOrder(address root) {
    if (root != Nil) {
        InOrder(root->left);
        cout << root->info << " - ";
        InOrder(root->right);
    }
}

void PreOrder(address root) {
    if (root != Nil) {
        cout << root->info << " - ";
        PreOrder(root->left);
        PreOrder(root->right);
    }
}

void PostOrder(address root) {
    if (root != Nil) {
        PostOrder(root->left);
        PostOrder(root->right);
        cout << root->info << " - ";
    }
}

int hitungNode(address root) {
    if (root == Nil)
        return 0;
    return 1 + hitungNode(root->left) + hitungNode(root->right);
}

int hitungTotal(address root) {
    if (root == Nil)
        return 0;
    return root->info + hitungTotal(root->left) + hitungTotal(root->right);
}

int hitungKedalaman(address root, int start) {
    if (root == Nil)
        return start;
    int kiri = hitungKedalaman(root->left, start + 1);
    int kanan = hitungKedalaman(root->right, start + 1);
    return (kiri > kanan) ? kiri : kanan;
}


```
penjelasan kode

Kode bstree.cpp ini merupakan implementasi ADT Binary Search Tree (BST). Program ini mengatur proses pembuatan node baru, penyisipan data ke dalam tree sesuai aturan BST (nilai lebih kecil ke kiri dan lebih besar ke kanan), serta pencarian data secara rekursif. Selain itu, disediakan tiga metode traversal yaitu InOrder, PreOrder, dan PostOrder untuk menampilkan isi tree dengan urutan yang berbeda. Kode ini juga menyediakan fungsi untuk menghitung jumlah node, total nilai seluruh node, dan kedalaman maksimum tree, sehingga struktur dan isi BST dapat dianalisis dengan mudah.

### Soal 1 main1.cpp

```go
#include <iostream>
#include "bstree.h"
#include "bstree.cpp"
using namespace std;

int main() {
    cout << "Hello world!" << endl;

    address root = Nil;

    insertNode(root,1);
    insertNode(root,2);
    insertNode(root,6);
    insertNode(root,4);
    insertNode(root,5);
    insertNode(root,3);
    insertNode(root,6);
    insertNode(root,7);

    InOrder(root);

    return 0;
}

```
> Output

> ![Screenshot bagian x](c1.png)

penjelasan kode
Program main.cpp ini menunjukkan hasil pengujian ADT queue berbasis array. Dari output terlihat bahwa pada awal program queue masih kosong dengan nilai head dan tail sama-sama -1. Saat operasi enqueue dilakukan, data masuk ke queue secara berurutan dan posisi tail bertambah, sedangkan head tetap di awal. Ketika dequeue dijalankan, elemen paling depan dihapus sesuai konsep FIFO, lalu isi queue bergeser ke depan sehingga urutan data tetap rapi. Proses ini terus berlangsung sampai semua data habis, dan pada kondisi akhir queue kembali kosong dengan head dan tail bernilai -1.

### Soal 2 main2.cpp

```go
#include <iostream>
#include "bstree.h"
#include "bstree.cpp"
using namespace std;

int main() {
    cout << "Hello world!" << endl;

    address root = Nil;

    insertNode(root,1);
    insertNode(root,2);
    insertNode(root,6);
    insertNode(root,4);
    insertNode(root,5);
    insertNode(root,3);
    insertNode(root,6);
    insertNode(root,7);

    InOrder(root);
    cout << endl;

    cout << "kedalaman : " << hitungKedalaman(root,0) << endl;
    cout << "jumlah node : " << hitungNode(root) << endl;
    cout << "total : " << hitungTotal(root) << endl;

    return 0;
}



```
> Output

> ![Screenshot bagian x](c1.png)

penjelasan kode
Program main.cpp ini menunjukkan hasil pengujian ADT queue berbasis array. Dari output terlihat bahwa pada awal program queue masih kosong dengan nilai head dan tail sama-sama -1. Saat operasi enqueue dilakukan, data masuk ke queue secara berurutan dan posisi tail bertambah, sedangkan head tetap di awal. Ketika dequeue dijalankan, elemen paling depan dihapus sesuai konsep FIFO, lalu isi queue bergeser ke depan sehingga urutan data tetap rapi. Proses ini terus berlangsung sampai semua data habis, dan pada kondisi akhir queue kembali kosong dengan head dan tail bernilai -1.

### Soal 3 main3.cpp

```go
#include <iostream>
#include "bstree.h"
#include "bstree.cpp"
using namespace std;

int main() {
    cout << "Hello world!" << endl;

    address root = Nil;

    insertNode(root,6);
    insertNode(root,4);
    insertNode(root,7);
    insertNode(root,2);
    insertNode(root,5);
    insertNode(root,1);
    insertNode(root,3);

    cout << "InOrder   : ";
    InOrder(root);
    cout << endl;

    cout << "PreOrder  : ";
    PreOrder(root);
    cout << endl;

    cout << "PostOrder : ";
    PostOrder(root);
    cout << endl;

    return 0;
}

```
> Output

> ![Screenshot bagian x](c1.png)

penjelasan kode
Program main.cpp ini menunjukkan hasil pengujian ADT queue berbasis array. Dari output terlihat bahwa pada awal program queue masih kosong dengan nilai head dan tail sama-sama -1. Saat operasi enqueue dilakukan, data masuk ke queue secara berurutan dan posisi tail bertambah, sedangkan head tetap di awal. Ketika dequeue dijalankan, elemen paling depan dihapus sesuai konsep FIFO, lalu isi queue bergeser ke depan sehingga urutan data tetap rapi. Proses ini terus berlangsung sampai semua data habis, dan pada kondisi akhir queue kembali kosong dengan head dan tail bernilai -1.


penjelasan kode

Program main.cpp ini digunakan untuk menguji ADT circular queue dengan variabel count. Dari hasil output terlihat bahwa queue pada awalnya kosong dengan nilai head dan tail -1. Saat dilakukan operasi enqueue, data masuk ke dalam queue secara berurutan dan posisi tail berpindah sesuai mekanisme melingkar, sementara jumlah elemen dicatat oleh count. Ketika dequeue dijalankan, elemen paling depan dihapus, head berpindah ke posisi berikutnya, dan count berkurang. Proses ini terus berlangsung hingga seluruh data keluar dari queue dan akhirnya queue kembali kosong. Output tersebut menunjukkan bahwa pengelolaan queue berjalan dengan benar dan tetap mengikuti konsep FIFO (First In First Out).


## Referensi

1. https://en.wikipedia.org/wiki/Data_structure (diakses blablabla)
