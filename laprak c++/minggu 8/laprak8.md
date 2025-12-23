

# <h1 align="center">Laporan Praktikum Modul 7 <br>  CODE BLOCKS IDE & PENGENALAN BAHASA C++</h1>
<p align="center">elfan endriyanto - 103112430040</p>

## Dasar Teori

Bahasa pemrograman C++ adalah salah satu bahasa tingkat tinggi yang banyak dimanfaatkan baik di lingkungan pendidikan maupun industri. Pada umumnya, susunan program C++ diawali dengan header file seperti #include, yang berfungsi untuk mendukung proses input dan output standar. Menurut pendapat Indahyati dan Rahmawati (2020), C++ menjadi dasar penting dalam memahami konsep algoritma serta pemrograman, terutama karena struktur sintaksnya relatif sederhana dan mudah dipahami oleh pemula.



## Guided

### soal 1

aku mengerjakan perulangan

## Unguided

### Soal 1,1 queue1.h

```go
#ifndef QUEUE_H
#define QUEUE_H

const int MaxEl = 5;
typedef int infotype;

struct Queue {
    infotype info[MaxEl];
    int head, tail;
};

void CreateQueue(Queue &Q);
bool isEmptyQueue(Queue Q);
bool isFullQueue(Queue Q);
void enqueue(Queue &Q, infotype x);
infotype dequeue(Queue &Q);
void printInfo(Queue Q);

#endif

```
penjelasan kode

Kode STACK_H ini merupakan ADT stack sederhana yang menggunakan array untuk menyimpan data bertipe integer. Struktur Stack memiliki array info sebagai tempat penyimpanan elemen dan variabel top untuk menandai posisi elemen teratas. Di dalam header ini disediakan beberapa operasi dasar stack, seperti membuat stack kosong, menambahkan data ke stack (push), mengambil data teratas (pop), menampilkan isi stack, membalik urutan stack, serta memasukkan data ke stack melalui aliran input.

### Soal 1,2 queue1.cpp

```go


#include <iostream>
#include "queue1.h"
using namespace std;

void CreateQueue(Queue &Q) {
    Q.head = -1;
    Q.tail = -1;
}

bool isEmptyQueue(Queue Q) {
    return (Q.head == -1 && Q.tail == -1);
}

bool isFullQueue(Queue Q) {
    return (Q.tail == MaxEl - 1);
}

void enqueue(Queue &Q, infotype x) {
    if (isFullQueue(Q)) {
        cout << "Queue penuh" << endl;
    } else {
        if (isEmptyQueue(Q)) {
            Q.head = 0;
            Q.tail = 0;
        } else {
            Q.tail++;
        }
        Q.info[Q.tail] = x;
    }
}

infotype dequeue(Queue &Q) {
    infotype x = -1;
    if (isEmptyQueue(Q)) {
        cout << "Queue kosong" << endl;
    } else {
        x = Q.info[Q.head];

        if (Q.head == Q.tail) {
            Q.head = Q.tail = -1;
        } else {
            for (int i = Q.head; i < Q.tail; i++) {
                Q.info[i] = Q.info[i + 1];
            }
            Q.tail--;
        }
    }
    return x;
}

void printInfo(Queue Q) {
    cout << Q.head << " - " << Q.tail << "\t| ";

    if (isEmptyQueue(Q)) {
        cout << "empty queue";
    } else {
        for (int i = Q.head; i <= Q.tail; i++) {
            cout << Q.info[i] << " ";
        }
    }
    cout << endl;
}

```
penjelasan kode

Kode stack.cpp ini merupakan implementasi ADT stack berbasis array dengan kapasitas maksimal 20 elemen. Program ini menyediakan operasi dasar stack seperti membuat stack kosong, menambahkan data ke stack (push), mengambil data teratas (pop), dan menampilkan isi stack dari elemen teratas ke bawah. Selain itu, terdapat fungsi untuk membalik urutan stack dengan bantuan stack sementara, memasukkan data secara terurut menaik, serta membaca input karakter dari keyboard dan menyimpannya ke dalam stack dalam bentuk angka. Secara keseluruhan, kode ini digunakan untuk mengelola data stack secara sederhana sesuai konsep LIFO (Last In First Out).

### Soal 1,3 main1.cpp

```go
#include <iostream>
#include "queue1.h"
#include "queue1.cpp"
using namespace std;

int main() {
    cout << "Hello World" << endl;

    Queue Q;
    CreateQueue(Q);

    cout << "------------------------" << endl;
    cout << " H - T \t | Queue info" << endl;
    cout << "------------------------" << endl;

    printInfo(Q);            

    enqueue(Q, 5); printInfo(Q);
    enqueue(Q, 2); printInfo(Q);
    enqueue(Q, 7); printInfo(Q);

    dequeue(Q); printInfo(Q);
    dequeue(Q); printInfo(Q);

    enqueue(Q, 4); printInfo(Q);

    dequeue(Q); printInfo(Q);
    dequeue(Q); printInfo(Q);

    return 0;
}


```
> Output

> ![Screenshot bagian x](b1.png)

penjelasan kode

