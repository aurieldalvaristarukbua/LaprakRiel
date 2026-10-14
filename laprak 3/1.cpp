#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string namaKaryawan;
    string namaPosisi;
    int jumlahJamkerja;
    int tarifPerJam;
    int posisiKaryawan;

    cout << left;
    cout << setw(30) << "Masukkan nama karyawan" << ": ";
    cin >> namaKaryawan;
    cout << setw(30) << "Masukkan jumlah jam kerja" << ": ";
    cin >> jumlahJamkerja;
    cout << setw(30) << "=== Pilihan posisi ===" << endl;
    cout << setw(30) << "1. magang" << endl;
    cout << setw(30) << "2. staf junior" << endl;
    cout << setw(30) << "3. staf senior" << endl;
    cout << setw(30) << "4. team leader" << endl;
    cout << setw(30) << "5. kepala departemen" << endl;
    cout << endl;
    cout << setw(30) << "Masukkan posisi karyawan" << ": ";
    cin >> posisiKaryawan;
    switch (posisiKaryawan)
    {
    case 1:
        namaPosisi = "magang";
        tarifPerJam = 25000;
        break;
    case 2:
        namaPosisi = "staf junior";
        tarifPerJam = 35000;
        break;
    case 3:
        namaPosisi = "staf senior";
        tarifPerJam = 50000;
        break;
    case 4:
        namaPosisi = "team leader";
        tarifPerJam = 65000;
        break;
    case 5:
        namaPosisi = "kepala departemen";
        tarifPerJam = 75000;
        break;

    default:
        cout << "Input Tidak Valid!!";
        return 0;
    }

    cout << "=========================================================================================================================\n";
    cout << setw(20) << "Nama karyawan" << setw(20) << "Jumlah jam kerja" << setw(20) << "Posisi" << setw(20) << "Tarif per jam" << setw(20) << "Total gaji" << endl;
    cout << setw(20) << namaKaryawan << setw(20) << jumlahJamkerja << setw(20) << namaPosisi << setw(20) << tarifPerJam << setw(20) << jumlahJamkerja * tarifPerJam << endl;

    return 0;
}