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