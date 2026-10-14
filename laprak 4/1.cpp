#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int apakahLanjut = 1;
    int jumlahBarang;
    float masukanSaatIni;
    float totalHarga;
    float totalHargaSetelahDiskon;
    float potonganDiskon;

    do
    {
        totalHarga = 0;
        totalHargaSetelahDiskon = 0;
        potonganDiskon = 0;

        cout << "Masukkan jumlah barang : ";
        cin >> jumlahBarang;
        for (int i = 1; i <= jumlahBarang; i++)
        {
            cout << "Masukkan harga barang ke-" << i << " : Rp ";
            cin >> masukanSaatIni;
            totalHarga += masukanSaatIni;
        }

        if (totalHarga > 500000)
        {
            totalHargaSetelahDiskon = totalHarga * 90 / 100;
            potonganDiskon = totalHarga * 10 / 100;
        }
        else if (totalHarga <= 500000 && totalHarga >= 250000)
        {
            totalHargaSetelahDiskon = totalHarga * 95 / 100;
            potonganDiskon = totalHarga * 5 / 100;
        }

        cout << endl << fixed << setprecision(2);
        cout << "Total Harga                : Rp " << totalHarga << endl;
        cout << "Diskon                     : Rp " << potonganDiskon << endl;
        cout << "Total Harga Setelah Diskon : Rp " << totalHargaSetelahDiskon << endl;

        cout << endl;
        cout << "Ingin menambah belanjaan lagi?(1.iya,selain itu tidak) : ";
        cin >> apakahLanjut;
        cout << endl;
    } while (apakahLanjut == 1);
}