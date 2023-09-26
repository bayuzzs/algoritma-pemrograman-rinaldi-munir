#include <iostream>
using namespace std;

int main()
{
    // DESKRIPSI
    int N;
    string input;

    // ALGORITMA
        cout << "Masukkan Pengulangan = "; cin >> N;
    for (int i = 0; i < N; i++)
    {
        cout << "Masukkan karakter = "; cin >> input;
        cout << "Output karakter = " << input << endl;
    }
}