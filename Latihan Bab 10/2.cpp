/* --- SOAL ---
Tulislah prosedur yang menghasilkan nilai rata-rata sekumpulan data bilangan bulat yang dibaca secara
berulang-ulang dari papan ketik(akhir pembacaan adalah 9999). Prosedur memiliki (parameter) luaran,
yaitu nilai rata-rata yang dihasilkan.
*/
#include <iostream>

void hitungRataRata(int count, float *total)
{
  if (count == 0)
  {
    std::cout << "Tidak ada data yang dimasukkan." << std::endl;
    return;
  }

  *total = static_cast<double>(*total) / count;
  std::cout << "Rata-rata: " << *total << std::endl;
}

int main()
{
  float total = 0;
  int count = 0;
  int nilai;

  while (true)
  {
    std::cout << "Masukkan bilangan bulat (9999 untuk mengakhiri): ";
    std::cin >> nilai;

    if (nilai == 9999)
    {
      break;
    }

    total += nilai;
    count++;
  }
  hitungRataRata(count, &total);
  return 0;
}
