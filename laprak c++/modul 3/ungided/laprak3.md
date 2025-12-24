
# <h1 align="center">Laporan Praktikum Modul 3 <br> ABSTRACT DATA TYPES (ADT) & SINGLY LINKED LIST (BAGIAN PERTAMA)</h1>
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
Singly linked list adalah bentuk paling sederhana dari linked list, di mana setiap node mengandung 2 anggota yaitu data dan next pointer yang menyimpan alamat node berikutnya. Setiap node dalam singly linked list terhubung melalui petunjuk berikutnya, dan penunjuk beriutnya dari node terakhir mengarah ke NULL, yang menandakan akhir dari linked list. Diagram berikut menggambarkan struktur singly linked list: <br>
![Diagram singly linked list]<img width="1104" height="316" alt="image" src="https://github.com/user-attachments/assets/eca17345-f076-4ef5-aec5-a0042be4f51c" />

## Guided

### soal mahasiswa.h

```go
#ifndef MAHASISWA_H
#define MAHASISWA_H

struct mahasiswa {
    float nilai1;
    float nilai2;
};

void inputMhs(mahasiswa &mhs);
float rata2(mahasiswa mhs);

#endif

```
penjelasan kodingan

Kode ini adalah **header file** yang mendefinisikan struktur **mahasiswa** dengan data NIM dan dua nilai, serta menyediakan deklarasi fungsi untuk input data mahasiswa dan menghitung nilai rata-ratanya.

### soal mahasiswa.cpp

```go
#include "mahasiswa.h"
#include <iostream>
using namespace std;

void inputMhs(mahasiswa &mhs)
{
    cout << "Masukkan nilai 1: ";
    cin >> mhs.nilai1;
    cout << "Masukkan nilai 2: ";
    cin >> mhs.nilai2;
}

float rata2(mahasiswa mhs)
{
    return (mhs.nilai1 + mhs.nilai2) / 2;
}

```
penjelasan kodingan

Program ini merupakan **implementasi fungsi** dari header `mahasiswa.h`, di mana fungsi `inputMhs` digunakan untuk memasukkan data mahasiswa (NIM dan nilai), sedangkan fungsi `rata2` digunakan untuk menghitung dan mengembalikan nilai rata-rata dari dua nilai mahasiswa tersebut.

### soal main.cpp

```go
#include <iostream>
#include "mahasiswa.h"
#include "mahasiswa.cpp"
using namespace std;

int main()
{
    mahasiswa mhs;
    inputMhs(mhs);
    cout << "rata - rata = " << rata2(mhs);
    return 0;
}

```
> Output

> <img width="282" height="77" alt="image" src="https://github.com/user-attachments/assets/47782f6d-98d7-4ebc-855d-c2fe1c91ce4e" />

penjelasan kodingan

Program ini menggabungkan **header** dan **file implementasi** untuk menginput data mahasiswa, lalu menghitung serta menampilkan **nilai rata-rata** dari dua nilai yang dimasukkan, sehingga diperoleh hasil 85.

## Unguided

### Soal 1

```go
#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilaiAkhir;
};

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}

void inputMahasiswa(Mahasiswa& mhs) {
    cout << "Nama   : ";
    cin >> mhs.nama;
    cout << "NIM    : ";
    cin >> mhs.nim;
    cout << "Nilai UTS   : ";
    cin >> mhs.uts;
    cout << "Nilai UAS   : ";
    cin >> mhs.uas;
    cout << "Nilai Tugas : ";
    cin >> mhs.tugas;

    mhs.nilaiAkhir = hitungNilaiAkhir(mhs.uts, mhs.uas, mhs.tugas);
}

void tampilMahasiswa(Mahasiswa mhs[], int n) {
    cout << "\n=== DATA MAHASISWA ===\n";
    for (int i = 0; i < n; i++) {
        cout << "Nama: " << mhs[i].nama;
        cout << " | NIM: " << mhs[i].nim;
        cout << " | UTS: " << mhs[i].uts;
        cout << " | UAS: " << mhs[i].uas;
        cout << " | Tugas: " << mhs[i].tugas;
        cout << " | Nilai Akhir: " << mhs[i].nilaiAkhir << endl;
    }
}

int main() {
    Mahasiswa daftarMhs[10];
    int n;

    cout << "Masukkan jumlah mahasiswa 1-10: ";
    cin >> n;

    if (n > 10) {
        cout << "kelewat batass!" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << "\nData mahasiswa ke-" << i + 1 << endl;
        inputMahasiswa(daftarMhs[i]);
    }

    tampilMahasiswa(daftarMhs, n);

    return 0;
}


```

> Output

> ![Screenshot bagian x](L1.png)

penjelasan kode

Program ini digunakan untuk menyimpan dan menampilkan data maksimal 10 mahasiswa. Setiap mahasiswa punya data berupa nama, NIM, nilai UTS, UAS, tugas, dan nilai akhir. Nilai akhir dihitung otomatis lewat fungsi `hitungNilaiAkhir()` dengan rumus 0.3*UTS + 0.4*UAS + 0.3*Tugas. Program meminta pengguna untuk memasukkan jumlah mahasiswa, lalu mengisi data masing-masing mahasiswa satu per satu menggunakan fungsi `inputMahasiswa()`. Setelah semua data dimasukkan, program menampilkan hasilnya lewat fungsi `tampilMahasiswa()`, yang memperlihatkan seluruh data mahasiswa beserta nilai akhirnya.

### Soal 2.1.pelajaran.h

```go
#ifndef PELAJARAN_H
#define PELAJARAN_H
#include <string>
using namespace std;

struct pelajaran {
    string namaMapel;
    string kodeMapel;
};

pelajaran create_pelajaran(string namaPel, string kodePel);
void tampil_pelajaran(pelajaran pel);

#endif


```
penjelasan kode

