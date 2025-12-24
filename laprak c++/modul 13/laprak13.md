


# <h1 align="center">Laporan Praktikum Modul 13 <br> MULTI LINKED LIST</h1>
<p align="center">elfan endriyanto - 103112430040</p>

## Dasar Teori

C++ adalah bahasa pemrograman tingkat tinggi yang dikembangkan oleh Bjarne Stroustrup pada awal 1980-an di Bell Labs. Dirancang sebagai versi yang lebih lengkap dari bahasa pemrograman C, ada banyak fitur tambahan yang disertakan oleh C++.

Fitur ini termasuk object-oriented programming (OOP), pengelolaan memori secara manual, dan penggunaan template generik. Hasilnya, bahasa pemrograman ini pun menjadi lebih fleksibel dan efisien untuk berbagai kebutuhan.

C++ juga dirancang untuk menangani proyek pemrograman kompleks, termasuk aplikasi dengan performa tinggi seperti sistem operasi dan software grafis. Selain itu, C++ mendukung berbagai gaya pemrograman, mulai dari prosedural, generik, hingga berorientasi objek sehingga cocok untuk pengembangan software skala besar.

Berikut merupakan konsep dasar dalam bahasa C++

### 1. **Variabel**

Variabel adalah tempat penyimpanan data dalam program, yang memiliki nama dan nilai tertentu. Di C++, variabel memiliki tipe data yang menentukan jenis nilai yang bisa disimpan.

Berikut adalah tipe-tipe data yang ada dalam variabel C++:

- bool: singkatan dari tipe data boolean, yang hanya berisi dua nilai, yaitu True atau False.
- char: kependekan dari character, yaitu tipe data huruf dari A sampai Z.
- int: kepanjangannya adalah integer, yaitu tipe berupa angka.
- float dan double: tipe data yang berupa angka pecahan, contohnya 1,33.
- string: tipe data dalam bentuk kumpulan karakter, seperti “bahasa pemrograman C++“.

Selain itu, variabel bisa bersifat konstan dengan kata kunci const, yang artinya nilainya tidak bisa diubah setelah ditentukan. C++ juga mendukung pointer, yaitu variabel yang menyimpan alamat memori sehingga developer bisa mengontrol memori secar langsung.

Penulisan variabel dalam C++ terdiri dari dua langkah, yaitu deklarasi dan inisialisasi.

### 2. **Syntax**

Sintaks merupakan pedoman dan peraturan yang harus diikuti ketika menuliskan baris kode/instruksi dalam bahasa pemrograman. Selain itu, sintaks juga dapat dipandang sebagai kerangka yang menentukan struktur bahasa pemrograman.

Bahasa C++ juga memiliki sintaks untuk fungsi-fungsi yang sudah disediakan. Instruksi yang berbeda memiliki sintaks yang berbeda yang menentukan penggunaannya, tetapi program C++ juga memiliki aturan sintaks dasar yang diikuti di seluruh program.

- #include <iostream> : bagian ini disebut preprocessor directive untuk menyertakan file header.

- <iostream> : memberikan akses ke fungsi input-output standar dalam C++.

- using namespace std : bagian ini disebut deklarasi yang memberi tahu program untuk menggunakan namespace std yang berisi banyak fungsi dan objek standar.

- int main() : bagian ini disebut deklarasi fungsi utama (main) yang merupakan pintu masuk eksekusi untuk program C++.

- { dan } : bagian ini disebut kurung kurawal membuka dan menutup blok baris kode untuk fungsi main.

- Semicolon ( ; ) : setiap baris kode dalam contoh di atas diakhiri dengan simbol titik koma ( ; ). Simbol ini berfungsi sebagai penanda akhir dari setiap baris kode dalam program. Ketika kompiler menemui titik koma ini, proses eksekusi pada baris tersebut dihentikan dan lanjut ke baris kode berikutnya.

- return 0; : bagian ini disebut pernyataan kembalian yang mengindikasikan bahwa program telah selesai dengan sukses, sedangkan 0 adalah kode keluaran yang menunjukkan tidak ada kesalahan.

### 3. **Komentar**

Komentar dalam bahasa pemrograman C++ bertujuan untuk memberikan penjelasan mengenai setiap baris kode dengan tujuan memudahkan pembacaan. Penulisan komentar ini dilakukan untuk menyediakan informasi yang relevan terkait dengan implementasi kode yang sedang dibuat. Praktik ini umum dilakukan oleh para programmer sebagai bagian dari dokumentasi proyek mereka.

