#include <iostream>
using namespace std;

void increment(int *x) {
    (*x)++; 
}

int main() {
    cout << "=== STUDI KASUS 15 ===" << endl;
    int num = 10;
    increment(&num);
    cout << "Nilai num setelah increment: " << num << endl;
    return 0;
}