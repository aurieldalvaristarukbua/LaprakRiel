#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int hargaBarang;
    float diskon;
    cout << "masukkan harga barang : ";
    cin >> hargaBarang;
    cout << "masukkan diskon       : ";
    cin >> diskon;

    cout << "=========================" << endl << left;
    cout << setw(15) << "Harga awal " << ": Rp "  << hargaBarang << endl;
    cout << setw(15) << "Diskon " << ": " << diskon << "%" << endl;
    cout << setw(15) << "Harga akhir " << ": " << fixed << setprecision(2) << hargaBarang - (hargaBarang*diskon/100)<< endl;
}