### 4. **Operasi Aritmatika**

Aritmatika adalah cabang ilmu matematika yang membahas perhitungan dasar "kabataku", yakni operasi perkalian, pembagian, penambahan dan pengurangan.

Selain keempat operasi di atas, bahasa C++ juga memiliki operasi modulo division, atau operator % yang dipakai untuk mencari sisa hasil bagi.

Berikut merupakan operasi aritmatika yang dapat dilakukan dalam bahasa C++.

- +=: assignment penambahan (Contoh: A += 7 ekuivalen dengan A = A + 7).
- -= : assignment pengurangan.
- \*= : assignment perkalian.
- /= : assignment pembagian.
- %=: assignment mod.

### 5. **Control Structures**

Control structure mengatur alur eksekusi program berdasarkan kondisi tertentu. Ada beberapa control structure utama dalam C++, termasuk if-else untuk percabangan serta for, while, dan do-while untuk loop atau perulangan.

Dengan struktur ini, program bisa memberikan respons yang berbeda tergantung pada input atau kondisi yang terjadi selama runtime. Control structure memastikan efisiensi dalam pemrosesan, terutama saat menangani data besar atau algoritma yang kompleks.

**if**<br>
Statement `if` digunakan untuk mengevaluasi ekspresi logis yang menghasilkan nilai `true` atau `false`. Apabila nilainya `true`, blok kode di dalam `if` akan dieksekusi. Kalau tidak, blok tersebut akan dilewati.

**else if dan else**<br>
Apabila kondisi di dalam `if` bernilai `false`, Anda bisa menggunakan `else if` untuk memeriksa kondisi lainnya. Kalau semua kondisi `if` dan `else if` bernilai `false`, blok `else` akan dijalankan sebagai opsi terakhir.

**for**<br>
Loop `for` digunakan untuk melakukan pengulangan dengan jumlah yang diketahui. Struktur ini mencakup **inisialisasi**, **kondisi**, dan **inkrementasi/dekrementasi** dalam satu baris.

Contohnya adalah sebagai berikut:

```c++
...
int main() {
for (int i = 0; i < 5; i++) {
    cout << "Perulangan ke-" << i << endl;
}
```

Pada contoh di atas, variabel `i` diinisialisasi dengan nilai 0. Loop akan berulang selama `i < 5`, dan setiap kali loop berakhir, nilai `i` akan bertambah 1. Pengulangan akan berhenti saat kondisi `i < 5` tidak lagi terpenuhi.

**while**<br>
Loop `while` akan terus mengeksekusi blok kode selama ekspresi kondisional bernilai `true`. Pengulangan akan berhenti begitu kondisi menjadi `false`.

**do-while**<br>
Dengan `do-while`, blok kode akan dieksekusi minimal satu kali, bahkan meskipun kondisinya bernilai `false` saat pemeriksaan pertama. Setelah satu kali eksekusi, kondisi akan diperiksa untuk menentukan apakah loop akan dijalankan lagi.

### 6. **Function**

Sebuah Function dalam C++ adalah blok kode yang dapat menerima input (dalam bentuk parameter) dari pemanggilnya, melakukan serangkaian operasi, dan secara opsional mengembalikan nilai sebagai output. Function sangat berguna untuk mengorganisir kode secara terstruktur dan dapat digunakan kembali.

**Deklarasi Function**<br>
Sebuah deklarasi Function minimal terdiri dari tipe pengembalian, nama Function, dan daftar parameter.

**Definisi Function**<br>
Definisi Function terdiri dari deklarasi dan body Function. Body Function adalah bagian dari Function yang berisi kode yang akan dieksekusi ketika Function dipanggil.

**Parameter dan Argumen**<br>
Sebuah Function memiliki daftar parameter yang memungkinkan pemanggil untuk meneruskan argumen ke dalam Function. Argumen adalah nilai konkret yang dilewatkan ke Function. Anda dapat menggunakan referensi atau nilai untuk mem-pass argumen ke dalam Function.

**Jenis Return**<br>
Jenis return function merujuk pada nilai yang dikembalikan oleh suatu fungsi setelah melakukan operasi atau pemrosesan tertentu. Dalam bahasa pemrograman C++, sebuah function dapat mengembalikan berbagai jenis nilai tergantung pada kebutuhan dan logika programnya.

### 7. **Array**

Array merupakan struktur data yang digunakan untuk `menyimpan sekumpulan data` dalam satu tempat. Setiap data dalam Array memiliki indeks, sehingga kita akan mudah memprosesnya.

