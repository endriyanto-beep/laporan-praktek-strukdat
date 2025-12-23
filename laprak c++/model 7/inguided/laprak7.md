
# <h1 align="center">Laporan Praktikum Modul 7 <br>  CODE BLOCKS IDE & PENGENALAN BAHASA C++</h1>
<p align="center">elfan endriyanto - 103112430040</p>

## Dasar Teori

Bahasa pemrograman C++ adalah salah satu bahasa tingkat tinggi yang banyak dimanfaatkan baik di lingkungan pendidikan maupun industri. Pada umumnya, susunan program C++ diawali dengan header file seperti #include, yang berfungsi untuk mendukung proses input dan output standar. Menurut pendapat Indahyati dan Rahmawati (2020), C++ menjadi dasar penting dalam memahami konsep algoritma serta pemrograman, terutama karena struktur sintaksnya relatif sederhana dan mudah dipahami oleh pemula.



## Guided

### soal 1

aku mengerjakan perulangan

## Unguided

### Soal 1,1 Stack.h

```go
#ifndef STACK_H
#define STACK_H

typedef int infotype;

struct Stack {
    infotype info[20];
    int top;
};

void createStack(Stack &S);
void push(Stack &S, infotype x);
infotype pop(Stack &S);
void printInfo(Stack S);
void balikStack(Stack &S);
void getInputStream(Stack &S);

#endif


```

Kode DOUBLYLIST_H merupakan ADT doubly linked list yang digunakan untuk menyimpan data kendaraan seperti nomor polisi, warna, dan tahun pembuatan. Setiap data disimpan dalam node yang saling terhubung ke depan dan ke belakang, sehingga data bisa diakses dari dua arah. Di dalamnya tersedia fungsi untuk membuat list, menambah, menghapus, mencari, dan menampilkan data kendaraan secara berurutan maupun terbalik.

### Soal 1,2 Stack.cpp

```go
#include <iostream>
#include "stack.h"
using namespace std;

void createStack(Stack &S) {
    S.top = -1;
}

void push(Stack &S, infotype x) {
    if (S.top < 19) {
        S.top++;
        S.info[S.top] = x;
    }
}

infotype pop(Stack &S) {
    if (S.top >= 0) {
        infotype x = S.info[S.top];
        S.top--;
        return x;
    }
    return -1;
}

void printInfo(Stack S) {
    cout << "[TOP] ";
    for (int i = S.top; i >= 0; i--) {
        cout << S.info[i] << " ";
    }
    cout << endl;
}

void balikStack(Stack &S) {
    Stack T;
    createStack(T);
    while (S.top >= 0) {
        push(T, pop(S));
    }
    S = T;
}

void pushAscending(Stack &S, infotype x) {
    if (S.top < 0) {
        push(S, x);
        return;
    }
    int i = S.top;
    while (i >= 0 && S.info[i] > x) {
        S.info[i + 1] = S.info[i];
        i--;
    }
    S.info[i + 1] = x;
    S.top++;
}

void getInputStream(Stack &S) {
    char c;
    while (true) {
        c = cin.get();
        if (c == '\n') break;
        push(S, int(c - '0'));
    }
}

```
penjelasan kode

Kode Doublylist.cpp ini merupakan implementasi dari ADT doubly linked list yang berfungsi untuk mengelola data kendaraan. Program ini mengatur proses pembuatan list kosong, pembuatan dan penghapusan node, penambahan data di akhir list, pencarian data berdasarkan nomor polisi, serta penampilan data dari depan maupun dari belakang. Selain itu, tersedia juga operasi penghapusan data seperti menghapus elemen pertama, terakhir, dan elemen setelah node tertentu dengan tetap menjaga hubungan pointer next dan prev agar struktur list tetap benar.

### Soal 1,3 main1.cpp

