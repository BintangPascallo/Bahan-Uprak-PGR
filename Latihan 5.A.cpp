#include <iostream>
#include <array>
#include <string>
#include <conio.h>
#include <algorithm>

using namespace std;

//jumlah deklarasi array
const size_t arraySize = 12;

//prototipe sort array
void printArray(array <int, arraySize>& nilai)
{
	cout << endl;
	cout << "##############################################\n";
	cout << "#                                            #\n";
	cout << "#           # PROGRAM URUTAN NIM #           #\n";
	cout << "#                                            #\n";
	cout << "##############################################\n";

	for (int& a : nilai)
	{
		cout << "\n" << a;
	}
	cout << endl;
}

//struct input
struct data
{
	array <string, 12> nama = { };
	array <int, 12> nim = { };
}mahasiswa;

void coba() {
	//header
	int a, c, d, g;
	cout << "###################################################\n";
	cout << "#                                                 #\n";
	cout << "#            # DATA MAHASISWA ATMI 53 #           #\n";
	cout << "#                                                 #\n";
	cout << "###################################################\n\n";

	//input for
	for (int i = 0; i < 12; i++)
	{
		cout << "# Masukkan Nama Dan NIM Mahasiswa !\n\n";
		cout << i + 1 << ")  " << "Nama Mahasiswa = ";
		getline(cin, mahasiswa.nama[i]);
		cout << i + 1 << ") " << " NIM  Mahasiswa = ";
		cin >> mahasiswa.nim[i];
		cout << endl;

		//The cin.ignore() function is used which is used to ignore or clear one or more characters from the input buffer
		cin.ignore();
	}

	//sortir
	for (a = 0; a < 12; a++) {
		c = a;
		for (d = a + 1; d < 12; d++) {
			if (mahasiswa.nim[c] > mahasiswa.nim[d]) {
				c = d;
			}
		}
		g = mahasiswa.nim[c];
		mahasiswa.nim[c] = mahasiswa.nim[a];
		mahasiswa.nim[a] = g;
	}

	//mahasiswa atmi database
	cout << "##############################################################\n";
	cout << "#                                                            #\n";
	cout << "# DAFTAR MAHASISWA POLITEKNIK ATMI BERDASARKAN PRODI DAN NIM #\n";
	cout << "#                                                            #\n";
	cout << "##############################################################\n\n";

	for (a = 0; a < 12; a++) {
		if (mahasiswa.nim[a] >= 20201000 && mahasiswa.nim[a] < 20202000)
		{
			cout << "Prodi D3 Teknik Mesin Industri\n";
		}

		else if (mahasiswa.nim[a] >= 20202000 && mahasiswa.nim[a] < 20203000)
		{
			cout << "Prodi D3 Teknik Mekatronika\n";
		}

		else if (mahasiswa.nim[a] >= 20203000 && mahasiswa.nim[a] < 20204000)
		{
			cout << "Prodi D3 Teknik Perancangan Mekanik dan Mesin\n";
		}

		else if (mahasiswa.nim[a] >= 20204000 && mahasiswa.nim[a] < 20205000)
		{
			cout << "Prodi D4 Perancangan Manufaktur\n";
		}

		else if (mahasiswa.nim[a] >= 20205000 && mahasiswa.nim[a] < 20206000)
		{
			cout << "Prodi D4 Rekayasa Teknologi Manufaktur\n";
		}

		else if (mahasiswa.nim[a] >= 20206000 && mahasiswa.nim[a] < 20207000)
		{
			cout << "Prodi D4 Rekayasa Teknik Mekatronika\n";
		}
		cout << "NIM  = " << mahasiswa.nim[a] << "\nNama = " << mahasiswa.nama[a] << "\n\n";
	}

	cout << "##############################\n";
	cout << "#                            #\n";
	cout << "#   # PROGRAM SEARCH NIM #   #\n";
	cout << "#                            #\n";
	cout << "##############################\n\n";

	//input search
	int search_nim;
	cout << "Masukkan NIM yang akan dicari = ";
	cin >> search_nim;

	cout << endl;

	//logika search
	if (search_nim >= 20201000 && search_nim < 20202000)
	{
		cout << "Prodi D3 Teknik Mesin Industri\n";
	}

	else if (search_nim >= 20202000 && search_nim < 20203000)
	{
		cout << "Prodi D3 Teknik Mekatronika\n";
	}

	else if (search_nim >= 20203000 && search_nim < 20204000)
	{
		cout << "Prodi D3 Teknik Perancangan Mekanik dan Mesin\n";
	}

	else if (search_nim >= 20204000 && search_nim < 20205000)
	{
		cout << "Prodi D4 Perancangan Manufaktur\n";
	}

	else if (search_nim >= 20205000 && search_nim < 20206000)
	{
		cout << "Prodi D4 Rekayasa Teknologi Manufaktur\n";
	}

	else if (search_nim >= 20206000 && search_nim < 20207000)
	{
		cout << "Prodi D4 Rekayasa Teknik Mekatronika\n";
	}

	cout << "\n";

	//fitur short array
	sort(mahasiswa.nim.begin(), mahasiswa.nim.end());
	printArray(mahasiswa.nim);

	//footer
	cout << endl;
	cout << "##############################################\n";
}

int main()
{
	//prototipe program
	coba();
	(void)_getch();
}