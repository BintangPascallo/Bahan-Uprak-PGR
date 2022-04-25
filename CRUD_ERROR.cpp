#include <iostream>
#include <string>
#include <array>
#include <conio.h>
#include <fstream>
#include <stdlib.h>
#include <ctime>
#include <limits>
#include <windows.h>
#undef max
using namespace std;

struct dagangan {
	int pk;
	string nama;
	string jenis;
	int stock;
	int harga;
}inputData;

string id = "";
string pass = "";
int memory;
int posisi;

void checkDatabase(fstream& data) {
	//data.open("data.bin", fstream::out);
	data.open("data.bin", ios::out | ios::in | ios::binary);

	// Check file ada atau tidak
	if (data.is_open()) {
		cout << "Database exist\n";
	}
	else {
		cout << "Database is not exist, create a new database\n";
		data.close();
		//data.open("data.bin", fstream::out);
		data.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);
		data << "Databse";
	}
}

void writeData(fstream& data, int posisi, dagangan& inputData) {
	data.seekp((posisi - 1) * sizeof(inputData), ios::beg);
	data.write(reinterpret_cast<char*>(&inputData), sizeof(dagangan));
}

int getDataSize(fstream& data) {
	int start, end;
	data.seekg(0, ios::beg);
	start = data.tellg();
	data.seekg(0, ios::end);
	end = data.tellg();
	return (end - start) / sizeof(dagangan);
}

void addData(fstream& data) {

	dagangan inputData;

	int size = getDataSize(data);

	cout << "ukuran data : " << size << endl;

	//readData(data, size);

	inputData.pk = 1;

	cout << "Nama: ";
	getline(cin, inputData.nama);
	cout << "Jenis: ";
	getline(cin, inputData.jenis);
	cout << "Stock: ";
	cin >> inputData.stock;
	cout << "Harga: ";
	cin >> inputData.harga;

	writeData(data, posisi, inputData);
}

int menuAdmin() {
	int input;

	//system("cls");
	cout << "MENU ADMIN\n";
	cout << "==========================\n";
	cout << "1) Tambah stock\n";
	cout << "2) Tampilkan stock\n";
	cout << "3) Ubah stock\n";
	cout << "4) Hapus stock\n";
	cout << "5) Selesai\n";
	cout << "==========================\n";
	cout << "pilih [1-5] = ";
	cin >> input;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return input;
}

int adminPilih() {

	fstream data;

	checkDatabase(data);

	int pilihan = menuAdmin();
	char repeat;

	enum option { create = 1, read, update, del, finish };

	system("cls");
	while (pilihan != 5) {
		switch (pilihan) {
		case create:
			cout << "Tambah stock\n";
			addData(data);
			break;
		case read:
			cout << "Tampilkan stock\n";
			break;
		case update:
			cout << "Ubah stock\n";
			break;
		case del:
			cout << "Hapus stock\n";
			break;
		default:
			cout << "Pilihan tidak ditemukan\n";
			(void)_getch();
			break;
		}

	menu:

		cout << "Lanjutkan?[y/n] = ";
		cin >> repeat;
		if (repeat == 'y' || repeat == 'Y') {
			pilihan = menuAdmin();
		}
		else if (repeat == 'n' || repeat == 'N') {
			break;
		}
		else {
			cout << "\nPilihan Tidak Ada\n";
			(void)_getch();
			goto menu;
		}
	}

	cout << "Akhir dari program\n";

	cin.get();
	return 0;
}

void login() {
	system("cls");
	cout << "Menu Login\n";
	cout << "ID       = ";
	cin >> id;
	cout << "Passowrd = ";
	cin >> pass;

	if (id == "Bintang" && pass == "123abc") {
		system("cls");
		cout << "Login User";
		memory = 1;
	}

	else if (id == "admin" && pass == "admin")
	{
		system("cls");
		cout << "Login Admin";
		memory = 2;
	}

	else if (id == "super" && pass == "super")
	{
		system("cls");
		cout << "Login Pemilik";
		memory = 3;
	}

	else {
		system("cls");
		cout << "Password Salah";
		(void)_getch(); //pause
		return login();
	}
}

int main() {
	login();
	(void)_getch(); //pause

	if (memory == 1) {
		system("cls");
		cout << "Menu User";
	}

	else if (memory == 2) {
		system("cls");
		cout << "Menu Admin" << endl;
		adminPilih();
		cout << menuAdmin() << endl;
	}

	else if (memory == 3) {
		system("cls");
		cout << "Menu Pemilik";
	}
}