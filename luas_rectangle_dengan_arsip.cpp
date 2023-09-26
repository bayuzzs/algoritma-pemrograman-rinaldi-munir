#include <iostream>
#include <fstream>
using namespace std;

main()
{
    // DESKRIPSI
    float panjang, lebar, luas;
    ifstream Fin;
    ofstream Fout;

    // ALGORITMA

    // buka arsip masukan
    Fin.open("data/data.txt");

    // buka arsip luaran
    Fout.open("data/hasil.txt");

    // baca panjang dan lebar dari arsip Fin
    Fin >> panjang >> lebar;
    luas = panjang * lebar;

    // write luas of rectangle to arsip Fout
    Fout << "Luas Segi Empat adalah = " << luas << endl;

    Fin.close();
    Fout.close();
}