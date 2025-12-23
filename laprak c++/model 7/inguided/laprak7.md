
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

Kode STACK_H ini merupakan ADT stack sederhana yang menggunakan array untuk menyimpan data bertipe integer. Struktur Stack memiliki array info sebagai tempat penyimpanan elemen dan variabel top untuk menandai posisi elemen teratas. Di dalam header ini disediakan beberapa operasi dasar stack, seperti membuat stack kosong, menambahkan data ke stack (push), mengambil data teratas (pop), menampilkan isi stack, membalik urutan stack, serta memasukkan data ke stack melalui aliran input.

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

Kode stack.cpp ini merupakan implementasi ADT stack berbasis array dengan kapasitas maksimal 20 elemen. Program ini menyediakan operasi dasar stack seperti membuat stack kosong, menambahkan data ke stack (push), mengambil data teratas (pop), dan menampilkan isi stack dari elemen teratas ke bawah. Selain itu, terdapat fungsi untuk membalik urutan stack dengan bantuan stack sementara, memasukkan data secara terurut menaik, serta membaca input karakter dari keyboard dan menyimpannya ke dalam stack dalam bentuk angka. Secara keseluruhan, kode ini digunakan untuk mengelola data stack secara sederhana sesuai konsep LIFO (Last In First Out).

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

> ![Screenshot bagian x](b1.png)

penjelasan kode

Program main.cpp ini menunjukkan cara kerja stack dengan operasi push, pop, dan pembalikan stack. Dari output terlihat bahwa setelah beberapa kali push dan pop, isi stack terakhir adalah 9 2 4 3 dengan 9 sebagai elemen paling atas (TOP), sesuai prinsip LIFO. Ketika fungsi balikStack dipanggil, urutan elemen stack dibalik sehingga elemen yang awalnya paling bawah menjadi paling atas, menghasilkan output 3 4 2 9. Ini menandakan bahwa fungsi pembalikan stack bekerja dengan benar.

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

> ![Screenshot bagian x](b2.png)

penjelasan kode

Program main.cpp ini digunakan untuk menguji stack dengan metode pushAscending, yaitu memasukkan data ke dalam stack agar tetap tersusun secara terurut. Dari output terlihat bahwa setelah semua data dimasukkan, isi stack ditampilkan dari elemen teratas ke bawah sehingga urutannya menjadi 9 8 4 3 3 2, dengan 9 sebagai TOP. Ketika fungsi balikStack dijalankan, urutan elemen stack dibalik sehingga elemen terkecil berada di posisi TOP dan hasil akhirnya menjadi 2 3 3 4 8 9. Hal ini menunjukkan bahwa proses penyusunan menaik dan pembalikan stack telah berjalan dengan benar.

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

> ![Screenshot bagian x](b3.png)

penjelasan kode

Program main.cpp ini digunakan untuk menguji fungsi getInputStream pada ADT stack. Saat program dijalankan, pengguna memasukkan deretan angka dalam satu baris (misalnya 4729601), lalu setiap digit dibaca satu per satu dan dimasukkan ke dalam stack sebagai elemen bertipe integer. Karena stack bekerja dengan prinsip LIFO, hasil printInfo pertama menampilkan elemen dari digit terakhir yang dimasukkan sebagai TOP, yaitu 1 0 6 9 2 7 4. Setelah itu, fungsi balikStack dipanggil untuk membalik urutan stack, sehingga elemen yang semula berada di bawah berpindah ke atas, dan hasil akhirnya menjadi 4 7 2 9 6 0 1. Output ini menunjukkan bahwa proses input stream dan pembalikan stack sudah berjalan dengan benar.


## Referensi

1. https://en.wikipedia.org/wiki/Data_structure (diakses blablabla)
