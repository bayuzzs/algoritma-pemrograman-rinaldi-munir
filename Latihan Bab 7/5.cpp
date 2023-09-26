#include <iostream>
using namespace std;

int main()
{
    // DESKRIPSI
    char nama;
    int konversi;

    // ALGORITMA
    std::cout << "Masukkan char = ";
    cin >> nama;

    switch (nama)
    {
    case '0':
        konversi = 0;
        break;
    case '1':
        konversi = 1;
        break;
    case '2':
        konversi = 2;
        break;
    case '3':
        konversi = 3;
        break;
    case '4':
        konversi = 4;
        break;
    case '5':
        konversi = 5;
        break;
    case '6':
        konversi = 6;
        break;
    case '7':
        konversi = 7;
        break;
    case '8':
        konversi = 8;
        break;
    case '9':
        konversi = 9;
        break;
    default:
        konversi = -1;
        break;
    }

    std::cout << "berubah menjadi = " << konversi << endl;
}