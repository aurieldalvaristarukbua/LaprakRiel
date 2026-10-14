#include <iostream>

using namespace std;


int calculateSquare(int number)
{
    return number * number;
}

int main()
{
    int num = 5;
    cout << "Kuadrat dari " << num << " adalah " << calculateSquare(num) << endl;
    return 0;
}