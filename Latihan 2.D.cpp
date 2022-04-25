#include <iostream>

using namespace std;

int main()
{
	int x = 0;
	while (x == 0)
	{
		//deklarasi variabel
		int a, b, c, input;

		//Intro
		cout << "##############################################\n";
		cout << "#                                            #\n";
		cout << "#          'PROGRAM DERET FIBONACCI'         #\n";
		cout << "#                                            #\n";
		cout << "##############################################\n\n";

		cout << "MASUKKAN JUMLAH ANGKA N = ";
		cin >> input;
		cout << "\n##############################################\n\n";
		cout << "                  # HASIL #                     \n\n";

		//variabel fix
		a = 1;
		b = 0;
		c = a + b;
		cout << c << " ";

		//rumus 
		for (int z = 1; z <= input; z++)
		{
			c = a + b;
			b = a;
			a = c;
			cout << c << " ";
		}
		cout << "\n\n##############################################\n\n";
	}
}