Indeks array selalu dimulai dari angka nol (`0`). Pada teori struktur data ukuran array akan bergantung dari banyaknya data yang disimpan di dalamnya.

**Cara Membuat Array pada C++**<br>
Pada C++, array dapat kita buat dengan cara seperti ini.

```c++
// membuat array kosong dengan tipe data integer dan panjang 10
int nama_array[10];

// membuat array dengan langsung diisi
int nama_arr[3] = {0, 3, 2}
```

Cara membuat array hampir sama seperti cara membuat variabel biasa. Bedanya pada array kita harus menentukan panjangnya.

**Cara Mengambil Data dari Array**<br>
Seperti yang sudah kita ketahui, array akan menyimpan sekumpulan data dan memberinya nomer indeks agar mudah diakses. Indeks array selalu dimulai dari nol `0`.

Misalkan kita punya array seperti ini: <br>
`char huruf[5] = {'a', 'b', 'c', 'd', 'e'};`<br>
Bagaimana cara mengambil huruf `c`?

Jawabannya:
`huruf[2];`

**Mengisi Ulang Data Array**<br>
Data pada array dapat kita isi ulang dengan cara seperti ini:<br>
`huruf[2] = 'z';`<br>
Maka isi array `huruf` pada indeks ke-2 akan bernilai z`.

### 8. **Linked List**

Dalam C++, linked list merupakan struktur data linear yang memungkinkan user untuk menyimpan data di lokasi memory yang tidak berurutan. Sebuah linked list didefinisikan sebagai sekumpulan nodes yang dimana tiap node memiliki 2 anggota: value node itu sendiri dan petunjuk next/previous yang menyimpan alamat node berikutnya/sebelumnya.

**Representasi Linked List dalam C++**<br>
Dalam C++, linked list pada dasarnya direpresentasikan oleh pointer ke node pertama, yang umumnya disebut sebagai "**head**" dari list tersebut. Setiam node dalam list didefinisikan oleh struktur yang mencakup data field dan pointer yang mengarah ke struktur dengan tipe yang sama. Jenis struktur ini dikenal sebagai struktur self-referential.

**Singly Linked List**<br>
Singly linked List adalah bentuk paling sederhana dari linked list, di mana setiap node mengandung 2 anggota yaitu data dan next pointer yang menyimpan alamat node berikutnya. Setiap node dalam singly linked list terhubung melalui petunjuk berikutnya, dan penunjuk beriutnya dari node terakhir mengarah ke NULL, yang menandakan akhir dari linked list. Diagram berikut menggambarkan struktur singly linked list: <br>
![Diagram singly linked list] <img width="997" height="283" alt="image" src="https://github.com/user-attachments/assets/e7b86a73-cd92-4a81-a579-c5cc1389ddbf" />


**Doubly Linked List**<br>
Doubly Linked List adalah jenis linked list yang di mana setiap node mengandung 3 bagian: data, pointer ke node berikutnya, dan pointer ke node sebelumnya. Struktur ini memungkinkan penelusuran daftar ke arah depan dan belakang, berbeda dengan Singly Linked List yang hanya dapat ditelusuri ke arah depan.
![Diagram doubly linked list] <img width="1076" height="219" alt="image" src="https://github.com/user-attachments/assets/044b8fd7-2540-4d78-b88c-016de745cb7f" />


### 9. **Stack**

Kontainer stack mengikuti urutan LIFO (Last In First Out) untuk proses insert dan delete. Artinya, elemen yang dimasukkan paling akhir akan dihapus terlebih dahulu, dan elemen yang dimasukkan paling awal akan dihapus terakhir. Hal ini dilakukan dengan insert dan delete elemen hanya pada satu sisi stack yang umumnya disebut sebagai top (puncak) dari stack.

**Operasi dasar Stack**

**1. Inserting Elements**<br>
Dalam stack, elemen baru hanya bisa di-insert di bagian top dari stack dengan menggunakan method push().

**2. Accessing Elements**<br>
Hanya elemen di bagian top dari stack yang bisa diakses menggunakan method top().

**3. Deleting Elements**<br>
Dalam stack, hanya elemen di bagian top yang bisa di-delete menggunakan method pop() dalam satu operasi.

**4. empty()**<br>
Method ini mengecek apakah stack kosong. Method ini mengembalikan true jika stack tidak memiliki elemen; jika tidak, method ini mengembalikan false.

**5. Size of stack**<br>
Function size() pada stack mengembalikan jumlah elemen yang sedang ada di dalam stack. Function ini membantu mengetahui berapa banyak item yang tersimpan tanpa memodifikasi stack.

### 10. **Queue**

Queue menyimpan banyak elemen dalam urutan tertentu yang disebut FIFO.

FIFO adalah singkatan dari First In, First Out. Untuk memvisualisasikan FIFO, bayangkan queue seperti orang-orang yang mengantre di sebuah supermarket. Orang yang pertama kali berdiri dalam antrean adalah orang pertama yang bisa membayar dan keluar dari supermarket. Cara pengorganisasian elemen seperti ini disebut FIFO dalam ilmu komputer dan pemrograman.

Berbeda dengan vector, elemen dalam queue tidak diakses berdasarkan nomor indeks. Karena elemen queue di-add di bagian belakang dan di-remove dari bagian depan, kita hanya bisa mengakses elemen yang ada di bagian front atau back saja.

**Operasi dasar Stack**<br>
Terdapat 2 operasi berupa Enqueue untuk insert, dan Dequeue untuk delete.

### 11. **BST (Binary Search Tree)**

Dalam C++, B-tree adalah struktur data balanced tree yang menjaga data tetap terurut dan memungkinkan proses search, sequential access, insert, dan delete dalam waktu logaritmik. B-tree merupakan generalisasi dari Binary Search Tree (BST) karena sebuah node dapat memiliki lebih dari dua child. B-tree dioptimalkan untuk sistem yang melakukan read dan write data dalam blok berukuran besar. Pada artikel ini, kita akan mempelajari cara mengimplementasikan B-tree dalam bahasa pemrograman C++.

**Properti B-tree**<br>
B-tree adalah self-balancing search tree di mana setiap node dapat memiliki banyak child. Struktur ini menjaga keseimbangan dengan memastikan semua leaf node berada pada level yang sama. Jumlah child dari sebuah node dibatasi dalam rentang tertentu yang telah ditentukan sebelumnya.

- B-tree memiliki properti sebagai berikut:
- Setiap node memiliki maksimal m child.
- Setiap non-leaf node (kecuali root) memiliki minimal ⌈m/2⌉ child.
- Root node memiliki minimal dua child.
- Non-leaf node dengan k child memiliki k−1 key.
- Semua leaf node berada pada level yang sama dan tidak menyimpan key.

**Implementasi B-tree dalam C++**<br>
B-tree dapat diimplementasikan menggunakan sebuah struktur node yang berisi array key dan array pointer ke child. Jumlah key dalam sebuah node selalu satu lebih sedikit dibandingkan jumlah pointer ke child. Diagram berikut merepresentasikan struktur dari sebuah B-tree:
![Diagram B-tree] <img width="860" height="384" alt="image" src="https://github.com/user-attachments/assets/f9a66cec-7b7b-41e9-8d4c-35ea5283d4fb" />


### 12. **Multi Linked List**

Multi-linked list adalah jenis khusus dari list yang memiliki dua atau lebih urutan key secara logis. Sebelum membahas detail tentang multi-linked list, mari lihat terlebih dahulu apa itu linked list. Linked list adalah struktur data yang tidak memiliki batasan ukuran selama memori heap masih tersedia. Kita telah melihat berbagai jenis linked list, seperti Singly Linked List, Circular Linked List, dan Doubly Linked List. Pada bagian ini, kita akan membahas tentang multi-linked list.

Dalam multi-linked list, setiap node dapat memiliki N buah pointer ke node lainnya. Multi-linked list umumnya digunakan untuk mengorganisasi beberapa urutan (order) dari satu kumpulan elemen.

**Properti Multi-Linked List**

Properti dari multi-linked list adalah sebagai berikut:

- Merupakan list terintegrasi dari struktur-struktur yang saling berhubungan.
- Semua node terintegrasi menggunakan link berupa pointer.
- Node-node yang terhubung saling terhubung dengan data yang saling berkaitan.
- Node mengandung pointer dari satu struktur ke struktur lainnya.

<br>

**Struktur Multi-Linked List**

Struktur dari multi-linked list bergantung pada struktur node-nya. Sebuah node umumnya mengandung dua hal:

- Sebuah list pointer
- Seluruh data yang relevan

<br>

**Use Case Multi-Linked List**

Beberapa contoh penggunaan multi-linked list adalah:

- Beberapa urutan (order) dari satu set elemen
- Representasi sparse matrix
- List di dalam list

### 13. **Circular Linked List**

Circular linked list adalah struktur data di mana node terakhir menunjuk kembali ke node pertama, sehingga membentuk sebuah loop tertutup.

- Struktur: Semua node terhubung membentuk lingkaran, sehingga traversal dapat dilakukan secara terus-menerus tanpa menemui NULL.

- Perbedaan dengan Linked List Biasa: Pada linked list biasa, node terakhir menunjuk ke NULL, sedangkan pada circular linked list, node terakhir menunjuk ke node pertama.

- Penggunaan: Sangat cocok untuk tugas seperti scheduling dan pengelolaan playlist, di mana proses berjalan secara mulus dan berulang.

<br>

**Jenis-Jenis Circular Linked List**

Circular linked list dapat dibuat baik dari singly linked list maupun doubly linked list. Oleh karena itu, circular linked list pada dasarnya terbagi menjadi dua jenis:

1. Circular Singly Linked List

   Pada Circular Singly Linked List, setiap node hanya memiliki satu pointer yang disebut pointer next. Pointer next pada node terakhir menunjuk kembali ke node pertama, sehingga membentuk sebuah lingkaran. Pada jenis linked list ini, traversal hanya dapat dilakukan dalam satu arah.

2. Circular Doubly Linked List

   Pada Circular Doubly Linked List, setiap node memiliki dua pointer, yaitu prev dan next, mirip dengan doubly linked list. Pointer prev menunjuk ke node sebelumnya dan pointer next menunjuk ke node berikutnya. Selain node terakhir yang menyimpan alamat node pertama, node pertama juga menyimpan alamat node terakhir.

## Guided

### soal 1

```go
#include <iostream>
#include <string>
using namespace std;

