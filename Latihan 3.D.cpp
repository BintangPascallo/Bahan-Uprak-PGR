#include <iostream>

using namespace std;

int x;
int faktorial(int x);
int penjumlahan(int x);

int main()
{
	int opsi;
	int factor, hasil;
	cout << "#######################################################\n";
	cout << "#                                                     #\n";
	cout << "#     PROGRAM PENGHITUNG FAKTORIAL DAN PENUMLAHAN     #\n";
	cout << "#                                                     #\n";
	cout << "#######################################################\n\n";

	cout << "1) Program Faktorial                         (Tekan 1)\n";
	cout << "2) Program Penjumlahan                       (Tekan 2)\n\n";
	cout << "Pilih Program = ";
	cin >> opsi;

	cout << endl;

	if (opsi == 1)
	{
		cout << "Masukkan Nilai Faktorial   = ";
		cin >> factor;
		hasil = faktorial(factor);
		cout << "Hasil Faktorial            = " << hasil << endl;

	}
	else if (opsi == 2)
	{
		cout << "Masukkan Nilai Penjumlahan = ";
		cin >> factor;
		hasil = penjumlahan(factor);
		cout << "Hasil Penjumlahan          = " << hasil << endl;
	}
	else
	{
		cout << "WARNING : PILIH ANGKA 1 ATAU 2\n";
	}
}

int faktorial(int x)
{
	if (x <= 1)
	{
		return x;
	}
	else
	{
		return x * faktorial(x - 1);
	}


}
int penjumlahan(int x)
{
	if (x <= 1)
	{
		return x;
	}
	else
	{
		return x + penjumlahan(x - 1);
	}
}