#include <iostream>
#include <array>
#include <algorithm>
#include <conio.h>

using namespace std;

const size_t arraySize = 10;

void printArray(array <int, arraySize>& array_buah)
{
	cout << "\nBuah dari yang paling ringan ke berat = \n\n";
	for (int& a : array_buah)
	{
		cout << a << "\n";
	}
	cout << endl;
}

int main()
{
	array < int, 10> array_buah = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	int jeruk, mangga, kelengkeng, nanas, kedondong, anggur, rambutan, leci, melon, semangka;

	cout << "#####################################\n";
	cout << "#                                   #\n";
	cout << "#          PT. GUDANG BUAH          #\n";
	cout << "#                                   #\n";
	cout << "#####################################\n\n";

	cout << "Masukkan Stock Buah Dalam (kg) = \n";

	cout << "\n#####################################\n\n";

	cout << "1)  Jeruk        = ";
	cin >> jeruk;
	array_buah[0] = jeruk;

	cout << "2)  Mangga       = ";
	cin >> mangga;
	array_buah[1] = mangga;

	cout << "3)  Kelengkeng   = ";
	cin >> kelengkeng;
	array_buah[2] = kelengkeng;

	cout << "4)  Nanas        = ";
	cin >> nanas;
	array_buah[3] = nanas;

	cout << "5)  Kedondong    = ";
	cin >> kedondong;
	array_buah[4] = kedondong;

	cout << "6)  Anggur       = ";
	cin >> anggur;
	array_buah[5] = anggur;

	cout << "7)  Rambutan     = ";
	cin >> rambutan;
	array_buah[6] = rambutan;

	cout << "8)  Leci         = ";
	cin >> leci;
	array_buah[7] = leci;

	cout << "9)  Melon        = ";
	cin >> melon;
	array_buah[8] = melon;

	cout << "10) Semangka     = ";
	cin >> semangka;
	array_buah[9] = semangka;

	cout << "\n#####################################\n\n";

	cout << "Stock Buah Setelah Di Input (kg) = \n";

	cout << "\n#####################################\n";

	cout << "\n1)  Jeruk        = " << array_buah.at(0);
	cout << "\n    Address      = " << &array_buah[0];

	cout << "\n2)  Mangga       = " << array_buah.at(1);
	cout << "\n    Address      = " << &array_buah[1];

	cout << "\n3)  Kelengkeng   = " << array_buah.at(2);
	cout << "\n    Address      = " << &array_buah[2];

	cout << "\n4)  Nanas        = " << array_buah.at(3);
	cout << "\n    Address      = " << &array_buah[3];

	cout << "\n5)  Kedondong    = " << array_buah.at(4);
	cout << "\n    Address      = " << &array_buah[4];

	cout << "\n6)  Anggur       = " << array_buah.at(5);
	cout << "\n    Address      = " << &array_buah[5];

	cout << "\n7)  Rambutan     = " << array_buah.at(6);
	cout << "\n    Address      = " << &array_buah[6];

	cout << "\n8)  Leci         = " << array_buah.at(7);
	cout << "\n    Address      = " << &array_buah[7];

	cout << "\n9)  Melon        = " << array_buah.at(8);
	cout << "\n    Address      = " << &array_buah[8];

	cout << "\n10) Semangka     = " << array_buah.at(9);
	cout << "\n    Address      = " << &array_buah[9];

	cout << "\n\n#####################################\n\n";

	cout << "Pencari Stock Buah (kg) \n";

	cout << "\n#####################################\n\n";

	cout << "# KODE BUAH #\n\n";
	cout << "[CODE = 0] Jeruk\n";
	cout << "[CODE = 1] Mangga\n";
	cout << "[CODE = 2] Kelengkeng\n";
	cout << "[CODE = 3] Nanas\n";
	cout << "[CODE = 4] Kedondong\n";
	cout << "[CODE = 5] Anggur\n";
	cout << "[CODE = 6] Rambutan\n";
	cout << "[CODE = 7] Leci\n";
	cout << "[CODE = 8] Melon\n";
	cout << "[CODE = 9] Semangka\n";

	int search;
	cout << "\nMasukkan Kode Buah  = ";
	cin >> search;

	cout << endl;

	switch (search)
	{
	case 0:
		cout << "Stock Jeruk         = " << array_buah.at(0) << " kg\n";
		break;
	case 1:
		cout << "Stock Mangga         = " << array_buah.at(1) << " kg\n";
		break;
	case 2:
		cout << "Stock Kelengkeng    = " << array_buah.at(2) << " kg\n";
		break;
	case 3:
		cout << "Stock Nanas         = " << array_buah.at(3) << " kg\n";
		break;
	case 4:
		cout << "Stock Kedondong     = " << array_buah.at(4) << " kg\n";
		break;
	case 5:
		cout << "Stock Anggur        = " << array_buah.at(5) << " kg\n";
		break;
	case 6:
		cout << "Stock Rambutan      = " << array_buah.at(6) << " kg\n";
		break;
	case 7:
		cout << "Stock Leci          = " << array_buah.at(7) << " kg\n";
		break;
	case 8:
		cout << "Stock Melon         = " << array_buah.at(8) << " kg\n";
		break;
	case 9:
		cout << "Stock Semangka      = " << array_buah.at(9) << " kg\n";
		break;
	}

	cout << "\n#####################################\n\n";

	cout << "Sortir buah berdasarkan beratnya (kg) = \n";

	cout << "\n#####################################\n";

	sort(array_buah.begin(), array_buah.end());
	printArray(array_buah);

	cout << "#####################################\n\n";

	(void)_getch();
}