File **pelajaran.h** ini dipakai untuk bikin tipe data baru bernama `pelajaran` yang isinya ada nama mata pelajaran dan kode mata pelajaran. Di dalamnya juga ada dua fungsi, yaitu `create_pelajaran` buat ngisi data pelajaran baru, dan `tampil_pelajaran` buat nunjukin isi datanya. Bagian atas yang ada `#ifndef`, `#define`, dan `#endif` itu biar file ini nggak kebaca dua kali waktu dipanggil di program utama.

### Soal 2.2.pelajaran.cpp

```go
#include <iostream>
#include "pelajaran.h"
using namespace std;

pelajaran create_pelajaran(string namaPel, string kodePel) {
    pelajaran p;
    p.namaMapel = namaPel;
    p.kodeMapel = kodePel;
    return p;
}

void tampil_pelajaran(pelajaran pel) {
    cout << "nama pelajaran : " << pel.namaMapel << endl;
    cout << "nilai : " << pel.kodeMapel << endl;
}

```
penjelasan kode

Kode di atas berisi isi dari file **pelajaran.cpp**, yaitu implementasi dari fungsi yang sudah dideklarasikan di pelajaran.h. Fungsi `create_pelajaran` digunakan untuk membuat data pelajaran baru dengan mengisi nama pelajaran dan kodenya, lalu mengembalikannya dalam bentuk struct pelajaran. Sedangkan fungsi `tampil_pelajaran` digunakan untuk menampilkan data pelajaran tersebut ke layar, yaitu nama pelajaran dan kode atau nilainya. Jadi intinya, file ini berfungsi untuk menjalankan logika dari ADT pelajaran yang sudah dibuat di file header.

# Soal 2.3.main.cpp

```go
#include <iostream>
#include "pelajaran.h"
using namespace std;

int main() {
    string namaPel = "Struktur Data";
    string kodePel = "STD";

    pelajaran pel = create_pelajaran(namaPel, kodePel);
    tampil_pelajaran(pel);

    return 0;
}

```

> Output

> ![Screenshot bagian x](L2.png)

penjelasan kode

Kode di atas adalah isi dari file main.cpp, yang berfungsi untuk mencoba atau menguji ADT pelajaran yang sudah dibuat. Di dalamnya, dibuat dua variabel string yaitu namaPel berisi “Struktur Data” dan kodePel berisi “STD”. Lalu, program memanggil fungsi create_pelajaran untuk membuat objek pel berdasarkan dua data tersebut, dan hasilnya ditampilkan ke layar dengan memanggil fungsi tampil_pelajaran. Jadi intinya, program ini menampilkan informasi pelajaran dengan nama “Struktur Data” dan kode “STD” menggunakan fungsi dari ADT yang telah dibuat sebelumnya.

# Soal 3

```go
#include <iostream>
using namespace std;

struct Matrix {
    int data[3][3];
};

void tampil(Matrix M) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << M.data[i][j] << " ";
        }
        cout << endl;
    }
}

void tukar_posisi(Matrix &A, Matrix &B, int baris, int kolom) {
    int temp = A.data[baris][kolom];
    A.data[baris][kolom] = B.data[baris][kolom];
    B.data[baris][kolom] = temp;
}

int main() {
    Matrix A = {{{1,2,3},{4,5,6},{7,8,9}}};
    Matrix B = {{{9,8,7},{6,5,4},{3,2,1}}};

    cout << "Matrix A sebelum ditukar:\n";
    tampil(A);
    cout << "\nMatrix B sebelum ditukar:\n";
    tampil(B);

    int baris = 0, kolom = 2;
    cout << "\nMenukar elemen di posisi [" << baris << "][" << kolom << "]...\n\n";

    tukar_posisi(A, B, baris, kolom);

    cout << "Matrix A setelah ditukar:\n";
    tampil(A);
    cout << "\nMatrix B setelah ditukar:\n";
    tampil(B);

    return 0;
}


```

> Output

> ![Screenshot bagian x](L3.png)

penjelasan kode

Program di atas membuat dan menampilkan dua buah **matriks (A dan B)** berukuran 3x3, lalu menukar salah satu elemen di posisi tertentu antara kedua matriks. Struktur `Matrix` digunakan untuk menyimpan data dalam bentuk array 3x3, sesuai konsep **ADT (Abstract Data Type)** agar data matriks lebih terorganisir. Fungsi `tampil` menampilkan isi matriks ke layar, sedangkan fungsi `tukar_posisi` menukar elemen pada baris dan kolom tertentu antara matriks A dan B. Dalam program utama, elemen di posisi `[0][2]` (baris pertama kolom ketiga) ditukar, kemudian hasil perubahan kedua matriks ditampilkan kembali ke layar.

## Referensi

1. _Hostinger_. https://www.hostinger.com/id/tutorial/bahasa-pemrograman-cpp. Diakses pada 03 Oktober 2025.
2. _Dicoding_. https://www.dicoding.com/blog/memahami-esensi-bahasa-pemrograman-c/. Diakses pada 03 Oktober 2025.
3. _Duniailkom_. https://www.duniailkom.com/tutorial-belajar-c-plus-plus-jenis-jenis-operator-aritmatika-bahasa-c-plus-plus/. Diakses pada 03 Oktober 2025.
4. _kodingakademi_. https://www.kodingakademi.id/function-c-panduan-lengkap/. Diakses pada 03 Oktober 2025.
5. _petanikode_ . https://www.petanikode.com/cpp-array/. Diakses pada 06 Oktober 2025.
6. _GeekForGeeks_. https://www.geeksforgeeks.org/cpp/cpp-linked-list/. Diakses pada 13 Oktober 2025.
