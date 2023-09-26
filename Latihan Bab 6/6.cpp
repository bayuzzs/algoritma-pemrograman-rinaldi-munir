#include <iostream>
using namespace std;

int main()
{
    // DESKRIPSI
    struct satuan
    {
        /* data */
        double Inchi;
        double kaki;
        double yard;
    };

    satuan totalPanjangBenda;
    double panjangBenda;

    // ALGORITMA
    cout << "masukkan panjang benda (m) = "; cin >> panjangBenda;

    // ini saya buat seperti algoritma sebelumnya, dimana saat panjangBenda dibagi, sisa bagi nya akan di oper ke satuan setelahnya
    // totalPanjangBenda.yard = panjangBenda / 0.9144;
    // totalPanjangBenda.kaki = (panjangBenda - totalPanjangBenda.yard) / (30.48 / 100);
    // totalPanjangBenda.Inchi = (panjangBenda - (panjangBenda - totalPanjangBenda.yard) / (30.48 / 100)) / (25.4 / 1000);
    totalPanjangBenda.yard = panjangBenda / 0.9144;
    totalPanjangBenda.kaki = panjangBenda / (30.48 / 100);
    totalPanjangBenda.Inchi = panjangBenda / (25.4 / 1000);

    cout << "panjang benda adalah = " << endl
    << totalPanjangBenda.yard << "yard + "
    << totalPanjangBenda.kaki << "kaki + "
    << totalPanjangBenda.Inchi << "inchi";
}