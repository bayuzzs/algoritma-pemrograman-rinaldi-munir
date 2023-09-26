#include <iostream>
using namespace std;

int main (){
    // DESKRIPSI
    int decimal, temp;
    string biner;

    // ALGORITMA
    cout << "Masukkan Bilangan = "; cin >> decimal;
    biner = "";
    while (decimal != 0)
    {
        temp = decimal % 2;
        decimal = decimal / 2;
        switch (temp)
        {
        case 0:
            biner = "0" + biner;
            break;
        case 1:
            biner = "1" + biner;
            break;
        default:
            break;
        }
    }
    cout << "Bilangan dikonversi ke biner menjadi = " << biner << endl;
}