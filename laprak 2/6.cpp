#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float suhu[5];
    float total = 0;

    for (int i = 0; i < size(suhu); i++)
    {
        cout << "masukkan Suhu ke-" << i+1 << " : ";
        cin >> suhu[i];
        total += suhu[i];
    }

    cout << "==========================" << endl << left;
    cout << setw(15) << "Rata-rata Suhu " << ": " << fixed << setprecision(1) << total/size(suhu) << endl;
}