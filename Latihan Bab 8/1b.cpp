#include <iostream>
using namespace std;

int main()
{
    
    // DESKRIPSI
    char input;

    // ALGORITMA
    do
    {
        cout << "Masukkan Karakter = "; cin >> input;
        cout << "Output Karakter = " << input << endl;
    } while (input != '.');
}