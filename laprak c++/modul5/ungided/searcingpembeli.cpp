#include <iostream>
using namespace std;

struct Node {
    string nama;
    string pesanan;
    Node* next;
};
Node* head = nullptr;

Node* createnode(string nama, string pesanan) {
    Node* newnode = new Node();
    newnode->nama = nama;
    newnode->pesanan = pesanan;
    newnode->next = nullptr;
    return newnode;
}

void tambahantrian(string nama, string pesanan) {
    Node* newnode = createnode(nama, pesanan);
    if (head == nullptr) {
        head = newnode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    cout << "pembeli " << nama << " pesanan \"" << pesanan << "\" berhasil ditambahkan ke antrian.\n";
}

void layaniantrian() {
    if (head == nullptr) {
        cout << "tidak ada antrian! tidak ada yang bisa dilayani.\n";
        return;
    }

    Node* temp = head;
    cout << "melayani pembeli: " << temp->nama << " (Pesanan: " << temp->pesanan << ")\n";
    head = head->next;
    delete temp;
}

void tampilkanantrian() {
    if (head == nullptr) {
        cout << "tidak ada antrian!!\n";
        return;
    }

    Node* temp = head;
    cout << "\n=== DAFTAR ANTRIAN PEMBELI ===\n";
    while (temp != nullptr) {
        cout << "nama: " << temp->nama << " | pesanan: " << temp->pesanan << endl;
        temp = temp->next;
    }
    cout << "===============================\n";
}

void cariantrian(string namadicari) {
    if (head == nullptr) {
        cout << "tidak ada antrian!!\n";
        return;
    }

    Node* temp = head;
    bool ditemukan = false;
    int posisi = 1;

    while (temp != nullptr) {
        if (temp->nama == namadicari) {
            cout << "Pembeli \"" << namadicari << "\" ada pada antrian ke-" 
                 << posisi << " dengan pesanan \"" << temp->pesanan << "\".\n";
            ditemukan = true;
            break; 
        }
        temp = temp->next;
        posisi++;
    }

    if (!ditemukan) {
        cout << "Pembeli \"" << namadicari << "\" tidak ada dalam antrian.\n";
    }
}

int main() {
    int pilihan;
    string nama, pesanan;

    do {
        cout << "\n=== MENU ANTRIAN PEMBELI ===\n";
        cout << "1. tambah antrian\n";
        cout << "2. layani antrian\n";
        cout << "3. tampilkan antrian\n";
        cout << "4. cari nama pembeli\n";
        cout << "0. keluar\n";
        cout << "pilih: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "masukkan nama pembeli : ";
                cin >> nama;
                cout << "masukkan pesanan : ";
                cin >> pesanan;
                tambahantrian(nama, pesanan);
                break;
            case 2:
                layaniantrian();
                break;
            case 3:
                tampilkanantrian();
                break;
            case 4:
                cout << "masukkan nama pembeli yang mau dicari: ";
                cin >> nama;
                cariantrian(nama);
                break;
            case 0:
                cout << "program selesai.\n";
                break;
            default:
                cout << "pilihan tidak valid!\n";
        }
    } while (pilihan != 0);

    return 0;
}
