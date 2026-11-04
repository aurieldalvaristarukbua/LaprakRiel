#include <iostream>
using namespace std;

double hitungTotalNilaiRekursif(int* arr, int n) {
    if (n <= 0) return 0;
    return arr[n - 1] + hitungTotalNilaiRekursif(arr, n - 1);
}

int main() {
    int n;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    if (n <= 0) {
        cout << "Jumlah mahasiswa tidak valid atau 0.\n";
        return 0;
    }

    int* nilai = new int[n];

    cout << "Masukkan nilai mahasiswa:\n";
    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << ": ";
        cin >> nilai[i];
    }

    int terbesar = nilai[0];
    int terkecil = nilai[0];
    for (int i = 1; i < n; i++) {
        if (nilai[i] > terbesar) terbesar = nilai[i];
        if (nilai[i] < terkecil) terkecil = nilai[i];
    }

    double total = hitungTotalNilaiRekursif(nilai, n);
    double rataRata = total / n;

    cout << "\nOutput:\n";
    cout << "Nilai terbesar: " << terbesar << endl;
    cout << "Nilai terkecil: " << terkecil << endl;
    cout << "Rata-rata nilai: " << rataRata << endl;

    delete[] nilai;

    return 0;
}