#include <iostream>
using namespace std;

int main()
{
    // DESKRIPSI
    double tinggiBadan, beratBadan;
    double BBIdeal, wadah;

    // ALGORITMA
    cout << "Masukkan tinggi badan = ";
    cin >> tinggiBadan;
    cout << "Masukkan berat badan = ";
    cin >> beratBadan;

    BBIdeal = tinggiBadan - 100 - ((tinggiBadan - 100) * 0.1);

    if (BBIdeal - beratBadan <= 2)
    {
        if (BBIdeal - beratBadan > 0)
        {
            cout << "selisih berat badan = " << BBIdeal - beratBadan << endl;
            cout << "Berat badan kamu ideal!!";
        }
        else
        {
            cout << "selisih berat badan = " << BBIdeal - beratBadan << endl;
            cout << "Berat badan kamu tidak ideal!!";
        }
    }
    else
    {
        cout << "selisih berat badan = " << BBIdeal - beratBadan << endl;
        cout << "Berat badan kamu tidak ideal!!";
    }
}