
# <h1 align="center">Laporan Praktikum Modul 8 <br>  CODE BLOCKS IDE & PENGENALAN BAHASA C++</h1>
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
![Diagram singly linked list]<img width="997" height="282" alt="image" src="https://github.com/user-attachments/assets/55d50010-738d-4153-8a83-855d0a622989" />


**Doubly Linked List**<br>
Doubly Linked List adalah jenis linked list yang di mana setiap node mengandung 3 bagian: data, pointer ke node berikutnya, dan pointer ke node sebelumnya. Struktur ini memungkinkan penelusuran daftar ke arah depan dan belakang, berbeda dengan Singly Linked List yang hanya dapat ditelusuri ke arah depan.
![Diagram doubly linked list]<img width="1077" height="221" alt="image" src="https://github.com/user-attachments/assets/c190b1f5-1508-49e5-b4cd-78456ca44fe9" />


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
## Guided

### soal latihanqueque1.cpp
```go
#include <iostream>
using namespace std;

#define MAX 5 // ukuran max queue

struct Queue {
    int data[MAX];
    int head;
    int tail;
};

// antrean kosong
void createQueue(Queue &Q) {
    Q.head = -1;
    Q.tail = -1;
}

// cek apakah queue kosong
bool isEmpty(Queue Q) {
    return (Q.head == -1 && Q.tail == -1);
}

// cek apakah queue penuh
bool isFull(Queue Q) {
    return (Q.tail == MAX - 1);
}

// menampilkan isi antrian
void printQueue(Queue Q) {
    if (isEmpty(Q)) {
        cout << "Queue kosong!" << endl;
    } else {
        cout << "Queue : ";
        for (int i = Q.head; i <= Q.tail; i++) {
            cout << Q.data[i] << " ";
        }
        cout << endl;
    }
}

// menambah elemen ke dalam antrean (Enqueue)
void enqueue(Queue &Q, int x) {
    if (isFull(Q)) {
        cout << "Queue penuh! Tidak bisa menambah data." << endl;
        return;
    }
    if (isEmpty(Q)) {
        Q.head = Q.tail = 0;
    } else {
        Q.tail++;
    }
    Q.data[Q.tail] = x;
    cout << "Enqueue: " << x << endl;
}

// menghapus elemen dari antrean (Dequeue)
int dequeue(Queue &Q) {
    if (isEmpty(Q)) {
        cout << "Queue kosong! Tidak ada data yang dihapus." << endl;
        return -1; // menandakan queue kosong
    }
    
    int removed = Q.data[Q.head];
    cout << "Dequeue: " << removed << endl;

    if (Q.head == Q.tail) { // hanya 1 elemen
        Q.head = Q.tail = -1;
    } else {
        // Geser semua elemen ke kiri
        for (int i = Q.head; i < Q.tail; i++) {
            Q.data[i] = Q.data[i + 1];
        }
        Q.tail--;
    }
    return removed;
}

int main() {
    Queue Q;
    createQueue(Q);
    printQueue(Q);

    enqueue(Q, 5);
    enqueue(Q, 2);
    enqueue(Q, 7);
    printQueue(Q);

    dequeue(Q);
    printQueue(Q);

    enqueue(Q, 4);
    enqueue(Q, 9);
    printQueue(Q);

    dequeue(Q);
    dequeue(Q);
    printQueue(Q);

    return 0;
}

```
> Output

> <img width="390" height="290" alt="image" src="https://github.com/user-attachments/assets/121da56b-7fbd-4af6-878c-5d6c91eb6cee" />

penjelasan kode

Program ini mengimplementasikan **queue (antrian) statis menggunakan array**, di mana **enqueue** menambahkan elemen di **akhir antrian**, **dequeue** menghapus elemen dari **depan antrian**, dan **printQueue** menampilkan isi antrian. Queue mengikuti prinsip **FIFO (First In, First Out)**, sehingga elemen yang masuk lebih dulu akan keluar lebih dulu, seperti terlihat saat elemen `5` dan `2` dikeluarkan pertama.

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

Kode QUEUE_H ini merupakan ADT queue sederhana yang menggunakan array dengan kapasitas maksimum 5 elemen. Struktur Queue memiliki array info untuk menyimpan data serta dua penunjuk, yaitu head sebagai posisi elemen terdepan dan tail sebagai posisi elemen terakhir. Di dalam header ini disediakan fungsi untuk membuat queue kosong, mengecek apakah queue kosong atau penuh, menambahkan data ke queue (enqueue), mengambil data terdepan dari queue (dequeue), serta menampilkan seluruh isi queue. Secara keseluruhan, kode ini menerapkan konsep antrian FIFO (First In First Out) dengan cara yang sederhana dan terstruktur.

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

Kode queue.cpp ini merupakan implementasi dari ADT queue berbasis array dengan kapasitas terbatas. Program ini mengatur proses pembuatan queue kosong, pengecekan kondisi kosong dan penuh, penambahan data ke antrian (enqueue), serta pengambilan data dari antrian (dequeue) sesuai konsep FIFO. Saat dequeue dilakukan, elemen-elemen di dalam array digeser ke depan agar posisi head tetap di indeks awal. Selain itu, fungsi printInfo digunakan untuk menampilkan isi queue beserta posisi head dan tail, sehingga kondisi queue dapat terlihat dengan jelas saat program dijalankan.

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

