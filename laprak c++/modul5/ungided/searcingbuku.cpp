#include <iostream>
using namespace std;

struct Node {
    string ISBN;
    string judul;
    string penulis;
    Node* next;
};
Node* head = nullptr;

Node* createnode(string ISBN, string judul, string penulis) {
    Node* newnode = new Node();
    newnode->ISBN = ISBN;
    newnode->judul = judul;
    newnode->penulis = penulis;
    newnode->next = nullptr;
    return newnode;
}

void tambahbuku(string judul, string penulis, string ISBN) {
    Node* newnode = createnode(ISBN, judul, penulis);
    if (head == nullptr) {
        head = newnode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    cout << "Buku " << judul << ", penulis " << penulis << ", nomor " << ISBN << " berhasil ditambahkan.\n";
}

void tampilkanbuku() {
    if (head == nullptr) {
        cout << "Daftar kosong.\n";
        return;
    }
    Node* temp = head;
    cout << "\n=== DAFTAR BUKU ===\n";
    while (temp != nullptr) {
        cout << "Judul  : " << temp->judul << endl;
        cout << "Penulis: " << temp->penulis << endl;
        cout << "ISBN   : " << temp->ISBN << endl;
        cout << "----------------------\n";
        temp = temp->next;
    }
}

void caribuku(string katakunci) {
    if (head == nullptr) {
        cout << "Daftar kosong.\n";
        return;
    }
    Node* temp = head;
    bool ditemukan = false;
    cout << "\nHasil buku yang di cari untuk \"" << katakunci << "\":\n";
    cout << "----------------------------------------\n";
    while (temp != nullptr) {
        if (temp->judul == katakunci || temp->penulis == katakunci || temp->ISBN == katakunci) {
            cout << "Judul  : " << temp->judul << endl;
            cout << "Penulis: " << temp->penulis << endl;
            cout << "ISBN   : " << temp->ISBN << endl;
            cout << "----------------------------------------\n";
            ditemukan = true;
        }
        temp = temp->next;
    }
    if (!ditemukan) {
        cout << "Tidak ada buku yang di cari dengan data \"" << katakunci << "\".\n";
    }
}

void hapusbuku(string ISBNhapus) {
    if (head == nullptr) {
        cout << "Daftar kosong.\n";
        return;
    }
    Node* temp = head;
    Node* prev = nullptr;
    bool dihapus = false;
    while (temp != nullptr) {
        if (temp->ISBN == ISBNhapus) {
            if (prev == nullptr) {
                head = temp->next;
            } else {
                prev->next = temp->next;
            }
            cout << "Buku \"" << temp->judul << "\" sudah terhapus.\n";
            delete temp;
            dihapus = true;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    if (!dihapus) {
        cout << "Buku dengan ISBN \"" << ISBNhapus << "\" tidak ditemukan.\n";
    }
}

int main() {
    int pilihan;
    string judul, penulis, ISBN, katakunci;

    do {
        cout << "\n=== MENU DATA BUKU ===\n";
        cout << "1. Tambah buku\n";
        cout << "2. Tampilkan semua buku\n";
        cout << "3. Cari buku (judul/penulis/ISBN)\n";
        cout << "4. Hapus buku dengan ISBN\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> pilihan;
        getline(cin, judul);

        switch (pilihan) {
            case 1:
                cout << "Masukkan judul buku   : ";
                getline(cin, judul);
                cout << "Masukkan penulis : ";
                getline(cin, penulis);
                cout << "Masukkan ISBN         : ";
                getline(cin, ISBN);
                tambahbuku(judul, penulis, ISBN);
                break;
            case 2:
                tampilkanbuku();
                break;
            case 3:
                cout << "Masukkan kata kunci (judul/penulis/ISBN): ";
                getline(cin, katakunci);
                caribuku(katakunci);
                break;
            case 4:
                cout << "Masukkan buku yang ingin di hapus ( dengan ISBN ): ";
                getline(cin, ISBN);
                hapusbuku(ISBN);
                break;
            case 0:
                cout << "Program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 0);

    return 0;
}
