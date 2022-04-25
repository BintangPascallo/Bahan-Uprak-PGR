#include <iostream>
#include <string>
#include <array>
#include <conio.h>
#include <fstream>

using namespace std;

//deklarasi
const size_t arraySize = 100;

array <string, 100> peserta = { };
array <string, 12> bulan = { " Januari", " Februari", " Maret", " April", " Mei", " Juni", " Juli", " Agustus", " September", "Oktober", "November", "Desember" };
array <int, 12> tabungan = { };

int max_peserta, i;
string input_anggota;

int main()
{
	//header
	cout << "############################################################\n";
	cout << "#                                                          #\n";
	cout << "#                      KOPERASI MAHASISWA                  #\n";
	cout << "#                                                          #\n";
	cout << "############################################################\n\n";

	//input limit anggota
	cout << "Masukkan Jumlah Maksimal Anggota = ";
	cin >> max_peserta;
	cout << endl;

	//error ndes
	getline(cin, input_anggota);
	cout << "Isikan Nama Anggota Anda !\n\n";

	//input nama anggota
	for (int i = 0; i < max_peserta; i++)
	{
		cout << i + 1 << ")  " << "Nama Anggota = ";
		getline(cin, input_anggota);
		peserta[i] = input_anggota;
	}

	cout << "\n############################################################\n\n";

	//output nama anggota
	cout << "DATA SETELAH INPUT\n\n";
	for (int i = 0; i < max_peserta; i++)
	{
		cout << i + 1 << ")  " << "Nama Anggota = " << peserta.at(i);
		cout << endl;
	}

	cout << "\n############################################################\n\n";

	//input nomor ganti nama
	cout << "Ganti Nama Peserta No = ";
	cin >> i;
	cout << endl;

	i = i - 1;

	//error ndes
	getline(cin, input_anggota);

	//replace ganti nama
	cout << "Ganti Nama            = ";
	getline(cin, input_anggota);
	peserta[i] = input_anggota;

	peserta[i].replace(0, 20, input_anggota);

	cout << "Sekarang Nama Menjadi = " << peserta[i] << endl;
	cout << endl;

	cout << "############################################################\n\n";

	//output nama setelah replace
	cout << "DATA SEKARANG\n\n";

	for (int i = 0; i < max_peserta; i++)
	{
		cout << i + 1 << ")  " << "Nama Anggota = " << peserta.at(i);
		cout << endl;
	}

	cout << "\n############################################################\n\n";

	//input nomor tabungan anggota
	cout << "Input Tabungan Nomor Anggota = ";
	cin >> i;
	cout << endl;

	i = i - 1;

	//input tabungan
	cout << "Nama Anggota = " << peserta.at(i) << endl << endl;

	for (int i = 0; i < 12; i++)
	{
		cout << i + 1 << ")  " << bulan.at(i) << endl;

		cout << "\nMasukkan Saldo = Rp ";

		cin >> tabungan[i];

		cout << endl;

		cin.ignore();
	}
	cout << "\n############################################################\n\n";

	cout << "CEK SALDO\n\n";
	//input nomor anggota tabungan
	cout << "Masukkan Nomor Anggota = ";
	cin >> i;

	cout << endl;

	//saldo total
	int saldo = tabungan[0] + tabungan[1] + tabungan[2] + tabungan[3] + tabungan[4] + tabungan[5] + tabungan[6] + tabungan[7] + tabungan[8] + tabungan[9] + tabungan[10] + tabungan[11];

	//file txt
	ofstream myFile;

	myFile.open("saldo_total.txt");
	cout << endl;
	cout << "Saldo Adalah = Rp " << saldo;
	cout << endl;
	cout << "\n############################################################\n\n";
	myFile << "Total saldo = Rp " << saldo;
	myFile.close();

	cout << "\n############################################################\n\n";

	cout << "DATA ANGGOTA KOPERASI\n\n";
	for (int i = 0; i < max_peserta; i++)
	{
		cout << i + 1 << ")  " << "Nama Anggota = " << peserta.at(i);
		cout << endl;
	}

	//input nomor ganti nama
	cout << "\nHapus Nama Peserta No = ";
	cin >> i;
	cout << endl;

	i = i - 1;

	string ganti(" ");

	peserta[i] = ganti;

	peserta[i].replace(0, 20, ganti);

	cout << "############################################################\n\n";

	//output nama setelah replace
	cout << "DATA SEKARANG\n\n";

	for (int i = 0; i < max_peserta; i++)
	{
		cout << i + 1 << ")  " << "Nama Anggota = " << peserta.at(i);
		cout << endl;
	}

	cout << "\n############################################################\n\n";
}