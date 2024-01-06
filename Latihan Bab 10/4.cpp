/* --- SOAL ---
Misalkan anda menyimpan uang di bank konvensional sejumlah A rupiah pada awal tahun.
Jika anda mendapat bunga tahunan sebesai i persen, maka jumlah uang anda setelah i tahun adalah
F = A{(1 + i/100) + (1 + i/100)^2 + (1 + i/100)^3 + ... + (1 + i/100)^n}
*/

#include <iostream>
#include <cmath>
using namespace std;

void hitungUang(float A, float i, int n, float *F)
{
  *F = A;
  for (int j = 1; j <= n; j++)
  {
    *F += (*F * pow(1 + i / 100, j) - *F);
  }
}

int main()
{
  // cout << pow(1 + 5 / 100, 3) << endl;
  // cout << 1 + 5 / 100 << endl;
  float A, i;
  int n;
  float F;
  cout << "Masukkan uang anda: ";
  cin >> A;
  cout << "Masukkan bunga: ";
  cin >> i;
  cout << "Berapa tahun anda ingin menabung?: ";
  cin >> n;
  hitungUang(A, i, n, &F);
  cout << "Uang anda setelah " << n << " tahun adalah: " << F << endl;
}