# <h1 align="center">Laporan Praktikum Modul 1 <br>  CODE BLOCKS IDE & PENGENALAN BAHASA C++</h1>
<p align="center">elfan endriyanto - 103112430040</p>

## Dasar Teori

Bahasa pemrograman C++ adalah salah satu bahasa tingkat tinggi yang banyak dimanfaatkan baik di lingkungan pendidikan maupun industri. Pada umumnya, susunan program C++ diawali dengan header file seperti #include, yang berfungsi untuk mendukung proses input dan output standar. Menurut pendapat Indahyati dan Rahmawati (2020), C++ menjadi dasar penting dalam memahami konsep algoritma serta pemrograman, terutama karena struktur sintaksnya relatif sederhana dan mudah dipahami oleh pemula.



## Guided

### soal 1

aku mengerjakan perulangan

## Unguided

### Soal 1

```go
#include <iostream>
using namespace std;

int main() {
    int matriks[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int transpose[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpose[j][i] = matriks[i][j];
        }
    }

    cout << "Matriks Awal:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatriks Hasil Transpose:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


```

> Output
> ![Screenshot bagian x](2_1.png)

Pada soal Unguided 1, program yang dibuat tergolong mudah. Saya diminta mendeklarasikan dua buah variabel dengan tipe data float untuk menampung nilai masukan dari pengguna. Nilai tersebut kemudian diproses menggunakan operasi aritmatika dasar. Selain itu, saya menambahkan aturan sederhana berupa pengecekan pada bagian pembagian, karena tidak mungkin sebuah bilangan dibagi dengan nol.

### Soal 2

```go
#include <iostream>
using namespace std;

void kuadratkan(int &n) {
    n = n * n;
}

int main() {
    int nilai = 5; 

    cout << "Nilai awal: " << nilai << endl;

    kuadratkan(nilai);

    cout << "hasil yang di kuadratkan: " << nilai << endl;

    return 0;
}


```

> Output
> ![Screenshot bagian x](2_1.png)

penjelasan kode

Program pada soal Unguided 2 terasa lebih menantang dibanding sebelumnya. Di dalam program, saya membuat sebuah fungsi bernama sebutAngka(int n) yang bertugas memproses angka sesuai dengan aturan tertentu. Apabila input bernilai 0, maka fungsi akan mengembalikan kata “nol”, sedangkan jika bernilai 100 hasilnya adalah “seratus”. Untuk angka kurang dari 10, program langsung mengambil kata yang sesuai dari array satuan. Khusus untuk rentang 10–19, digunakan aturan khusus, misalnya 10 menjadi “sepuluh”, 11 menjadi “sebelas”, sementara 12 hingga 19 akan dikonversi menjadi bentuk [satuan] belas. Sementara itu, angka 20 sampai 99 dibentuk dengan menuliskan nilai puluhannya, seperti “dua puluh” atau “tiga puluh”, lalu ditambahkan kata satuan jika angkanya tidak genap puluhan.

## Referensi

1. https://en.wikipedia.org/wiki/Data_structure (diakses blablabla)

