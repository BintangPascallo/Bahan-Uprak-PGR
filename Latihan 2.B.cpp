#include <iostream>

using namespace std;

int main()
{
	//looping program
	int x = 0;
	while (x == 0)
	{ 
	//deklarasi variabel
	double angka1, angka2, hasil;
	int c;

	//header
	cout << "####################################\n";
	cout << "#                                  #\n";
	cout << "#       KALKULATOR SEDERHANA       #\n";
	cout << "#                                  #\n";
	cout << "####################################\n\n";

	//input 1
	cout << "MASUKKAN ANGKA PERTAMA    = ";
	cin >> angka1;

	//input 2
	cout << "MASUKKAN ANGKA KEDUA      = ";
	cin >> angka2;

	//menu awal
	cout << "\n####################################\n\n";
	cout << "OPERASI YANG TERSEDIA\n\n";
	cout << "1) KETIK 1 UNTUK PERTAMBAHAN (+) \n";
	cout << "2) KETIK 2 UNTUK PENGURANGAN (-) \n";
	cout << "3) KETIK 3 UNTUK PEMBAGIAN   (/) \n";
	cout << "4) KETIK 4 UNTUK PERKALIAN   (*) \n\n";
	cout << "MASUKKAN OPERASI MATEMATIKA = ";
	cin >> c;

	cout << "\n";
	cout << "####################################\n\n";

	//pemilihan operasi
	switch (c)
	{
	case 1:
		hasil = angka1 + angka2;
		cout << "HASIL = " << hasil;
		break;
	case 2:
		hasil = angka1 - angka2;
		cout << "HASIL = " << hasil;
		break;
	case 3:
		hasil = angka1 / angka2;
		cout << "HASIL = " << hasil;
		break;
	case 4:
		hasil = angka1 * angka2;
		cout << "HASIL = " << hasil;
		break;
		}
	cout << "\n\n####################################\n\n\n\n";
	}
}