#include <iostream>
#include <string>
using namespace std;

string sebutangka(int n) {
    string angkadasar[] = {"nol", "satu", "dua", "tiga", "empat",
                           "lima", "enam", "tujuh", "delapan", "sembilan"};

    if (n == 0) return "nol";
    if (n == 100) return "seratus";

    if (n < 10) {
        return angkadasar[n];
    } 
    else if (n < 20) {
        if (n == 10) return "sepuluh";
        if (n == 11) return "sebelas";
        return angkadasar[n % 10] + " belas";
    } 
    else {
        string hasil = angkadasar[n / 10] + " puluh";
        if (n % 10 != 0) {
            hasil += " " + angkadasar[n % 10];
        }
        return hasil;
    }
}

int main() {
    int angka;
    cout << "Masukkan angka bulat positif (0 - 100): ";
    cin >> angka;

   cout << angka << " : " << sebutangka(angka) << endl;

    return 0;
}
