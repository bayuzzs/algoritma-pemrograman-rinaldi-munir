#include <iostream>
using namespace std;

int main()
{
    // DESKRIPSI
    struct waktu
    {
        /* data */
        int jam;
        int menit;
        int detik;
    };

    waktu waktu;

    int detik;

    // ALGORITMA
    cout << "Masukkan Detik = "; cin >> detik;

    waktu.jam = detik / 3600;
    waktu.menit = (detik % 3600) / 60;
    waktu.detik = (detik % 3600) % 60;

    cout << "hasil konversi detik adalah adalah = " << endl << waktu.jam << " Jam, " << waktu.menit << " Menit, dan " << waktu.detik <<" detik!";
}