#include <iostream>
using namespace std;

int main(){
    // DESKRIPSI
    int bilBulat;

    // ALGORITMA
    cout << "Masukkan bilangan = "; cin >> bilBulat;
    if (bilBulat % 4 == 0)
    {
        cout << bilBulat << " Merupakan bilangan kelipatan 4.";
    } else {
        cout << bilBulat << " Bukan Merupakan bilangan kelipatan 4.";
    }
}