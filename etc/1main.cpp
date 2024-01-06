#include <iostream>
using namespace std;

int main()
{
    // DESKRIPSI
    struct Waktu
    {
        /* data */
        long jam;
        long menit;
        long detik;
    };

    Waktu waktu;

    long totalDetik;

    // ALGORITMA
    // membaca nilai untuk struct waktu
    cout << "Masukkan Jam = "; cin >> waktu.jam;
    cout << "Masukkan Menit = "; cin >> waktu.menit;
    cout << "Masukkan Detik = "; cin >> waktu.detik;

    // merubah waktu menjadi detik dan increment 1
    totalDetik = (waktu.jam * 3600) + (waktu.menit * 60) + waktu.detik;
    totalDetik = totalDetik + 1;

    // merubah detik yang sudah di increment ke waktu
    waktu.jam = totalDetik / 3600;
    waktu.menit = (totalDetik % 3600) / 60;
    waktu.detik = (totalDetik % 3600) % 60;
    if (waktu.jam > 24)
    {
        waktu.jam = 0;
    }
    

    cout << "waktu setelah ditambah 1 detik adalah = " << waktu.jam << " Jam, " << waktu.menit << " Menit, dan " << waktu.detik << " Detik";
}