#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float height;
    float weight;
    float bmi;

    cout << "masukkan tinggi badan (cm): ";
    cin >> height;
    cout << "masukkan berat badan  (kg): ";
    cin >> weight;

    bmi = weight / ((height / 100) * (height / 100));
    cout << "==========================" << endl << left;
    cout << setw(20) << "BMI " << ": " << fixed << setprecision(2) << bmi << endl;
    if (bmi >= 18.5 && bmi <= 24.9)
        cout << setw(20) << "Status Badan Ideal " << ": Ya" << endl;
    else
        cout << setw(20) << "Status Badan Ideal " << ": Tidak" << endl;
}