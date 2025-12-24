


# <h1 align="center">Laporan Praktikum Modul 14 <br>GRAPH</h1>
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
![Diagram singly linked list]<img width="980" height="283" alt="image" src="https://github.com/user-attachments/assets/928c7e9e-9b65-4811-b2e2-145613f8cc50" />


**Doubly Linked List**<br>
Doubly Linked List adalah jenis linked list yang di mana setiap node mengandung 3 bagian: data, pointer ke node berikutnya, dan pointer ke node sebelumnya. Struktur ini memungkinkan penelusuran daftar ke arah depan dan belakang, berbeda dengan Singly Linked List yang hanya dapat ditelusuri ke arah depan.
![Diagram doubly linked list]<img width="1079" height="221" alt="image" src="https://github.com/user-attachments/assets/f12ce4c2-319b-4687-bc6f-6236b11da9a1" />


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
![Diagram B-tree] !<img width="861" height="379" alt="image" src="https://github.com/user-attachments/assets/847a0b54-7440-4f75-bb3b-e3d17b992a65" />


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

### 14. **Graph**

Graph adalah struktur data yang merupakan kombinasi dari node dan edge. Node/vertex menyimpan data atau entitas, sedangkan edge merupakan koneksi antara dua node.

**Jenis-Jenis Graph**

1. Directed dan Undirected Graph

   Pada sebuah graph, jika semua edge memiliki arah dari satu node ke node lainnya, maka graph tersebut disebut Directed Graph. Sebaliknya, jika edge hanya berupa garis sederhana tanpa arah antara dua node, maka graph tersebut disebut Undirected Graph.

2. Weighted Graph

   Weighted Graph adalah graph di mana setiap edge memiliki weight (nilai yang merepresentasikan hubungan antara dua node yang dihubungkan oleh edge tersebut).

3. Cyclic dan Acyclic Graph

   Pada Directed Graph, jika terdapat kemungkinan terbentuknya sebuah path di mana saat traversal kita kembali ke node yang sudah pernah dilewati, maka graph tersebut disebut Cyclic Graph. Sebaliknya, jika tidak ada kemungkinan seperti itu, maka graph tersebut disebut Acyclic Graph.

<br>

**Beberapa Istilah**

1. Degree (pada Undirected Graph)

   Degree menunjukkan berapa banyak edge yang terhubung ke sebuah node pada Undirected Graph.

2. InDegree dan OutDegree (Directed Graph)

   InDegree menunjukkan jumlah edge yang masuk ke sebuah node pada Directed Graph. Sementara itu, OutDegree menunjukkan jumlah edge yang keluar dari sebuah node pada Directed Graph.

<br>

**Graph Traversal**

1. **Breadth First Search (BFS)**

   Breadth First Search adalah algoritma pencarian yang digunakan pada struktur data tree atau graph untuk mencari node dengan properti tertentu. Algoritma ini dimulai dari root node dan, saat bergerak ke level yang lebih dalam, data node dicatat secara bertahap. Hal ini berbeda dengan algoritma DFS yang menelusuri hingga node terdalam terlebih dahulu, kemudian mencatat data node.

   Struktur data yang dibutuhkan untuk menjalankan algoritma BFS adalah:

- Queue (untuk menyimpan child node atau node yang terhubung dan masih perlu dieksplorasi)
- Unordered map atau vector (untuk mengecek apakah sebuah node sudah dikunjungi atau belum)

    <br>
    
    **Langkah-langkah algoritma**:

- Tandai node pertama yang diterima dalam function sebagai visited.
- Tambahkan node tersebut ke dalam queue.
- Ambil node terdepan dari queue dan simpan dalam sebuah variabel.
- Hapus node tersebut dari queue.
- Masukkan node tersebut ke dalam answer vector.
- Tambahkan neighbor node-nya ke dalam queue.

<br>

2. **Depth First Search (DFS)**
   First Search adalah algoritma pencarian atau traversal yang digunakan untuk menelusuri tree atau graph. Algoritma ini dimulai dari root node yang diberikan, lalu melakukan traversal atau pengecekan elemen dengan bergerak lebih dalam ke dalam tree atau graph.

   data yang dibutuhkan untuk menjalankan algoritma DFS adalah:
   Unordered map atau vector (untuk mengecek apakah sebuah node sudah dikunjungi atau belum)

   <br>

   **Langkah-langkah algoritma**:

- Tandai node pertama yang diterima sebagai visited.
- Tambahkan node tersebut ke dalam answer vector.
- Lakukan looping pada adjacency list; jika sebuah node belum visited, panggil function DFS secara rekursif.

## Guided

