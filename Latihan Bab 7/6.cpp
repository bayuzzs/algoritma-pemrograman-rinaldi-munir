#include <iostream>
using namespace std;

int main()
{
    // DESKRIPSI
    int uangBelanja;

    // ALGORITMA
    cout << "Masukkan uang belanja = "; cin >> uangBelanja;
    if (uangBelanja % 25 > 0)
    {
        uangBelanja = uangBelanja - (uangBelanja % 25);
        cout << "Uang kamu dibulatkan menjadi = " << uangBelanja << endl;
    } else {
        cout << "Uang kamu pas = " << uangBelanja << endl;
    }
    
}