Program main.cpp ini menunjukkan cara kerja stack dengan operasi push, pop, dan pembalikan stack. Dari output terlihat bahwa setelah beberapa kali push dan pop, isi stack terakhir adalah 9 2 4 3 dengan 9 sebagai elemen paling atas (TOP), sesuai prinsip LIFO. Ketika fungsi balikStack dipanggil, urutan elemen stack dibalik sehingga elemen yang awalnya paling bawah menjadi paling atas, menghasilkan output 3 4 2 9. Ini menandakan bahwa fungsi pembalikan stack bekerja dengan benar.

### Soal 2,1 queue2.h

```go
#ifndef QUEUE_H
#define QUEUE_H

const int MaxEl = 5;
typedef int infotype;

struct Queue {
    infotype info[MaxEl];
    int head;
    int tail;
};

void CreateQueue(Queue &Q);
bool isEmptyQueue(Queue Q);
bool isFullQueue(Queue Q);
void enqueue(Queue &Q, infotype x);
infotype dequeue(Queue &Q);
void printInfo(Queue Q);

#endif


```

Kode STACK_H ini merupakan ADT stack sederhana yang menggunakan array untuk menyimpan data bertipe integer. Struktur Stack memiliki array info sebagai tempat penyimpanan elemen dan variabel top untuk menandai posisi elemen teratas. Di dalam header ini disediakan beberapa operasi dasar stack, seperti membuat stack kosong, menambahkan data ke stack (push), mengambil data teratas (pop), menampilkan isi stack, membalik urutan stack, serta memasukkan data ke stack melalui aliran input.

### Soal 2,2 queue2.cpp

```go
#include <iostream>
#include "queue2.h"
using namespace std;

void CreateQueue(Queue &Q) {
    Q.head = -1;
    Q.tail = -1;
}

bool isEmptyQueue(Queue Q) {
    return (Q.head == -1);
}

bool isFullQueue(Queue Q) {
    return ((Q.tail + 1) % MaxEl == Q.head);
}

void enqueue(Queue &Q, infotype x) {
    if (isFullQueue(Q)) {
        cout << "Queue penuh" << endl;
        return;
    }

    if (isEmptyQueue(Q)) {
        Q.head = 0;
        Q.tail = 0;
    } else {
        Q.tail = (Q.tail + 1) % MaxEl;
    }

    Q.info[Q.tail] = x;
}

infotype dequeue(Queue &Q) {
    if (isEmptyQueue(Q)) {
        cout << "Queue kosong" << endl;
        return -1;
    }

    infotype val = Q.info[Q.head];

    if (Q.head == Q.tail) {
        Q.head = Q.tail = -1;
    } else {
        Q.head = (Q.head + 1) % MaxEl;
    }

    return val;
}

void printInfo(Queue Q) {
    cout << Q.head << " - " << Q.tail << "\t| ";

    if (isEmptyQueue(Q)) {
        cout << "empty queue" << endl;
        return;
    }

    int i = Q.head;
    while (true) {
        cout << Q.info[i] << " ";
        if (i == Q.tail) break;
        i = (i + 1) % MaxEl;
    }
    cout << endl;
}

```
penjelasan kode

Kode stack.cpp ini merupakan implementasi ADT stack berbasis array dengan kapasitas maksimal 20 elemen. Program ini menyediakan operasi dasar stack seperti membuat stack kosong, menambahkan data ke stack (push), mengambil data teratas (pop), dan menampilkan isi stack dari elemen teratas ke bawah. Selain itu, terdapat fungsi untuk membalik urutan stack dengan bantuan stack sementara, memasukkan data secara terurut menaik, serta membaca input karakter dari keyboard dan menyimpannya ke dalam stack dalam bentuk angka. Secara keseluruhan, kode ini digunakan untuk mengelola data stack secara sederhana sesuai konsep LIFO (Last In First Out).

### Soal 2,3 main2.cpp

```go
#include <iostream>
#include "queue2.h"
#include "queue2.cpp"
using namespace std;

int main() {
    cout << "Hello World" << endl;

    Queue Q;
    CreateQueue(Q);

    cout << "------------------------" << endl;
    cout << " H - T \t | Queue info" << endl;
    cout << "------------------------" << endl;

    printInfo(Q);                   

    enqueue(Q, 5); printInfo(Q);     
    enqueue(Q, 2); printInfo(Q);     
    enqueue(Q, 7); printInfo(Q);     

    dequeue(Q); printInfo(Q);        
    dequeue(Q); printInfo(Q);        

    enqueue(Q, 4); printInfo(Q);     

    dequeue(Q); printInfo(Q);        
    dequeue(Q); printInfo(Q);        

    return 0;
}

```
> Output

> ![Screenshot bagian x](b1.png)

penjelasan kode

Program main.cpp ini menunjukkan cara kerja stack dengan operasi push, pop, dan pembalikan stack. Dari output terlihat bahwa setelah beberapa kali push dan pop, isi stack terakhir adalah 9 2 4 3 dengan 9 sebagai elemen paling atas (TOP), sesuai prinsip LIFO. Ketika fungsi balikStack dipanggil, urutan elemen stack dibalik sehingga elemen yang awalnya paling bawah menjadi paling atas, menghasilkan output 3 4 2 9. Ini menandakan bahwa fungsi pembalikan stack bekerja dengan benar.


