#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    /*Buat program yang menerima input nilai beberapa mata pelajaran (minimal 3 nilai) dan menghitung rata-rata nilai. Program
akan memberikan kategori prestasi sebagai berikut:

"Sangat Baik" jika rata-rata nilai lebih dari 85.

"Baik" jika rata-rata nilai antara 70 dan 85.

"Cukup" jika rata-rata nilai antara 50 dan 70.

"Perlu Peningkatan" jika rata-rata nilai kurang dari 50.*/
    int apakahLanjut = 1;
    int jumlahMataPelajaran;
    int totalNilai;
    int rataRata;

    int masukkanSaatIni;
    string kategoriNilai;

    do
    {
        totalNilai = 0;

        cout << "Masukkan jumlah mata pelajaran : ";
        cin >> jumlahMataPelajaran;
        if (jumlahMataPelajaran >= 3)

        {
            for (int i = 1; i <= jumlahMataPelajaran; i++)
            {
                cout << "Masukkan nilai mata pelajaran ke-" << i << " : ";
                cin >> masukkanSaatIni;
                totalNilai += masukkanSaatIni;
            }
            rataRata = totalNilai / jumlahMataPelajaran;
            if (rataRata > 85)
                kategoriNilai = "Sangat Baik";
            else if (rataRata <= 85 && rataRata >= 70)
                kategoriNilai = "Baik";
            else if (rataRata < 70 && rataRata >= 50)
                kategoriNilai = "Cukup";
            else
                kategoriNilai = "Perlu Peningkatan";

            cout << endl;
            cout << "Rata-rata nilai : " << rataRata << endl;
            cout << "Prestasi        : " << kategoriNilai << endl;
        }
        else
        {
            cout << "Jumlah mata pelajaran kurang dari 3!!!" << endl;
        }

        cout << endl << fixed << setprecision(2);
        cout << "Ingin menghitung nilai siswa lain?(1.iya,selain itu tidak) : ";
        cin >> apakahLanjut;
        cout << endl;
    } while (apakahLanjut == 1);
}