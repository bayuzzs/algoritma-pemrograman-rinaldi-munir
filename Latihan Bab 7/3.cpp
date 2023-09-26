#include <iostream>
using namespace std;

int main()
{
    // DESKRIPSI
    int a, b, c;

    // ALGORITMA
    cout << "Masukkan ke-1 = ";
    cin >> a;
    cout << "Masukkan ke-2 = ";
    cin >> b;
    cout << "Masukkan ke-3 = ";
    cin >> c;

    cout << "==================" << endl;

    cout << "Bilangan ke-1 = " << a << endl;
    cout << "Bilangan ke-2 = " << b << endl;
    cout << "Bilangan ke-3 = " << c << endl;

    if (a < b) // b lebih besar
    {
        if (b < c) // c lebih besar, a-b-c
        {
            // a-b-c (nothing happen)
        }
        if (b > c) // b lebih besar, a-c-b
        {
            // tukar b dengan c
            b = b + c;
            c = b - c;
            b = b - c;
        }
    }
    if (a < c) // c lebih besar
    {
        if (c > b) // c lebih besar, a-b-c
        {
            // a-b-c (nothing happen)
        }

        if (c < b) // b lebih besar, a-c-b
        {
            // tukar b dengan c
            b = b + c;
            c = b - c;
            b = b - c;
        }
    }
    if (b < a)
    {
        if (a < c) // b terkecil, c terbesar, b-a-c
        {
            // tukar a dengan b
            a = a + b;
            b = a - b;
            a = a - b;
        }
        if (a > c) // a terbesar
        {
            if (b < c) // b terkecil, b-c-a
            {
                // tukar c dengan a (c-b-a)
                c = c + a;
                a = c - a;
                c = c - a;
                // tukar c dengan b (b-c-a)
                c = c + b;
                b = c - b;
                c = c - b;
            }
            if (b > c) // c terkecil, c-b-a
            {
                // tukar c dengan a (c-b-a)
                c = c + a;
                a = c - a;
                c = c - a;
            }
        }
    }
    if (b < c)
    {
        if (c < a) // b terkecil, a terbesar b-c-a
        {
            // tukar c dengan a (c-b-a)
            c = c + a;
            a = c - a;
            c = c - a;
            // tukar c dengan b (b-c-a)
            c = c + b;
            b = c - b;
            c = c - b;
        }
        if (c > a) // c terbesar
        {
            if (b < a) // b terkecil, b-a-c
            {
                // tukar a dengan b
                a = a + b;
                b = a - b;
                a = a - b;
            }
            if (b > a) // a terkecil a-b-c
            {
                // a-b-c nothing happen
            }
        }
    }
    if (c < a)
    {
        if (a < b) // b terbesar, c-a-b
        {
            // tukar a dengan b (b-a-c)
            a = a + b;
            b = a - b;
            a = a - b;
            // tukar c dengan b (c-a-b)
            c = c + b;
            b = c - b;
            c = c - b;
        }
        if (a > b) // a terbesar
        {
            if (c < b) // c terkecil, c-b-a
            {
                // tukar c dengan a
                c = c + a;
                a = c - a;
                c = c - a;
            }
            if (c > a) // b terkecil, b-c-a
            {
                // tukar c dengan a (c-b-a)
                c = c + a;
                a = c - a;
                c = c - a;
                // tukar c dengan b (b-c-a)
                c = c + b;
                b = c - b;
                c = c - b;
            }
        }
    }
    if (c < b)
    {
        if (b < a) // c terkecil, a terbesar, c-b-a
        {
            // tukar c dengan a
            c = c + a;
            a = c - a;
            c = c - a;
        }
        if (b > a) // b terbesar
        {
            if (c < a) // c terkecil, c-a-b
            {
                // tukar a dengan b (b-a-c)
                a = a + b;
                b = a - b;
                a = a - b;
                // tukar c dengan b (c-a-b)
                c = c + b;
                b = c - b;
                c = c - b;
            }
            if (c > a) // a terkecil, a-c-b
            {
                // tukar b dengan c
                b = b + c;
                c = b - c;
                b = b - c;
            }
        }
    }

    cout << "==================" << endl;
    cout << "|Bilangan Ditukar|" << endl;
    cout << "==================" << endl;
    cout << "Bilangan ke-1 = " << a << endl;
    cout << "Bilangan ke-2 = " << b << endl;
    cout << "Bilangan ke-3 = " << c << endl;
}