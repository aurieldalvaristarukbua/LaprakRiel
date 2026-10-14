#include <iostream>
using namespace std;

int main()
{
    int apakahLanjut = 1;
    int masukanSaatIni;
    int totalKehadiran;
    float persentaseKehadiran;
    string statusKehadiran;

    do
    {
        totalKehadiran = 0;

        for (int i = 1; i <= 5; i++)
        {
            cout << "Apakah mahasiswa hadir di hari ke-" << i << "? (1 untuk hadir. selain itu untuk tidak hadir) : ";
            cin >> masukanSaatIni;
            if (masukanSaatIni == 1)
                totalKehadiran++;
        }

        persentaseKehadiran = (float)totalKehadiran / 5 * 100;

        if (persentaseKehadiran > 75)
            statusKehadiran = "Kehadiran Baik";
        else if (persentaseKehadiran <= 75 && persentaseKehadiran >= 50)
            statusKehadiran = "Kehadiran Cukup";
        else
            statusKehadiran = "Kehadiran Kurang";

        cout << endl;
        cout << "Persentase Kehadiran : " << persentaseKehadiran << "%" << endl;
        cout << "Status Kehadiran     : " << statusKehadiran << endl;

        cout << endl;
        cout << "Ingin mengecek kehadiran mahasiswa lain?(1.iya,selain itu tidak) : ";
        cin >> apakahLanjut;
        cout << endl;
    } while (apakahLanjut == 1);
}