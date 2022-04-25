#include <iostream>

using namespace std;

int main()
{
	//header
	cout << "################################################\n";
	cout << "#                                              #\n";
	cout << "#    PENGUMUMAN KELULUSAN MAHASISWA ATMI 53    #\n";
	cout << "#                                              #\n";
	cout << "################################################\n\n\n\n\n";

	//deklarasi variabel
	double nilai;

	//input
	cout << "           MASUKKAN NILAI ANDA = ";
	cin >> nilai;
	cout << endl;

	//batas lulus
	if (nilai >= 5.51 && nilai <= 10)
	{
		cout << "                   LULUS !!!";
	}
	
	//batas tidak lulus
	else if (nilai < 5.51 && nilai >= 0)
	{
		cout << "               TIDAK LULUS !!!";
	}

	//invalid input
	else
	{
		cout << "          NILAI ANDA TIDAK VALID !!!";
	}

	cout << "\n\n\n\n\n\n################################################\n";

}