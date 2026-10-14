#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int panjang;
    int lebar;
    int tinggi;

    cout << "masukkan panjang : ";
    cin >> panjang;
    cout << "masukkan lebar   : ";
    cin >> lebar;
    cout << "masukkan tinggi  : ";
    cin >> tinggi;

    cout << "==================" << endl;
    cout << left;
    cout << setw(20) << "panjang" << setw(20) << "lebar" << setw(20) << "tinggi" << setw(20) << "volume" << setw(20) << "Luas Permukaan" << endl;
    cout << setw(20) << panjang
         << setw(20) << lebar
         << setw(20) << tinggi
         << setw(20) << panjang * lebar * tinggi
         << setw(20) << 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi) << endl;
}