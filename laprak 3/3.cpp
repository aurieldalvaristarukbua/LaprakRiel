#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    float panjang; // atau sisi atau jari-jari
    float lebar;
    float tinggi;
    int pilihanBangunRuang;

    cout << left;
    cout << setw(30) << "=== Pilihan Bangun Ruang ===" << endl;
    cout << setw(30) << "1. balok" << endl;
    cout << setw(30) << "2. tabung" << endl;
    cout << setw(30) << "3. kubus" << endl;
    cout << setw(30) << "4. kerucut" << endl;
    cout << endl;
    cout << setw(30) << "Masukkan pilihan Bangun Ruang" << ": ";
    cin >> pilihanBangunRuang;
    switch (pilihanBangunRuang)
    {
    case 1: //balok
        cout << setw(20) << "masukkan panjang" << ": ";
        cin >> panjang;
        cout << setw(20) << "masukkan lebar" << ": ";
        cin >> lebar;
        cout << setw(20) << "masukkan tinggi" << ": ";
        cin >> tinggi;

        cout << "============================================" << endl;
        cout << setw(20) << "panjang" << setw(20) << "lebar" << setw(20) << "tinggi" << setw(20) << "volume" << setw(20) << "Luas Permukaan" << endl;
        cout << setw(20) << panjang << setw(20) << lebar << setw(20) << tinggi << setw(20) << panjang * lebar * tinggi << setw(20) << 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi) << endl;
        break;
    case 2://tabung
        cout << setw(20) << "masukkan jari-jari" << ": ";
        cin >> panjang;
        cout << setw(20) << "masukkan tinggi" << ": ";
        cin >> tinggi;

        cout << "============================================" << endl;
        cout << setw(20) << "jari-jari" << setw(20) << "tinggi" << setw(20) << "volume" << setw(20) << "Luas Permukaan" << endl;
        cout << setw(20) << panjang << setw(20) << tinggi << setw(20)  << fixed << setprecision(2) << panjang * panjang * 22/7 * tinggi << setw(20)  << fixed << setprecision(2) << panjang * 2*22/7 * (panjang+tinggi) << endl;
        break;
    case 3://kubus
        cout << setw(20) << "masukkan panjang sisi" << ": ";
        cin >> panjang;

        cout << "============================================" << endl;
        cout << setw(20) << "panjang sisi" << "volume" << setw(20) << "Luas Permukaan" << endl;
        cout << setw(20) << panjang << setw(20) << panjang * panjang*panjang << setw(20) << 6*panjang*panjang << endl;
        break;
    case 4://kerucut
        cout << setw(20) << "masukkan jari-jari" << ": ";
        cin >> panjang;
        cout << setw(20) << "masukkan tinggi" << ": ";
        cin >> tinggi;

        cout << "============================================" << endl;
        cout << left;
        cout << setw(20) << "jari-jari" << setw(20) << "tinggi" << setw(20) << "volume" << setw(20) << "Luas Permukaan" << endl;
        cout << setw(20) << panjang << setw(20) << tinggi << setw(20)  << fixed << setprecision(2) << panjang*panjang * 22/7 * tinggi/3 << setw(20)  << fixed << setprecision(2) << panjang *22/7 *  (panjang+sqrt((panjang*panjang)+(tinggi*tinggi))) << endl;
        break;

    default:
        cout << "Input Tidak Valid!!";
        return 0;
    }
}