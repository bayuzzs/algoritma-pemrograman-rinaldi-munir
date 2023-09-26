#include <iostream>
using namespace std;

int main()
{
    // DESKRIPSI
    int N = 0;
    // ALGORITMA
    cout << "Masukkan N = ";
    cin >> N;
    for (int i = 1; i <= N * 2 - 1; i++)
    {
        if (i <= N)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j;
            }
        } else {
            for (int j = 1; j <= i; j++)
            {
                cout << j - N;
            }
            
        }
        
        cout << endl;
    }
}