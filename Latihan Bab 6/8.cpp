#include <iostream>
using namespace std;

int main()
{
    // DESKRIPSI
    long totalPenduduk, jmlKematian, jmlKelahiran, jmlMigrasiKeDalam, jmlMigrasiKeLuar;

    // ALGORITMA
    cout << "masukkan jumlah kematian = "; cin >> jmlKematian;
    cout << "masukkan jumlah kelahiran = "; cin >> jmlKelahiran;
    cout << "masukkan jumlah jmlMigrasiKeDalam = "; cin >> jmlMigrasiKeDalam;
    cout << "masukkan jumlah jmlMigrasiKeLuar = "; cin >> jmlMigrasiKeLuar;

    totalPenduduk = jmlKelahiran + jmlMigrasiKeDalam - jmlKematian - jmlMigrasiKeLuar;

    cout << "jumlah penduduk = " << totalPenduduk << " Jiwa";
}