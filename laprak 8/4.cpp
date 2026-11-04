#include <iostream>
#include <iomanip>
using namespace std;

double hitungDiskonRekursif(double harga) {
    if (harga > 500000) {
        return 0.10 * harga; 
    } else if (harga == 500000) {
        return 0.05 * harga;
    } else {
        return 0.0;          
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah barang: ";
    cin >> n;

    if (n <= 0) return 0;

    double* hargaBarang = new double[n];

    for (int i = 0; i < n; i++) {
        cout << "Masukkan harga barang " << i + 1 << ": ";
        cin >> hargaBarang[i];
    }

    cout << "\nOutput:\n";
    double totalHargaSetelahDiskon = 0;

    for (int i = 0; i < n; i++) {
        double diskon = hitungDiskonRekursif(hargaBarang[i]);
        double hargaAkhir = hargaBarang[i] - diskon;
        totalHargaSetelahDiskon += hargaAkhir;

        cout << "Diskon untuk barang " << i + 1 << ": ";
        if (diskon > 0) {
            if (hargaBarang[i] > 500000) cout << "10%\n";
            else cout << "5%\n";
        } else {
            cout << "Tidak ada diskon\n";
        }
    }

    cout << "Total harga setelah diskon: " << fixed << setprecision(0) << totalHargaSetelahDiskon << endl;

    delete[] hargaBarang;

    return 0;
}