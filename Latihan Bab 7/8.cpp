#include <iostream>
using namespace std;

int main()
{
    // DESKRIPSI
    int angka, clipping;

    // ALGORITMA
    cout << "Masukkan angka = "; cin >> angka;
    if (angka > 255)
    {
        clipping = angka;
        angka = angka - (angka - 255);
        clipping = clipping - angka;
    }
    if (angka < 0)
    {
        clipping = angka;
        angka = angka - angka;
        clipping = angka - clipping;
    }
    
    cout << "Angka dipotong sebanyak = " << clipping << endl;
    cout << "Angka kamu menjadi = " << angka;
    
}
