#include <iostream>
using namespace std;

int main()
{
    // DESKRIPSI
    struct uang
    {
        /* data */
        int seribu;
        int limaRatus;
        int seratus;
        int limaPuluh;
        int duaLima;
    };

    uang totalUang;

    long uangInput;

    // ALGORITMA
    cout << "Masukkan uang (kelipatan 25) = ";
    cin >> uangInput;

    totalUang.seribu = uangInput / 1000;
    totalUang.limaRatus = (uangInput % 1000) / 500;
    totalUang.seratus = ((uangInput % 1000) % 500) / 100;
    totalUang.limaPuluh = (((uangInput % 1000) % 500) % 100) / 50;
    totalUang.duaLima = ((((uangInput % 1000) % 500) % 100) % 50) / 25;

    // totalUang.seribu = uangInput / 1000;
    // totalUang.seratus = (uangInput % 1000) / 100;
    // totalUang.limaPuluh = ((uangInput % 1000) % 100) / 50;
    // totalUang.duaLima = (((uangInput % 1000) % 100) % 50) / 25;

    cout << "uang senilai Rp." << uangInput << " setara dengan " << endl
    << totalUang.seribu << " buah pecahan Rp.1000" << endl
    << totalUang.limaRatus << " buah pecahan Rp.500" << endl
    << totalUang.seratus << " buah pecahan Rp.100" << endl
    << totalUang.limaPuluh << " buah pecahan Rp.50" << endl
    << totalUang.duaLima << " buah pecahan Rp.25";
}