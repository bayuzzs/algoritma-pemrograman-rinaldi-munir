#include <iostream>
using namespace std;

int main()
{
    // DESKRIPSI
    struct waktu
    {
        /* data */
        int tahun;
        int bulan;
        int hari;
    };

    waktu waktu;

    int hari;

    // ALGORITMA
    cout << "Masukkan hari = "; cin >> hari;

    waktu.tahun = hari / 365;
    waktu.bulan = (hari % 365) / 30;
    waktu.hari = (hari % 365) % 30;

    cout << "proyek anda memakan waktu = " << endl << waktu.tahun << " tahun, " << waktu.bulan << " bulan, dan " << waktu.hari <<" hari!";
}