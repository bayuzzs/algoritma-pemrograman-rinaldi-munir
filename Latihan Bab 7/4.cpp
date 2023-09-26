#include <iostream>
using namespace std;

int main()
{
    // DESKRIPSI
    int a, b, c;

    // ALGORITMA
    cout << "Masukkan a = "; cin >> a;
    cout << "Masukkan b = "; cin >> b;
    cout << "Masukkan c = "; cin >> c;

    if ((c * c) == ((a * a) + (b * b))) // segitiga siku-siku
    {
        cout << "Segitiga siku-siku!" << endl;
    }
    if ((c * c) < ((a * a) + (b * b))) // segitiga tumpul
    {
        cout << "Segitiga tumpul!" << endl;
    }
    if ((c * c) > ((a * a) + (b * b))) // segitiga tumpul
    {
        cout << "Segitiga lancip!" << endl;
    }
}