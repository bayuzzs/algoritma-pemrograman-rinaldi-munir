/* --- SOAL ---
Tulislah prosedur untuk menghitung jumlah N buah bilangan genap pertama (Bilangan genap dimulai dari 0).
Prosedur menerima (parameter) masukan N dan memberikan (parameter) luaran jumlah N buah bilangan genap pertama.
*/

#include <iostream>
using namespace std;

// Ini prosedur nya
void hitungGenap(int *N){
  int n = *N;
  *N = 0;
  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
    {
      *N = *N + 1;
    }
  }
  
}

int main(){
  int N;
  N = 123456789;
  cout << "Nilai awal N = " << N << endl;
  hitungGenap(&N);
  cout << "Nilai awal N = " << N << endl;
  cout << "Jumlah total bilangan genap pertama dari nilai awal N adalah = " << N << endl;
}