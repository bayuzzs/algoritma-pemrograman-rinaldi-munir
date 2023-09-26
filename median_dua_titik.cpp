#include <iostream>
using namespace std;

int main()
{
    // DESKRIPSI
    struct titik
    {
        /* data */
        int x;
        int y;
    };

    titik p1, p2, p3;

    // ALGORITMA
    cout << "masukkan p1.x = "; cin >> p1.x;
    cout << "masukkan p1.y = "; cin >> p1.y;

    cout << "masukkan p2.x = "; cin >> p2.x;
    cout << "masukkan p2.y = "; cin >> p2.y;

    p3.x = (p1.x + p2.x) / 2;
    p3.y = (p1.y + p2.y) / 2;

    cout << "Nilai p3 adalah (" << p3.x << "," << p3.y << ")" << endl;
}