### soal 1
```go
#include <iostream>
#include "graph.h"
#include "graph.cpp"
using namespace std;

int main() {
    Graph G;
    CreateGraph(G);

    InsertNode(G, 'A');
    InsertNode(G, 'B');
    InsertNode(G, 'C');
    InsertNode(G, 'D');
    InsertNode(G, 'E');
    InsertNode(G, 'F');
    InsertNode(G, 'G');
    InsertNode(G, 'H');

    cout << "=== Graph sebelum koneksi ===" << endl;
    PrintInfoGraph(G);

    adrNode A = FindNode(G, 'A');
    adrNode B = FindNode(G, 'B');
    adrNode C = FindNode(G, 'C');
    adrNode D = FindNode(G, 'D');
    adrNode E = FindNode(G, 'E');
    adrNode F = FindNode(G, 'F');
    adrNode Gg = FindNode(G, 'G');
    adrNode H = FindNode(G, 'H');

    ConnectNode(A, B);
    ConnectNode(A, C);
    ConnectNode(B, D);
    ConnectNode(B, E);
    ConnectNode(C, F);
    ConnectNode(C, Gg);
    ConnectNode(D, H);
    ConnectNode(E, H);
    ConnectNode(F, H);
    ConnectNode(Gg, H);

    cout << "\n=== Graph setelah koneksi ===" << endl;
    PrintInfoGraph(G);

    cout << "\n=== DFS dari A ===" << endl;
    ResetVisited(G);
    PrintDFS(G, A);

    cout << "\n\n=== BFS dari A ===" << endl;
    ResetVisited(G);
    PrintBFS(G, A);

    cout << endl;
    return 0;
}

```
> Output

> <img width="537" height="560" alt="image" src="https://github.com/user-attachments/assets/9ca9d21a-1d67-4fe5-bfbd-726e2c612735" />

penjelasan kode

Program ini mengimplementasikan **graph tak berarah menggunakan adjacency list**, di mana setiap node (A–H) dapat terhubung ke beberapa node lain melalui edge. Awalnya, node dibuat tanpa koneksi sehingga setiap node menampilkan “tidak ada koneksi”. Setelah koneksi dibuat menggunakan fungsi `ConnectNode`, adjacency list tiap node menampilkan node-node yang terhubung, misalnya `A -> C, B`. Program juga mendemonstrasikan **DFS (Depth-First Search)** dan **BFS (Breadth-First Search)** mulai dari node A, di mana DFS menelusuri sedalam mungkin tiap cabang (`A C G H F E B D`) sedangkan BFS menelusuri per level dari akar (`A C B G F E D H`), menunjukkan urutan penelusuran berbeda sesuai strategi masing-masing algoritma.

## Unguided

### Soal 1,1 graph.h

```go
#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED

#define Nil NULL
#include <iostream>
#include <queue>
using namespace std;

typedef char infoGraph;
typedef struct ElmNode *adrNode;
typedef struct ElmEdge *adrEdge;

struct ElmEdge {
    adrNode Node;
    adrEdge Next;
};

struct ElmNode {
    infoGraph info;
    int visited;
    adrEdge firstEdge;
    adrNode Next;
};

struct Graph {
    adrNode first;
};

void CreateGraph(Graph &G);
void InsertNode(Graph &G, infoGraph X);
void ConnectNode(adrNode &N1, adrNode &N2);
void PrintInfoGraph(Graph G);
adrNode FindNode(Graph G, infoGraph X);
void ResetVisited(Graph &G);
void PrintDFS(Graph &G, adrNode N);
void PrintBFS(Graph &G, adrNode N);

#endif

```
penjelasan kode

Header graph.h ini mendefinisikan ADT Graph menggunakan representasi adjacency list. Graph terdiri dari kumpulan node (vertex) yang masing-masing menyimpan informasi bertipe karakter, penanda sudah dikunjungi (visited), serta daftar edge yang terhubung ke node lain. Edge direpresentasikan sebagai pointer ke node tujuan sehingga hubungan antar node bisa dibentuk secara fleksibel. Di dalam header ini juga disediakan operasi dasar seperti membuat graph, menambah node, menghubungkan dua node, mencari node tertentu, menampilkan isi graph, serta traversal menggunakan DFS dan BFS. Dengan struktur ini, graph dapat digunakan untuk merepresentasikan relasi atau jaringan antar data secara terstruktur dan mudah ditelusuri.

### Soal 1,2 graph.cpp

