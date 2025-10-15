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
