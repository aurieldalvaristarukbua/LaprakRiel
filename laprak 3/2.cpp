#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int hargaBarang;
    float diskon;
    int urutanBarang;
    string namaBarang;
    cout << left;
    cout << setw(30) << "=== Pilihan barang ===" << endl;
    cout << setw(30) << "1. Mie" << "Rp. 3500" << endl;
    cout << setw(30) << "2. Air Segalon" << "Rp. 6000" << endl;
    cout << setw(30) << "3. Gas RPG" << "Rp. 22000" << endl;
    cout << setw(30) << "4. Kopi 1 renteng" << "Rp. 12000" << endl;
    cout << setw(30) << "5. Benih Sawit" << "Rp. 350000" << endl;
    cout << endl;
    cout << setw(30) << "Masukkan pilihan Barang" << ": ";
    cin >> urutanBarang;
    switch (urutanBarang)
    {
        case 1:
        namaBarang = "Mie";
        hargaBarang = 3500;
        break;
        case 2:
        namaBarang = "Air Segalon";
        hargaBarang = 6000;
        break;
        case 3:
        namaBarang = "Gas RPG";
        hargaBarang = 22000;
        break;
        case 4:
        namaBarang = "Kopi 1 Renteng";
        hargaBarang = 12000;
        break;
        case 5:
        namaBarang = "Benih Sawit";
        hargaBarang = 350000;
        break;
        
        default:
        cout << "Input Tidak Valid!!";
        return 0;
    }
    cout << setw(30)<< "masukkan diskon (%)" << ": ";
    cin >> diskon;

    cout << "=========================" << endl << left;
    cout << setw(15) << "Nama Barang " << ": "  << namaBarang << endl;
    cout << setw(15) << "Harga awal " << ": Rp "  << hargaBarang << endl;
    cout << setw(15) << "Diskon " << ": " << diskon << "%" << endl;
    cout << setw(15) << "Harga akhir " << ": " << fixed << setprecision(2) << hargaBarang - (hargaBarang*diskon/100)<< endl;
}