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
    const int BiayaPerDetik = 50;
    waktu waktuAkhir, waktuAwal, waktuDurasi;
    int detikAwal, detikAkhir, durasi, biaya;

    // ALGORITMA
    cout << "Waktu awal" << endl;   //input ke record waktuAkhir
    cout << "Masukkan Jam = "; cin >> waktuAkhir.jam;
    cout << "Masukkan Menit = "; cin >> waktuAkhir.menit;
    cout << "Masukkan Detik = "; cin >> waktuAkhir.detik;

    cout << "Waktu akhir" << endl;   //input ke record waktuAwal
    cout << "Masukkan Jam = "; cin >> waktuAwal.jam;
    cout << "Masukkan Menit = "; cin >> waktuAwal.menit;
    cout << "Masukkan Detik = "; cin >> waktuAwal.detik;

    detikAwal = (waktuAkhir.jam * 3600) + (waktuAkhir.menit * 60) + (waktuAkhir.detik);    //konversi waktu menjadi detik
    detikAkhir = (waktuAwal.jam * 3600) + (waktuAwal.menit * 60) + (waktuAwal.detik);    //konversi waktu menjadi detik

    durasi = detikAwal - detikAkhir;
    biaya = durasi * BiayaPerDetik;

    cout << "Biaya anda menelpon selama " << durasi << " detik adalah = Rp." << biaya << " !";
}