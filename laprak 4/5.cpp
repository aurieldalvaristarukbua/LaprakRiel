#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int apakahLanjut = 1;
    int totalMakanan;
    int totalTransportasi;
    int totalHiburan;
    int totalLainlain;
    int totalKeseluruhan;

    int pengeluaranTertinggi;
    int masukanSaatIni;
    string kategoriPengeluaran;
    string kategoriPengeluaranTertinggi;

    do
    {
        totalMakanan = 0;
        totalTransportasi = 0;
        totalHiburan = 0;
        totalLainlain = 0;
        totalKeseluruhan = 0;
        pengeluaranTertinggi = 0;

        for (int i = 1; i <= 7; i++)
        {
            cout << "Masukkan kategori pengeluaran hari ke-" << i << " (Makanan, Transportasi, Hiburan, Lain-lain) : ";
            cin >> kategoriPengeluaran;
            cout << "Masukkan jumlah pengeluaran : ";
            cin >> masukanSaatIni;

            if (kategoriPengeluaran == "Makanan")
                totalMakanan += masukanSaatIni;
            else if (kategoriPengeluaran == "Transportasi")
                totalTransportasi += masukanSaatIni;
            else if (kategoriPengeluaran == "Hiburan")
                totalHiburan += masukanSaatIni;
            else
                totalLainlain += masukanSaatIni;

            totalKeseluruhan += masukanSaatIni;
        }
        cout << endl;
        cout << "Total pengeluaran Makanan         : Rp " << totalMakanan << endl;
        cout << "Total pengeluaran Transportasi    : Rp " << totalTransportasi << endl;
        cout << "Total pengeluaran Hiburan         : Rp " << totalHiburan << endl;
        cout << "Total pengeluaran Lain-lain       : Rp " << totalLainlain << endl;
        cout << "Total pengeluaran Selama Seminggu : Rp " << totalKeseluruhan << endl;

        pengeluaranTertinggi = totalMakanan;
        kategoriPengeluaranTertinggi = "Makanan";
        if (totalTransportasi > pengeluaranTertinggi)
        {
            pengeluaranTertinggi = totalTransportasi;
            kategoriPengeluaranTertinggi = "Transportasi";
        }
        if (totalHiburan > pengeluaranTertinggi)
        {
            pengeluaranTertinggi = totalHiburan;
            kategoriPengeluaranTertinggi = "Hiburan";
        }
        if (totalLainlain > pengeluaranTertinggi)
        {
            pengeluaranTertinggi = totalLainlain;
            kategoriPengeluaranTertinggi = "Lain-lain";
        }

        cout << "Pengeluaran terbesar : Rp. " << pengeluaranTertinggi << " pada kategori " << kategoriPengeluaranTertinggi << endl;

        cout << endl << fixed << setprecision(2);
        cout << "Ingin mencatat pengeluaran minggu lain?(1.iya,selain itu tidak) : ";
        cin >> apakahLanjut;
        cout << endl;
    } while (apakahLanjut == 1);
}