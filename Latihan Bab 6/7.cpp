#include <iostream>
using namespace std;

int main()
{
    // DESKRIPSI
    double tinggiBadan;
    double BBIdeal, wadah;

    // ALGORITMA
    cout << "Masukkan tinggi badan = "; cin >> tinggiBadan;

    BBIdeal = tinggiBadan - 100 -  ((tinggiBadan - 100) * 0.1);

    cout << "Berat Badan Ideal kamu adalah = " << BBIdeal << "Kg" << endl;
}