#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double rupiah;
    double kurs;
    string mataUang;
    int pilihanKonverensi;

    cout << left;
    cout << setw(30) << "masukkan jumlah rupiah: ";
    cin >> rupiah;
    cout << setw(30) << "=== Pilihan Konversi (18 September 2026)===" << endl;
    cout << setw(30) << "1. Dolar" << "Rp. 17747" << endl;
    cout << setw(30) << "2. Euro" << "Rp. 20368.91" << endl;
    cout << setw(30) << "3. Yen" << "Rp. 113.01" << endl;
    cout << setw(30) << "4. Rupee" << "Rp. 185.31" << endl;
    cout << setw(30) << "5. Rial" << "Rp. 4779" << endl;
    cout << setw(30) << "6. Won" << "Rp. 12.84" << endl;
    cout << setw(30) << "7. Ringgit" << "Rp. 4346.99" << endl;
    cout << setw(30) << "8. Bath" << "Rp. 533.55" << endl;
    cout << endl;
    cout << setw(30) << "Masukkan pilihan Tujuan Konverensi" << ": ";
    cin >> pilihanKonverensi;
    switch (pilihanKonverensi)
    {
        case 1:
        mataUang = "Dolar";
        kurs = 17747;
        break;
        case 2:
        mataUang = "Euro";
        kurs = 20368.91;
        break;
        case 3:
        mataUang = "Yen";
        kurs = 113.01;
        break;
        case 4:
        mataUang = "Rupee";
        kurs = 185.31;
        break;
        case 5:
        mataUang = "Rial";
        kurs = 4779;
        break;
        case 6:
        mataUang = "Won";
        kurs = 12.84;
        break;
        case 7:
        mataUang = "Ringgit";
        kurs = 4346.99;
        break;
        case 8:
        mataUang = "Bath";
        kurs = 533.55;
        break;
        
        default:
        cout << "Input Tidak Valid!!";
        return 0;
    }

    cout << "==========================" << endl << left;
    cout << setw(15) << "Jumlah Rupiah " << ": Rp " << rupiah << endl;
    cout << setw(15) << "Jumlah "+mataUang << ": " << fixed << setprecision(2) << rupiah/kurs<< endl;
}