struct ChildNode {
    string info;
    ChildNode *next;
};

struct ParentNode {
    string info;
    ChildNode *childHead;
    ParentNode *next;
};

ParentNode *createParent(string info) {
    ParentNode *newNode = new ParentNode;
    newNode->info = info;
    newNode->childHead = NULL;
    newNode->next = NULL;
    return newNode;
}

ChildNode *createChild(string info) {
    ChildNode *newNode = new ChildNode;
    newNode->info = info;
    newNode->next = NULL;
    return newNode;
}

void insertParent(ParentNode *&head, string info) {
    ParentNode *newNode = createParent(info);
    if (head == NULL) {
        head = newNode;
    } else {
        ParentNode *temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void insertChild(ParentNode *head, string parentInfo, string childInfo) {
    ParentNode *p = head;
    while(p != NULL && p->info != parentInfo) {
        p = p->next;
    }

    if (p != NULL) {
        ChildNode *newChild = createChild(childInfo);
        if (p->childHead == NULL) {
            p->childHead = newChild;
        } else {
            ChildNode *c = p->childHead;
            while(c->next != NULL) {
                c = c->next;
            }
            c->next = newChild;
        }
    }
}

void printAll(ParentNode *head) {
    ParentNode *p = head;
    while(p != NULL) {
        cout << p->info;
        ChildNode *c = p->childHead;
        if (c != NULL) {
            while(c != NULL) {
                cout << " -> " << c->info;
                c = c->next;
            }
        }
        cout << endl;
        p = p->next;
    }
}

int main() {
    ParentNode *list = NULL;
    insertParent(list, "Parent Node 1");
    insertParent(list, "Parent Node 2");

    printAll(list);
    cout << "\n";

    insertChild(list, "Parent Node 1", "Child Node A");
    insertChild(list, "Parent Node 1", "Child Node B");
    insertChild(list, "Parent Node 2", "Child Node C");

    printAll(list);

    return 0;
}

```
> Output

> <img width="473" height="114" alt="image" src="https://github.com/user-attachments/assets/5a88dd56-d8d1-4c74-96a2-356318bb7380" />

penjelasan kode

PProgram ini mengimplementasikan **multi-level linked list** atau **linked list bertingkat**, di mana setiap **parent node** dapat memiliki satu atau lebih **child node**. Parent node tersusun dalam linked list linear, sementara setiap parent bisa memiliki linked list sendiri untuk child-nya. Program menyediakan fungsi untuk **menambahkan parent**, **menambahkan child ke parent tertentu**, dan **menampilkan seluruh struktur**. Output menunjukkan hierarki data, misalnya `Parent Node 1` memiliki child `Child Node A` dan `Child Node B`, sedangkan `Parent Node 2` memiliki `Child Node C`, sehingga memudahkan representasi hubungan satu-ke-banyak.

## Unguided

### Soal 1,1 circularlist.h

```go
#ifndef CIRCULARLIST_H
#define CIRCULARLIST_H

#include <string>
using namespace std;

#define Nil NULL

typedef struct mahasiswa {
    string nama;
    string nim;
    char jenis_kelamin;
    float ipk;
} infotype;

typedef struct ElmList *address;

typedef struct ElmList {
    infotype info;
    address next;
} ElmList;

typedef struct {
    address First;
} List;

void createList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);

void insertFirst(List &L, address P);
void insertAfter(List &L, address Prec, address P);
void insertLast(List &L, address P);
void insertSortedByNIM(List &L, address P);

address findElm(List L, infotype x);
void printInfo(List L);

#endif


```
penjelasan kode

Kode circularlist.cpp ini merupakan implementasi Abstract Data Type (ADT) circular singly linked list yang digunakan untuk menyimpan dan mengelola data mahasiswa. Program ini menyediakan fungsi untuk membuat list kosong, melakukan alokasi dan dealokasi node, serta mengatur berbagai operasi penyisipan data, seperti penyisipan di awal list, di akhir list, setelah node tertentu, dan penyisipan secara terurut berdasarkan NIM. Karena struktur list bersifat circular, node terakhir selalu menunjuk kembali ke node pertama, sehingga proses penelusuran data dilakukan secara berulang hingga kembali ke elemen First. Selain itu, program ini juga dilengkapi dengan fungsi pencarian data mahasiswa berdasarkan NIM serta fungsi untuk menampilkan seluruh isi list secara terstruktur dan mudah dibaca. Dengan implementasi ini, keterhubungan antar data tetap terjaga secara melingkar dan pengolahan data mahasiswa dapat dilakukan secara efisien sesuai kebutuhan.

### Soal 1,2 circularlist.cpp

```go

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

```
penjelasan kode

Kode circularlist.cpp ini merupakan implementasi ADT circular singly linked list untuk menyimpan data mahasiswa. Program ini mengatur pembuatan list kosong, alokasi dan dealokasi node, serta berbagai operasi penyisipan data seperti insert di awal, di akhir, setelah node tertentu, dan penyisipan terurut berdasarkan NIM. Karena bersifat circular, node terakhir selalu menunjuk kembali ke node pertama sehingga penelusuran list dilakukan dengan perulangan sampai kembali ke First. Selain itu, tersedia fungsi pencarian data mahasiswa berdasarkan NIM dan fungsi untuk menampilkan seluruh isi list dengan format yang rapi. Implementasi ini memastikan data tetap terhubung secara melingkar dan dapat ditampilkan secara berurutan sesuai kebutuhan.

### Soal 1,3 main1.cpp

```go
#include <iostream>
#include "circularlist.h"
#include "circularlist.cpp"
using namespace std;

address createData(string nama, string nim, char jenis_kelamin, float ipk) {
    infotype x;
    x.nama = nama;
    x.nim = nim;
    x.jenis_kelamin = jenis_kelamin;
    x.ipk = ipk;
    return alokasi(x);
}

int main() {
    List L;
    address P;

    createList(L);
    cout << "coba insert first,last,dan after" << endl;

    P = createData("ali", "01", 'l', 3.3);
    insertSortedByNIM(L, P);

    P = createData("bobi", "02", 'l', 3.71);
    insertSortedByNIM(L, P);

    P = createData("cindi", "03", 'p', 3.5);
    insertSortedByNIM(L, P);

    P = createData("danu", "04", 'l', 4.0);
    insertSortedByNIM(L, P);

    P = createData("eli", "05", 'p', 3.4);
    insertSortedByNIM(L, P);

    P = createData("fahmi", "06", 'l', 3.45);
    insertSortedByNIM(L, P);

    P = createData("gita", "07", 'p', 3.75);
    insertSortedByNIM(L, P);

    P = createData("hilmi", "08", 'p', 3.3);
    insertSortedByNIM(L, P);

    printInfo(L);
    return 0;
}

```
> Output

> ![Screenshot bagian x](e1.png)

> ![Screenshot bagian x](e2.png)

penjelasan kode

Program circular list ini digunakan untuk menyimpan data mahasiswa dan melakukan penyisipan secara terurut berdasarkan NIM. Data mahasiswa dibuat terlebih dahulu menggunakan fungsi createData, lalu dimasukkan ke dalam list dengan insertSortedByNIM sehingga urutan data otomatis rapi dari NIM terkecil ke terbesar. Karena list bersifat circular, elemen terakhir akan menunjuk kembali ke elemen pertama, namun saat ditampilkan menggunakan printInfo, data ditelusuri satu putaran penuh sehingga semua mahasiswa tercetak dengan lengkap. Dari output terlihat bahwa seluruh data berhasil disimpan dan ditampilkan sesuai urutan NIM tanpa terputus.

### Soal 2,1 multilist.h

```go
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

```

penjelasan kode

Kode multilist.h ini merupakan definisi Abstract Data Type (ADT) multilist yang digunakan untuk merepresentasikan hubungan antara list induk dan list anak. Struktur ini memungkinkan setiap elemen pada list induk memiliki sebuah list anak tersendiri, sehingga cocok digunakan untuk memodelkan relasi satu ke banyak. Program ini mendefinisikan tipe data, struktur node induk dan anak, serta pengelolaan pointer next dan prev yang menunjukkan bahwa multilist ini menggunakan double linked list baik pada level induk maupun anak. Selain itu, tersedia berbagai operasi dasar seperti pembuatan list, pengecekan list kosong, alokasi dan dealokasi node, pencarian elemen, penyisipan data di awal, akhir, dan setelah node tertentu, penghapusan data, pencetakan isi list, serta perhitungan jumlah elemen pada list induk dan anak. Dengan adanya struktur dan fungsi-fungsi tersebut, ADT multilist ini mampu mengelola data bertingkat secara terstruktur, fleksibel, dan efisien.

### Soal 2,2 multilist.cpp

```go
#include "multilist.h"
#include <iostream>
using namespace std;

bool ListEmpty(listinduk L) {
    return L.first == Nil && L.last == Nil;
}

bool ListEmptyAnak(listanak L) {
    return L.first == Nil && L.last == Nil;
}

void CreateList(listinduk &L) {
    L.first = Nil;
    L.last = Nil;
}

void CreateListAnak(listanak &L) {
    L.first = Nil;
    L.last = Nil;
}

address alokasi(infotypeinduk x) {
    address P = new elemen_list_induk;
    P->info = x;
    P->next = Nil;
    P->prev = Nil;
    CreateListAnak(P->lanak);
    return P;
}

address_anak alokasiAnak(infotypeanak x) {
    address_anak P = new elemen_list_anak;
    P->info = x;
    P->next = Nil;
    P->prev = Nil;
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = Nil;
}

void dealokasiAnak(address_anak &P) {
    delete P;
    P = Nil;
}

address findElm(listinduk L, infotypeinduk x) {
    address P = L.first;
    while (P != Nil && P->info != x) {
        P = P->next;
    }
    return P;
}

address_anak findElmAnak(listanak L, infotypeanak x) {
    address_anak P = L.first;
    while (P != Nil && P->info != x) {
        P = P->next;
    }
    return P;
}

void insertFirst(listinduk &L, address P) {
    if (ListEmpty(L)) {
        L.first = P;
        L.last = P;
    } else {
        P->next = L.first;
        L.first->prev = P;
        L.first = P;
    }
}

void insertLast(listinduk &L, address P) {
    if (ListEmpty(L)) {
        insertFirst(L, P);
    } else {
        P->prev = L.last;
        L.last->next = P;
        L.last = P;
    }
}

void insertAfter(listinduk &L, address Prec, address P) {
    if (Prec != Nil) {
        P->next = Prec->next;
        P->prev = Prec;
        if (Prec->next != Nil) {
            Prec->next->prev = P;
        } else {
            L.last = P;
        }
        Prec->next = P;
    }
}

void insertFirstAnak(listanak &L, address_anak P) {
    if (ListEmptyAnak(L)) {
        L.first = P;
        L.last = P;
    } else {
        P->next = L.first;
        L.first->prev = P;
        L.first = P;
    }
}

void insertLastAnak(listanak &L, address_anak P) {
    if (ListEmptyAnak(L)) {
        insertFirstAnak(L, P);
    } else {
        P->prev = L.last;
        L.last->next = P;
        L.last = P;
    }
}

void insertAfterAnak(listanak &L, address_anak Prec, address_anak P) {
    if (Prec != Nil) {
        P->next = Prec->next;
        P->prev = Prec;
        if (Prec->next != Nil) {
            Prec->next->prev = P;
        } else {
            L.last = P;
        }
        Prec->next = P;
    }
}

void delFirst(listinduk &L, address &P) {
    if (!ListEmpty(L)) {
        P = L.first;
        if (L.first == L.last) {
            L.first = Nil;
            L.last = Nil;
        } else {
            L.first = P->next;
            L.first->prev = Nil;
        }
        P->next = Nil;
    }
}

void delLast(listinduk &L, address &P) {
    if (!ListEmpty(L)) {
        P = L.last;
        if (L.first == L.last) {
            L.first = Nil;
            L.last = Nil;
        } else {
            L.last = P->prev;
            L.last->next = Nil;
        }
        P->prev = Nil;
    }
}

void printInfo(listinduk L) {
    address P = L.first;
    while (P != Nil) {
        cout << "Induk : " << P->info << endl;
        printInfoAnak(P->lanak);
        P = P->next;
    }
}

void printInfoAnak(listanak L) {
    address_anak P = L.first;
    while (P != Nil) {
        cout << "  Anak : " << P->info << endl;
        P = P->next;
    }
}

int nbList(listinduk L) {
    int n = 0;
    address P = L.first;
    while (P != Nil) {
        n++;
        P = P->next;
    }
    return n;
}

int nbListAnak(listanak L) {
    int n = 0;
    address_anak P = L.first;
    while (P != Nil) {
        n++;
        P = P->next;
    }
    return n;
}


```
penjelasan kode

Kode multilist.h ini merupakan ADT multilist yang digunakan untuk mengelola hubungan antara list induk dan list anak, di mana setiap data induk dapat memiliki beberapa data anak. Struktur ini menggunakan double linked list pada induk dan anak, serta menyediakan operasi dasar seperti pembuatan list, alokasi dan dealokasi node, pencarian, penyisipan, penghapusan, penampilan data, dan perhitungan jumlah elemen. ADT ini memungkinkan pengelolaan data bertingkat secara rapi dan terstruktur.

### Soal 2,3 main2.cpp

```go
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

```
> Output

> ![Screenshot bagian x](e3.png)

penjelasan kode

Program multilist ini merupakan implementasi struktur data multi linked list yang digunakan untuk merepresentasikan hubungan satu ke banyak (one-to-many) antara data induk dan data anak. Pada program utama, dibuat sebuah list induk yang kemudian diisi dengan tiga elemen induk. Setiap elemen induk memiliki list anak sendiri yang awalnya kosong. Selanjutnya, beberapa elemen anak dialokasikan dan dimasukkan ke list anak dari induk tertentu, sehingga satu induk dapat memiliki lebih dari satu anak, sementara induk lain bisa saja tidak memiliki anak. Fungsi printInfo digunakan untuk menampilkan seluruh data induk beserta anak-anak yang terhubung dengannya, sedangkan fungsi nbList dan nbListAnak digunakan untuk menghitung jumlah elemen induk serta jumlah elemen anak pada induk tertentu. Hasil keluaran menunjukkan bahwa struktur multilist mampu mengelola data secara hierarkis dan terorganisir dengan baik sesuai konsep relasi one-to-many.

## Referensi

1. _Hostinger_. https://www.hostinger.com/id/tutorial/bahasa-pemrograman-cpp. Diakses pada 03 Oktober 2025.
2. _Dicoding_. https://www.dicoding.com/blog/memahami-esensi-bahasa-pemrograman-c/. Diakses pada 03 Oktober 2025.
3. _Duniailkom_. https://www.duniailkom.com/tutorial-belajar-c-plus-plus-jenis-jenis-operator-aritmatika-bahasa-c-plus-plus/. Diakses pada 03 Oktober 2025.
4. _kodingakademi_. https://www.kodingakademi.id/function-c-panduan-lengkap/. Diakses pada 03 Oktober 2025.
5. _petanikode_ . https://www.petanikode.com/cpp-array/. Diakses pada 06 Oktober 2025.
6. _GeekForGeeks_. https://www.geeksforgeeks.org/cpp/cpp-linked-list/. Diakses pada 13 Oktober 2025.
7. _GeekForGeeks_. https://www.geeksforgeeks.org/cpp/doubly-linked-list-in-cpp/. Diakses pada 27 Oktober 2025.
8. _GeekForGeeks_. https://www.geeksforgeeks.org/cpp/stack-in-cpp-stl/. Diakses pada 4 November 2025.
9. _W3schools_. https://www.w3schools.com/cpp/cpp_queues.asp. Diakses pada 14 November 2025.
10. _GeeksForGeeks_. https://www.geeksforgeeks.org/cpp/b-tree-implementation-in-cpp/. Diakses pada 6 Desember 2025.
11. _GeeksForGeeks_. https://www.geeksforgeeks.org/dsa/circular-linked-list/. Diakses pada 18 Desember 2025.
12. _GeekForGeeks_. https://www.geeksforgeeks.org/dsa/introduction-to-multi-linked-list/. Diakses 18 Desember 2025.