```go

#include <iostream>
#include "graph.h"

using namespace std;

void CreateGraph(Graph &G) {
    G.first = Nil;
}

void InsertNode(Graph &G, infoGraph X) {
    adrNode P = new ElmNode;
    P->info = X;
    P->visited = 0;
    P->firstEdge = Nil;
    P->Next = G.first;
    G.first = P;
}

void ConnectNode(adrNode &N1, adrNode &N2) {
    if (N1 != Nil && N2 != Nil) {
        adrEdge E1 = new ElmEdge;
        E1->Node = N2;
        E1->Next = N1->firstEdge;
        N1->firstEdge = E1;

        adrEdge E2 = new ElmEdge;
        E2->Node = N1;
        E2->Next = N2->firstEdge;
        N2->firstEdge = E2;
    }
}

void PrintInfoGraph(Graph G) {
    adrNode P = G.first;
    while (P != Nil) {
        cout << P->info << " -> ";
        adrEdge E = P->firstEdge;
        if (E == Nil) {
            cout << "(tidak ada koneksi)";
        }
        while (E != Nil) {
            cout << E->Node->info;
            if (E->Next != Nil) cout << ", ";
            E = E->Next;
        }
        cout << endl;
        P = P->Next;
    }
}

adrNode FindNode(Graph G, infoGraph X) {
    adrNode P = G.first;
    while (P != Nil) {
        if (P->info == X) return P;
        P = P->Next;
    }
    return Nil;
}

void ResetVisited(Graph &G) {
    adrNode P = G.first;
    while (P != Nil) {
        P->visited = 0;
        P = P->Next;
    }
}

void PrintDFS(Graph &G, adrNode N) {
    if (N == Nil) return;
    N->visited = 1;
    cout << N->info << " ";
    adrEdge E = N->firstEdge;
    while (E != Nil) {
        if (E->Node->visited == 0) {
            PrintDFS(G, E->Node);
        }
        E = E->Next;
    }
}

void PrintBFS(Graph &G, adrNode N) {
    if (N == Nil) return;
    queue<adrNode> Q;
    Q.push(N);
    while (!Q.empty()) {
        adrNode curr = Q.front();
        Q.pop();
        if (curr->visited == 0) {
            curr->visited = 1;
            cout << curr->info << " ";
            adrEdge E = curr->firstEdge;
            while (E != Nil) {
                if (E->Node->visited == 0) {
                    Q.push(E->Node);
                }
                E = E->Next;
            }
        }
    }
}

```
penjelasan kode

Kode graph.cpp ini merupakan implementasi ADT Graph dengan representasi adjacency list. Program diawali dengan pembuatan graph kosong melalui CreateGraph, lalu node ditambahkan menggunakan InsertNode yang menyimpan informasi, status kunjungan, serta daftar edge. Hubungan antar node dibentuk dengan ConnectNode, yang membuat koneksi dua arah (graph tak berarah) dengan menambahkan edge pada masing-masing node. Fungsi PrintInfoGraph digunakan untuk menampilkan setiap node beserta node-node yang terhubung dengannya. Selain itu, tersedia FindNode untuk mencari node tertentu dan ResetVisited untuk mengatur ulang status kunjungan. Traversal graph diimplementasikan melalui DFS dengan rekursi (PrintDFS) dan BFS menggunakan struktur queue (PrintBFS), sehingga graph dapat ditelusuri secara mendalam maupun melebar sesuai kebutuhan.

### Soal 1,3 main.cpp

```go
#include <iostream>
#include "graph.h"
#include "graph.cpp"
using namespace std;

int main() {
    Graph G;
    CreateGraph(G);

    InsertNode(G, 'A');
    InsertNode(G, 'B');
    InsertNode(G, 'C');
    InsertNode(G, 'D');
    InsertNode(G, 'E');
    InsertNode(G, 'F');
    InsertNode(G, 'G');
    InsertNode(G, 'H');

    cout << "=== Graph sebelum koneksi ===" << endl;
    PrintInfoGraph(G);

    adrNode A = FindNode(G, 'A');
    adrNode B = FindNode(G, 'B');
    adrNode C = FindNode(G, 'C');
    adrNode D = FindNode(G, 'D');
    adrNode E = FindNode(G, 'E');
    adrNode F = FindNode(G, 'F');
    adrNode Gg = FindNode(G, 'G');
    adrNode H = FindNode(G, 'H');

    ConnectNode(A, B);
    ConnectNode(A, C);
    ConnectNode(B, D);
    ConnectNode(B, E);
    ConnectNode(C, F);
    ConnectNode(C, Gg);
    ConnectNode(D, H);
    ConnectNode(E, H);
    ConnectNode(F, H);
    ConnectNode(Gg, H);

    cout << "\n=== Graph setelah koneksi ===" << endl;
    PrintInfoGraph(G);

    cout << "\n=== DFS dari A ===" << endl;
    ResetVisited(G);
    PrintDFS(G, A);

    cout << "\n\n=== BFS dari A ===" << endl;
    ResetVisited(G);
    PrintBFS(G, A);

    cout << endl;
    return 0;
}

```
> Output

> ![Screenshot bagian x](f1.png)

penjelasan kode

Program main ini menunjukkan cara penggunaan ADT Graph secara lengkap. Pertama, graph dibuat kosong lalu ditambahkan delapan node dari A sampai H. Pada kondisi awal, semua node belum saling terhubung sehingga saat ditampilkan, setiap node masih belum memiliki koneksi. Setelah itu, dilakukan penghubungan antar node menggunakan ConnectNode sehingga terbentuk struktur graph tak berarah dengan H sebagai simpul yang terhubung ke banyak node lain. Graph kemudian ditampilkan kembali untuk memperlihatkan daftar koneksi setiap node. Selanjutnya, program melakukan penelusuran graph dari node A menggunakan DFS, yang menelusuri node sedalam mungkin terlebih dahulu, lalu BFS, yang menelusuri node per level menggunakan queue. Perbedaan urutan hasil DFS dan BFS menunjukkan cara kerja kedua metode traversal tersebut dalam menjelajahi graph.

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
13. _Medium_. https://medium.com/@itsvinayyay/graphs-data-structure-in-c-ab7b4205f41a. Diakses Pada 20 Desember 2025.
