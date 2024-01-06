#include <iostream>
using namespace std;

int main()
{
    // DESKRIPSI
    struct waktu
    {
        /* data */
        long jam;
        long menit;
        long detik;
    };

    waktu waktu;

    long totalDetik;

    // ALGORITMA
    cout << "Masukkan Jam = "; cin >> waktu.jam;
    cout << "Masukkan Menit = "; cin >> waktu.menit;
    cout << "Masukkan Detik = "; cin >> waktu.detik;

    totalDetik = (waktu.jam * 3600) + (waktu.menit * 60) + waktu.detik;

    cout << "total waktu dalam detik adalah = " << totalDetik <<" detik!";
}