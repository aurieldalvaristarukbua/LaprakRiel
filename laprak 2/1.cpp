#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string namaKaryawan;
    int jumlahJamkerja;
    int tarifPerJam;

    cout << left; 
    cout << setw(30) << "Masukkan nama karyawan" << ": ";
    cin >> namaKaryawan;
    cout << setw(30) << "Masukkan jumlah jam kerja" << ": ";
    cin >> jumlahJamkerja;
    cout << setw(30) << "Masukkan tarif per Jam" << ": ";
    cin >> tarifPerJam;

    cout << "=========================================================\n";
    cout << setw(20) << "Nama karyawan" << setw(20) << "Jumlah jam kerja"<< setw(20) << "Tarif per jam"<< setw(20) << "Total gaji" << endl; 
    cout << setw(20) << namaKaryawan << setw(20) << jumlahJamkerja<< setw(20) << tarifPerJam<< setw(20) << jumlahJamkerja * tarifPerJam << endl; 

    return 0;
}