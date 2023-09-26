#include <iostream>
using namespace std;

int main()
{
    // DESKRIPSI
    int x, y, z;
    int wadah;

    // ALGORITMA
    cout << "masukkan nilai x = "; cin >> x;
    cout << "masukkan nilai y = "; cin >> y;
    cout << "masukkan nilai z = "; cin >> z;

    cout << "nilai x sebelum diubah = " << x << endl;
    cout << "nilai y sebelum diubah = " << y << endl;
    cout << "nilai z sebelum diubah = " << z << endl;

    cout << "nilai ditukar dari (x,y,z) menjadi (y,z,x)" << endl;

    wadah = x;
    x = y;
    y = z;
    z = wadah;

    cout << "nilai x setelah diubah = " << x << endl;
    cout << "nilai y setelah diubah = " << y << endl;
    cout << "nilai z setelah diubah = " << z << endl;

}