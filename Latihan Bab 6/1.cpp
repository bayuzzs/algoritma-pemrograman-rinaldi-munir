#include <iostream>
using namespace std;

int main()
{
    // DESKRIPSI
    struct waktu
    {
        /* data */
        long hari;
        long jam;
        long menit;
        long detik;
    };

    waktu waktu;

    long detik;

    // ALGORITMA
    cout << "Masukkan Detik = "; cin >> detik;

    waktu.hari = detik / 86400;
    waktu.jam = (detik % 86400) / 3600;
    waktu.menit = ((detik % 86400) % 3600) / 60;
    waktu.detik = ((detik % 86400) % 3600) % 60;

    cout << "hasil konversi detik adalah adalah = " << endl << waktu.hari  << " Hari, " << waktu.jam << " Jam, " << waktu.menit << " Menit, dan " << waktu.detik <<" detik!";
}