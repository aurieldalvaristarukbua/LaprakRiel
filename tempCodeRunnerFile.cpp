#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

// Konstanta untuk turunan numerik (h mendekati 0)
const double h = 1e-7; 
const double EPSILON = 1e-5; // Batas toleransi error desimal

// ==========================================
// SOAL 1
// ==========================================
double f1(double x) { return pow(sin(x), 3) * cos(x); }
double F1(double x) { return 0.25 * pow(sin(x), 4); }

// ==========================================
// SOAL 2
// ==========================================
double f2(double x) { return x / sqrt(pow(x, 2) + 9); }
double F2(double x) { return sqrt(pow(x, 2) + 9); }

// ==========================================
// SOAL 3
// ==========================================
double f3(double x) { return x * sin(2 * x); }
double F3(double x) { return -(x / 2.0) * cos(2 * x) + 0.25 * sin(2 * x); }

// ==========================================
// SOAL 4 (Catatan: x harus > 0 karena ada fungsi ln/log)
// ==========================================
double f4(double x) { return x * log(x); }
double F4(double x) { return 0.5 * pow(x, 2) * log(x) - 0.25 * pow(x, 2); }

// Fungsi untuk menghitung turunan numerik F'(x)
double hitung_turunan(double (*F)(double), double x) {
    return (F(x + h) - F(x - h)) / (2.0 * h);
}

int main() {
    // Menggunakan sampel nilai x = 2.0 untuk pengujian numerik
    double x_sampel = 2.0; 

    // Pointer ke fungsi soal dan jawaban
    vector<double (*)(double)> daftar_soal = {f1, f2, f3, f4};
    vector<double (*)(double)> daftar_jawaban = {F1, F2, F3, F4};

    cout << "=========================================================" << endl;
    cout << "    VERIFIKASI OTOMATIS TUGAS 1-4 (METODE NUMERIK C++)   " << endl;
    cout << "=========================================================" << endl;
    cout << fixed << setprecision(6);
    cout << "Diuji pada titik x = " << x_sampel << "\n" << endl;

    for (int i = 0; i < 4; ++i) {
        // Hitung turunan dari fungsi jawaban kita: F'(x)
        double F_aksen = hitung_turunan(daftar_jawaban[i], x_sampel);
        
        // Hitung nilai dari fungsi soal asli: f(x)
        double f_asli = daftar_soal[i](x_sampel);
        
        // Hitung selisihnya: F'(x) - f(x)
        double selisih = F_aksen - f_asli;

        cout << "Nomor " << (i + 1) << ":" << endl;
        cout << "  -> Nilai F'(x) : " << F_aksen << endl;
        cout << "  -> Nilai f(x)  : " << f_asli << endl;
        cout << "  -> Hasil Cek   : " << abs(selisih) << endl;

        // Jika selisihnya sangat kecil mendekati 0, maka BENAR
        if (abs(selisih) < EPSILON) {
            cout << "  >> KESIMPULAN  : JAWABAN BENAR (Hasil Pengurangan ~ 0)" << endl;
        } else {
            cout << "  >> KESIMPULAN  : JAWABAN SALAH" << endl;
        }
        cout << "---------------------------------------------------------" << endl;
    }

    return 0;
}
