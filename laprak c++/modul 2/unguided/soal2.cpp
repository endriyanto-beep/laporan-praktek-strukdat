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
