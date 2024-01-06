/* --- SOAL ---
Ulangi soal nomor 2 tetapi prosedur menghasilkan nilai terkecil
*/

#include <iostream>
using namespace std;

void hitungNilaiTerkecil(float *current, float compare)
{
  if (*current > compare)
  {
    *current = compare;
  }
  return;
}

int main()
{
  float current = 0;
  float compare = 0;
  while (true)
  {
    cout << "Masukkan bilangan bulat (9999 untuk mengakhiri): " << endl;
    cin >> compare;
    if (compare == 9999)
    {
      break;
    }
    hitungNilaiTerkecil(&current, compare);
  }
  cout << "Nilai terkecil  adalah : " << current << endl;
}