/* --- SOAL ---
Tulislah prosedur yang menerima masukan berupa nilai integer positif dan
menampilkan nilai tersebut dalam kata-kata.
Contoh:
Masukan: 15
Luaran: Lima Belas
Masukan: 2347
Luaran: dua ribu tiga ratus empat puluh tujuh
*/

#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk mengonversi digit satuan menjadi kata-kata
string satuanToString(int satuan)
{
  switch (satuan)
  {
  case 1:
    return "Satu";
  case 2:
    return "Dua";
  case 3:
    return "Tiga";
  case 4:
    return "Empat";
  case 5:
    return "Lima";
  case 6:
    return "Enam";
  case 7:
    return "Tujuh";
  case 8:
    return "Delapan";
  case 9:
    return "Sembilan";
  default:
    return "";
  }
}

// Fungsi untuk mengonversi dua digit terakhir menjadi kata-kata
string duaDigitToString(int duaDigit)
{
  if (duaDigit >= 10 && duaDigit <= 19)
  {
    switch (duaDigit)
    {
    case 10:
      return "Sepuluh";
    case 11:
      return "Sebelas";
    default:
      return satuanToString(duaDigit % 10) + " Belas";
    }
  }
  else
  {
    return satuanToString(duaDigit / 10) + " Puluh " + satuanToString(duaDigit % 10);
  }
}

// Fungsi untuk mengonversi tiga digit terakhir menjadi kata-kata
string tigaDigitToString(int tigaDigit)
{
  if (tigaDigit >= 100)
  {
    return satuanToString(tigaDigit / 100) + " Ratus " + duaDigitToString(tigaDigit % 100);
  }
  else
  {
    return duaDigitToString(tigaDigit);
  }
}

// Fungsi utama untuk mengonversi nilai integer menjadi kata-kata
void konversiKeKata(int nilai)
{
  if (nilai == 0)
  {
    cout << "Nol" << endl;
    return;
  }

  string hasil = "";

  if (nilai >= 1000)
  {
    hasil += satuanToString(nilai / 1000) + " Ribu ";
    nilai %= 1000;
  }

  hasil += tigaDigitToString(nilai);

  cout << "Luaran: " << hasil << endl;
}

int main()
{
  int masukan;
  cout << "Masukan: ";
  cin >> masukan;

  konversiKeKata(masukan);

  return 0;
}
