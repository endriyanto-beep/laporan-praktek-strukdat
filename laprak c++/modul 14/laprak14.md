


# <h1 align="center">Laporan Praktikum Modul 14 <br>  CODE BLOCKS IDE & PENGENALAN BAHASA C++</h1>
<p align="center">elfan endriyanto - 103112430040</p>

## Dasar Teori

Bahasa pemrograman C++ adalah salah satu bahasa tingkat tinggi yang banyak dimanfaatkan baik di lingkungan pendidikan maupun industri. Pada umumnya, susunan program C++ diawali dengan header file seperti #include, yang berfungsi untuk mendukung proses input dan output standar. Menurut pendapat Indahyati dan Rahmawati (2020), C++ menjadi dasar penting dalam memahami konsep algoritma serta pemrograman, terutama karena struktur sintaksnya relatif sederhana dan mudah dipahami oleh pemula.



## Guided

### soal 1

aku mengerjakan perulangan

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

> ![Screenshot bagian x](e1.png)

penjelasan kode
Program main ini menunjukkan cara penggunaan ADT Graph secara lengkap. Pertama, graph dibuat kosong lalu ditambahkan delapan node dari A sampai H. Pada kondisi awal, semua node belum saling terhubung sehingga saat ditampilkan, setiap node masih belum memiliki koneksi. Setelah itu, dilakukan penghubungan antar node menggunakan ConnectNode sehingga terbentuk struktur graph tak berarah dengan H sebagai simpul yang terhubung ke banyak node lain. Graph kemudian ditampilkan kembali untuk memperlihatkan daftar koneksi setiap node. Selanjutnya, program melakukan penelusuran graph dari node A menggunakan DFS, yang menelusuri node sedalam mungkin terlebih dahulu, lalu BFS, yang menelusuri node per level menggunakan queue. Perbedaan urutan hasil DFS dan BFS menunjukkan cara kerja kedua metode traversal tersebut dalam menjelajahi graph.

## Referensi

1. https://en.wikipedia.org/wiki/Data_structure (diakses blablabla)
