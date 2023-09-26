#include <iostream>
using namespace std;

int main(){
    // DESKRIPSI
    int totalBelanja, totalBelanjaSetelahDiskon;
    const int diskon = 5000;

    // ALGORITMA
    cout << "Masukkan total belanja = "; cin >> totalBelanja;
    if (totalBelanja > 100000)
    {
        totalBelanjaSetelahDiskon = totalBelanja - 5000;
        cout << "Kamu mendapatkan diskon!" << endl;
        cout << "Harga belanjaan kamu setelah diskon adalah = " << totalBelanjaSetelahDiskon;
    } else {
        cout << "Harga belanjaan kamu adalah = " << totalBelanja;
    }
}