> ![Screenshot bagian x](c1.png)

penjelasan kode

Program main.cpp ini menunjukkan hasil pengujian ADT queue berbasis array. Dari output terlihat bahwa pada awal program queue masih kosong dengan nilai head dan tail sama-sama -1. Saat operasi enqueue dilakukan, data masuk ke queue secara berurutan dan posisi tail bertambah, sedangkan head tetap di awal. Ketika dequeue dijalankan, elemen paling depan dihapus sesuai konsep FIFO, lalu isi queue bergeser ke depan sehingga urutan data tetap rapi. Proses ini terus berlangsung sampai semua data habis, dan pada kondisi akhir queue kembali kosong dengan head dan tail bernilai -1.

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
penjelasan kode

Kode QUEUE_H ini berisi definisi ADT queue sederhana dengan kapasitas maksimal 5 elemen yang disimpan menggunakan array. Struktur Queue memiliki variabel head untuk menunjuk elemen terdepan dan tail untuk menunjuk elemen terakhir dalam antrian. Di dalam header ini disediakan fungsi-fungsi dasar untuk membuat queue kosong, mengecek apakah queue kosong atau penuh, menambahkan data ke antrian (enqueue), menghapus data terdepan (dequeue), serta menampilkan isi queue. Seluruh operasi queue ini menerapkan konsep FIFO (First In First Out) secara terstruktur dan mudah dipahami.

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

Kode queue2.cpp ini merupakan implementasi ADT circular queue (queue melingkar) berbasis array. Queue dibuat dengan penanda head dan tail yang akan berputar menggunakan operasi modulo (% MaxEl) sehingga ruang array bisa dimanfaatkan kembali tanpa perlu menggeser data. Program ini menyediakan fungsi untuk membuat queue kosong, mengecek kondisi kosong dan penuh, menambahkan data ke queue (enqueue), menghapus data terdepan (dequeue), serta menampilkan isi queue sesuai urutan antrian. Dengan konsep circular queue ini, proses enqueue dan dequeue menjadi lebih efisien dan tetap mengikuti prinsip FIFO (First In First Out).

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

> ![Screenshot bagian x](c2.png)

penjelasan kode

Program main.cpp ini digunakan untuk menguji implementasi circular queue. Dari output terlihat bahwa pada awal program queue masih kosong dengan nilai head dan tail sama-sama -1. Saat operasi enqueue dilakukan, data masuk ke queue secara berurutan dan posisi tail bertambah, sementara head menunjuk elemen terdepan. Ketika dequeue dijalankan, elemen paling depan dihapus dan head berpindah ke indeks berikutnya tanpa perlu menggeser isi array, karena queue bersifat melingkar. Proses ini terus berlanjut hingga seluruh data dikeluarkan, dan pada kondisi akhir queue kembali kosong dengan head dan tail bernilai -1. Output tersebut menunjukkan bahwa mekanisme circular queue sudah berjalan dengan benar dan tetap mengikuti konsep FIFO.


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
penjelasan kode

Kode QUEUE_H ini merupakan pengembangan ADT queue berbasis array dengan kapasitas maksimum 5 elemen, di mana selain head dan tail, ditambahkan variabel count untuk menyimpan jumlah elemen yang ada di dalam queue. Dengan adanya count, proses pengecekan kondisi kosong dan penuh menjadi lebih mudah dan jelas, tanpa hanya bergantung pada posisi indeks. Header ini juga menyediakan fungsi untuk membuat queue kosong, mengecek apakah queue kosong atau penuh, menambahkan data (enqueue), menghapus data terdepan (dequeue), serta menampilkan isi queue. Seluruh mekanisme tetap mengikuti konsep FIFO (First In First Out).

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

Kode queue3.cpp ini merupakan implementasi ADT circular queue yang ditingkatkan dengan penggunaan variabel count untuk menyimpan jumlah elemen di dalam queue. Dengan adanya count, pengecekan kondisi kosong dan penuh menjadi lebih sederhana dan aman, karena tidak hanya bergantung pada posisi head dan tail. Proses enqueue menambahkan data ke antrian dengan memutar indeks menggunakan modulo, sedangkan dequeue mengambil data terdepan dan mengurangi jumlah elemen. Fungsi printInfo menampilkan isi queue sesuai urutan antrian beserta posisi head dan tail. Secara keseluruhan, implementasi ini lebih rapi dan stabil serta tetap menerapkan konsep FIFO (First In First Out).

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

> ![Screenshot bagian x](c3.png)

penjelasan kode

Program main.cpp ini digunakan untuk menguji ADT circular queue dengan variabel count. Dari hasil output terlihat bahwa queue pada awalnya kosong dengan nilai head dan tail -1. Saat dilakukan operasi enqueue, data masuk ke dalam queue secara berurutan dan posisi tail berpindah sesuai mekanisme melingkar, sementara jumlah elemen dicatat oleh count. Ketika dequeue dijalankan, elemen paling depan dihapus, head berpindah ke posisi berikutnya, dan count berkurang. Proses ini terus berlangsung hingga seluruh data keluar dari queue dan akhirnya queue kembali kosong. Output tersebut menunjukkan bahwa pengelolaan queue berjalan dengan benar dan tetap mengikuti konsep FIFO (First In First Out).


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
