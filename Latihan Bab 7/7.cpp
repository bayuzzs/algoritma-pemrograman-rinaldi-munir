#include <iostream>
using namespace std;

int main()
{
    // DESKRIPSI
    int bilangan;
    string romawi;

    // ALGORITMA
    cout << "Masukkan nilai = "; cin >> bilangan;

    if (bilangan > 10)
    {
        /* code */
    }
    
    switch (bilangan)
    {
    case 1:
        romawi = "I";
        break;
    case 2:
        romawi = "II";
        break;
    case 3:
        romawi = "III";
        break;
    case 4:
        romawi = "IV";
        break;
    case 5:
        romawi = "V";
        break;
    case 6:
        romawi = "VI";
        break;
    case 7:
        romawi = "VII";
        break;
    case 8:
        romawi = "VIII";
        break;
    case 9:
        romawi = "IX";
        break;
    case 10:
        romawi = "X";
        break;
    
    default:
        break;
    }

    cout << "Bilangan kamu dikonversi menjadi " << romawi << endl;
}