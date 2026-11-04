#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Produk {
    string nama;
    double harga;
    int terjual;
};

int main() {
    int n;
    cout << "Masukkan jumlah produk: ";
    cin >> n;

    if (n <= 0) {
        cout << "Jumlah produk 0 atau tidak valid.\n";
        return 0;
    }

    Produk* daftarProduk = new Produk[n];

    for (int i = 0; i < n; i++) {
        cout << "Masukkan data produk " << i + 1 << " (Nama Harga Terjual):\n";
        cout << "Nama   : "; cin >> daftarProduk[i].nama;
        cout << "Harga  : "; cin >> daftarProduk[i].harga;
        cout << "Terjual: "; cin >> daftarProduk[i].terjual;
    }

    double totalPendapatan = 0;
    double tertinggi = -1;
    string produkTertinggi = "";

    for (int i = 0; i < n; i++) {
        double pendapatanProduk = daftarProduk[i].harga * daftarProduk[i].terjual;
        totalPendapatan += pendapatanProduk;

        if (pendapatanProduk > tertinggi) {
            tertinggi = pendapatanProduk;
            produkTertinggi = daftarProduk[i].nama;
        }
    }

    double rataRata = totalPendapatan / n;

    cout << "\nOutput:\n";
    cout << "Total pendapatan: Rp " << fixed << setprecision(0) << totalPendapatan << endl;
    cout << "Rata-rata pendapatan per produk: Rp " << rataRata << endl;
    cout << "Produk dengan pendapatan tertinggi: \"" << produkTertinggi << "\" (Rp " << tertinggi << ")\n";

    delete[] daftarProduk;

    return 0;
}