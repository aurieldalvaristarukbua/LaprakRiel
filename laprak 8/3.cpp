#include <iostream>
using namespace std;

void cetakMatriksRekursif(int** matriks, int baris, int kolom, int barisSekarang = 0) {
    if (barisSekarang >= baris) return;
    for (int j = 0; j < kolom; j++) {
        cout << matriks[barisSekarang][j] << " ";
    }
    cout << endl;
    cetakMatriksRekursif(matriks, baris, kolom, barisSekarang + 1);
}

int main() {
    int baris, kolom;
    cout << "Masukkan jumlah baris dan kolom matriks: ";
    cin >> baris >> kolom;

    int** matriks = new int*[baris];
    for (int i = 0; i < baris; i++) matriks[i] = new int[kolom];

    int** transpose = new int*[kolom];
    for (int i = 0; i < kolom; i++) transpose[i] = new int[baris];

    cout << "Masukkan elemen matriks:\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) cin >> matriks[i][j];
    }

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            transpose[j][i] = matriks[i][j];
        }
    }

    cout << "\nMatriks asli:\n";
    cetakMatriksRekursif(matriks, baris, kolom);

    cout << "\nMatriks transpose:\n";
    cetakMatriksRekursif(transpose, kolom, baris);

    for (int i = 0; i < baris; i++) delete[] matriks[i];
    delete[] matriks;
    for (int i = 0; i < kolom; i++) delete[] transpose[i];
    delete[] transpose;

    return 0;
}