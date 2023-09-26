#include <iostream>
using namespace std;

int main()
{
    // DESKRIPSI
    struct jarak
    {
        /* data */
        int km;
        int m;
        int cm;
    };

    jarak totalJarakTempuh;
    long jarakTempuh;

    // ALGORITMA
    cout << "Masukkan jarak tempuh semut = "; cin >> jarakTempuh;

    totalJarakTempuh.km = jarakTempuh / 100000;
    totalJarakTempuh.m = (jarakTempuh % 100000) / 100;
    totalJarakTempuh.cm = (jarakTempuh % 100000) % 100;

    cout << "Semut menempuh jarak sejauh = " << endl
    << totalJarakTempuh.km << "km + " << totalJarakTempuh.m << "m + " << totalJarakTempuh.cm << "cm";
}