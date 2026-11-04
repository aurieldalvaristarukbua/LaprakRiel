#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Proyek {
    string nama;
    double anggaran;
    int pekerja;
};

void tampilkanProyek(Proyek* arr, int n) {
    if (n == 0) {
        cout << "(Tidak ada proyek aktif)\n";
        return;
    }
    for (int i = 0; i < n; i++) {
        cout << "Proyek " << i + 1 << ": \"" << arr[i].nama 
             << "\", Anggaran: Rp " << fixed << setprecision(0) << arr[i].anggaran 
             << ", Pekerja: " << arr[i].pekerja << endl;
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah proyek awal: ";
    cin >> n;
    if (n < 0) n = 0;

    Proyek* daftarProyek = new Proyek[n];

    for (int i = 0; i < n; i++) {
        cout << "Data proyek " << i + 1 << " (Nama Anggaran Pekerja):\n";
        cout << "Nama    : "; cin >> daftarProyek[i].nama;
        cout << "Anggaran: "; cin >> daftarProyek[i].anggaran;
        cout << "Pekerja : "; cin >> daftarProyek[i].pekerja;
    }

    cout << "\n--- Operasi: Tambah Proyek Baru ---\n";
    Proyek proyekBaru;
    cout << "Nama proyek baru: "; cin >> proyekBaru.nama;
    cout << "Anggaran        : "; cin >> proyekBaru.anggaran;
    cout << "Jumlah pekerja  : "; cin >> proyekBaru.pekerja;

    Proyek* tempTambah = new Proyek[n + 1];
    for (int i = 0; i < n; i++) {
        tempTambah[i] = daftarProyek[i];
    }
    tempTambah[n] = proyekBaru;

    delete[] daftarProyek;   
    daftarProyek = tempTambah; 
    n++;                    

    cout << "\nDaftar proyek setelah penambahan:\n";
    tampilkanProyek(daftarProyek, n);

    cout << "\n--- Operasi: Hapus Proyek tertentu ---\n";
    int nomorHapus;
    cout << "Masukkan nomor proyek yang ingin dihapus (1 s/d " << n << "): ";
    cin >> nomorHapus;
    int targetIdx = nomorHapus - 1;

    if (targetIdx >= 0 && targetIdx < n) {
        Proyek* tempHapus = new Proyek[n - 1];
        int k = 0;
        for (int i = 0; i < n; i++) {
            if (i == targetIdx) continue; 
            tempHapus[k++] = daftarProyek[i]; 
        }
        delete[] daftarProyek;   
        daftarProyek = tempHapus; 
        n--;                      
    } else {
        cout << "Indeks proyek tidak valid!\n";
    }

    cout << "\nDaftar proyek setelah penghapusan:\n";
    tampilkanProyek(daftarProyek, n);

    if (n > 0) {
        double totalAnggaran = 0;
        int totalPekerja = 0;
        double anggaranTerbesar = -1;
        string proyekTerbesar = "";

        for (int i = 0; i < n; i++) {
            totalAnggaran += daftarProyek[i].anggaran;
            totalPekerja += daftarProyek[i].pekerja;

            if (daftarProyek[i].anggaran > anggaranTerbesar) {
                anggaranTerbesar = daftarProyek[i].anggaran;
                proyekTerbesar = daftarProyek[i].nama;
            }
        }

        double rataPekerja = (double)totalPekerja / n;

        cout << "\nOutput Akhir Analisis Proyek:\n";
        cout << "Total anggaran seluruh proyek: Rp " << fixed << setprecision(0) << totalAnggaran << endl;
        cout << "Rata-rata jumlah pekerja per proyek: " << setprecision(2) << rataPekerja << endl;
        cout << "Proyek dengan anggaran terbesar: \"" << proyekTerbesar << "\" (Rp " << setprecision(0) << anggaranTerbesar << ")\n";
    }

    delete[] daftarProyek;

    return 0;
}