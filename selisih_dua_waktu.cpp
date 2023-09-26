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
    waktu waktuAkhir, waktuAwal, waktuDurasi;
    int detikAwal, detikAkhir, durasi;

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

    waktuDurasi.jam = durasi / 3600;
    waktuDurasi.menit = (durasi % 3600) / 60;
    waktuDurasi.detik = (durasi % 3600) % 60;

    cout << "hasil selisih waktu akhir dengan waktu awal adalah = " << waktuDurasi.jam << " jam, " << waktuDurasi.menit << " Menit, dan " << waktuDurasi.detik << " Detik!"; 
}