### Soal 3,1 queue3.h

```go
#ifndef QUEUE_H
#define QUEUE_H

const int MaxEl = 5;
typedef int infotype;

struct Queue {
    infotype info[MaxEl];
    int head;
    int tail;
    int count;     
};

void CreateQueue(Queue &Q);
bool isEmptyQueue(Queue Q);
bool isFullQueue(Queue Q);
void enqueue(Queue &Q, infotype x);
infotype dequeue(Queue &Q);
void printInfo(Queue Q);

#endif

```

Kode STACK_H ini merupakan ADT stack sederhana yang menggunakan array untuk menyimpan data bertipe integer. Struktur Stack memiliki array info sebagai tempat penyimpanan elemen dan variabel top untuk menandai posisi elemen teratas. Di dalam header ini disediakan beberapa operasi dasar stack, seperti membuat stack kosong, menambahkan data ke stack (push), mengambil data teratas (pop), menampilkan isi stack, membalik urutan stack, serta memasukkan data ke stack melalui aliran input.

### Soal 3,2 queue3.cpp

```go
#include <iostream>
#include "queue3.h"
using namespace std;

void CreateQueue(Queue &Q) {
    Q.head = -1;
    Q.tail = -1;
    Q.count = 0;
}

bool isEmptyQueue(Queue Q) {
    return (Q.count == 0);
}

bool isFullQueue(Queue Q) {
    return (Q.count == MaxEl);
}

void enqueue(Queue &Q, infotype x) {
    if (isFullQueue(Q)) {
        cout << "Queue penuh" << endl;
        return;
    }

    if (isEmptyQueue(Q)) {
        Q.head = 0;
        Q.tail = 0;
        Q.info[Q.tail] = x;
        Q.count = 1;
    } else {
        Q.tail = (Q.tail + 1) % MaxEl;
        Q.info[Q.tail] = x;
        Q.count++;
    }
}

infotype dequeue(Queue &Q) {
    if (isEmptyQueue(Q)) {
        cout << "Queue kosong" << endl;
        return -1;
    }

    infotype val = Q.info[Q.head];

    Q.head = (Q.head + 1) % MaxEl;
    Q.count--;

    if (Q.count == 0) {
        Q.head = -1;
        Q.tail = -1;
    }

    return val;
}

void printInfo(Queue Q) {
    if (isEmptyQueue(Q)) {
        cout << "-1 - -1\t| empty queue" << endl;
        return;
    }

    cout << Q.head << " - " << Q.tail << "\t| ";

    int idx = Q.head;
    for (int i = 0; i < Q.count; i++) {
        cout << Q.info[idx] << " ";
        idx = (idx + 1) % MaxEl;
    }
    cout << endl;
}

```
penjelasan kode

Kode stack.cpp ini merupakan implementasi ADT stack berbasis array dengan kapasitas maksimal 20 elemen. Program ini menyediakan operasi dasar stack seperti membuat stack kosong, menambahkan data ke stack (push), mengambil data teratas (pop), dan menampilkan isi stack dari elemen teratas ke bawah. Selain itu, terdapat fungsi untuk membalik urutan stack dengan bantuan stack sementara, memasukkan data secara terurut menaik, serta membaca input karakter dari keyboard dan menyimpannya ke dalam stack dalam bentuk angka. Secara keseluruhan, kode ini digunakan untuk mengelola data stack secara sederhana sesuai konsep LIFO (Last In First Out).

### Soal 3,3 main3.cpp

```go
#include <iostream>
#include "queue3.h"
#include "queue3.cpp"
using namespace std;

int main() {
    cout << "Hello World" << endl;

    Queue Q;
    CreateQueue(Q);

    cout<<"----------------------"<<endl;
    cout<<" H - T \t | Queue info"<<endl;
    cout<<"----------------------"<<endl;

    printInfo(Q);

    enqueue(Q,5); printInfo(Q);
    enqueue(Q,2); printInfo(Q);
    enqueue(Q,7); printInfo(Q);

    dequeue(Q); printInfo(Q);
    dequeue(Q); printInfo(Q);

    enqueue(Q,4); printInfo(Q);

    dequeue(Q); printInfo(Q);
    dequeue(Q); printInfo(Q);

    return 0;
}

```
> Output

> ![Screenshot bagian x](b1.png)

penjelasan kode

Program main.cpp ini menunjukkan cara kerja stack dengan operasi push, pop, dan pembalikan stack. Dari output terlihat bahwa setelah beberapa kali push dan pop, isi stack terakhir adalah 9 2 4 3 dengan 9 sebagai elemen paling atas (TOP), sesuai prinsip LIFO. Ketika fungsi balikStack dipanggil, urutan elemen stack dibalik sehingga elemen yang awalnya paling bawah menjadi paling atas, menghasilkan output 3 4 2 9. Ini menandakan bahwa fungsi pembalikan stack bekerja dengan benar.


## Referensi

1. https://en.wikipedia.org/wiki/Data_structure (diakses blablabla)
