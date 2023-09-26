#include <iostream>
using namespace std;

int main(){
    // DEKLARASI
    int N, m;
    double nilai, jumlah, rerata;
    string nama;

    // ALGORITMA
    cout << "Masukkan Jumlah Siswa = "; cin >> N;
    cout << "Masukkan Jumlah Mapel = "; cin >> m;

    for (int i = 0; i < N; i++)
    {
        cout << "Masukkan Nama Siswa = "; cin >> nama;
        jumlah = 0;
        for (int j = 0; j < m; j++)
        {
            cout << "Masukkan nilai mapel ke-" << j + 1 << " = "; cin >> nilai;
            jumlah = jumlah + nilai;
        }
        rerata = jumlah / m;
        cout << "Nama: " << nama << endl << 
        "Nilai: " << jumlah << endl <<
        "Rerata: " << rerata << endl;
    }

}