```go
#include <iostream>
#include "stack.h"
#include "stack.cpp"
using namespace std;

int main() {
    cout << "yoo mabro!" << endl;
    Stack S;
    createStack(S);
    push(S, 3);
    push(S, 4);
    push(S, 8);
    pop(S);
    push(S, 2);
    push(S, 3);
    pop(S);
    push(S, 9);
    printInfo(S);
    cout << "balik stack" << endl;
    balikStack(S);
    printInfo(S);

    return 0;
}

```
> Output

> ![Screenshot bagian x](a1.png)

penjelasan kode

Kode main.cpp ini digunakan untuk menguji dan menjalankan seluruh fungsi pada ADT doubly linked list kendaraan. Program dimulai dengan membuat list kosong, lalu meminta pengguna memasukkan data kendaraan dan memastikan nomor polisi tidak boleh duplikat sebelum disimpan ke dalam list. Setelah data berhasil dimasukkan, isi list ditampilkan dari belakang ke depan, kemudian program menyediakan fitur pencarian kendaraan berdasarkan nomor polisi dan menampilkan datanya jika ditemukan. Selanjutnya, pengguna dapat menghapus data kendaraan tertentu, baik itu di awal, di akhir, maupun di tengah list, dan hasil akhir list kembali ditampilkan untuk memastikan data sudah terhapus dengan benar.

### Soal 1,4 main2.cpp

```go
#include <iostream>
#include "stack.h"
#include "stack.cpp"
using namespace std;

int main() {
    cout << "yoo mabro!" << endl;
    Stack S;
    createStack(S);
    pushAscending(S, 3);
    pushAscending(S, 4);
    pushAscending(S, 8);
    pushAscending(S, 2);
    pushAscending(S, 3);
    pushAscending(S, 9);
    printInfo(S);
    cout << "balik stack" << endl;
    balikStack(S);
    printInfo(S);

    return 0;
}

```
> Output

> ![Screenshot bagian x](a1.png)

penjelasan kode

Kode main.cpp ini digunakan untuk menguji dan menjalankan seluruh fungsi pada ADT doubly linked list kendaraan. Program dimulai dengan membuat list kosong, lalu meminta pengguna memasukkan data kendaraan dan memastikan nomor polisi tidak boleh duplikat sebelum disimpan ke dalam list. Setelah data berhasil dimasukkan, isi list ditampilkan dari belakang ke depan, kemudian program menyediakan fitur pencarian kendaraan berdasarkan nomor polisi dan menampilkan datanya jika ditemukan. Selanjutnya, pengguna dapat menghapus data kendaraan tertentu, baik itu di awal, di akhir, maupun di tengah list, dan hasil akhir list kembali ditampilkan untuk memastikan data sudah terhapus dengan benar.

### Soal 1,5 main3.cpp

```go
#include <iostream>
#include "stack.h"
#include "stack.cpp"
using namespace std;

int main() {
    cout << "yoo broo!" << endl;

    Stack S;
    createStack(S);

    getInputStream(S);
    printInfo(S);

    cout << "kebolak stack dongg" << endl;
    balikStack(S);
    printInfo(S);

    return 0;
}

```
> Output

> ![Screenshot bagian x](a1.png)

penjelasan kode

Kode main.cpp ini digunakan untuk menguji dan menjalankan seluruh fungsi pada ADT doubly linked list kendaraan. Program dimulai dengan membuat list kosong, lalu meminta pengguna memasukkan data kendaraan dan memastikan nomor polisi tidak boleh duplikat sebelum disimpan ke dalam list. Setelah data berhasil dimasukkan, isi list ditampilkan dari belakang ke depan, kemudian program menyediakan fitur pencarian kendaraan berdasarkan nomor polisi dan menampilkan datanya jika ditemukan. Selanjutnya, pengguna dapat menghapus data kendaraan tertentu, baik itu di awal, di akhir, maupun di tengah list, dan hasil akhir list kembali ditampilkan untuk memastikan data sudah terhapus dengan benar.



## Referensi

1. https://en.wikipedia.org/wiki/Data_structure (diakses blablabla)
