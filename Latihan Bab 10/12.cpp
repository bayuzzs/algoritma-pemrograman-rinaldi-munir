/* --- SOAL ---
Buatlah prosedur untuk mencetak piramid dengan "ketinggian" n (asumsi: n<= 10) Sebagai Contoh
jika n = 6, maka piramid yang dihasilkan adalah:
     1
    232
   34543
  4567654
 567898765
67890109876 */
#include <iostream>
using namespace std;

void piramida(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 0; j <= n - i; j++)
    {
      cout << " ";
    }
    for (int j = i; j <= 2 * i - 1; j++)
    {
      if (j == 10)
      {
        cout << 0;
        continue;
      }
      cout << j % 10;
    }
    for (int j = 2 * i - 2; j >= i; j--)
    {
      if (j == 10)
      {
        cout << 0;
        continue;
      }
      cout << j % 10;
    }
    cout << endl;
  }
}

int main()
{
  int n;
  cout << "Masukkan N: ";
  cin >> n;
  piramida(n);
}