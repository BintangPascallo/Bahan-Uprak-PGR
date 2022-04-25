#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{
	//looping program
	int x = 0;
	while (x == 0)
	{
		system("cls");

		//header
		cout << "########################################\n";
		cout << "#                                      #\n";
		cout << "#      PROGRAM SEGITIGA SAMA KAKI      #\n";
		cout << "#                                      #\n";
		cout << "########################################\n\n";

		//deklarasi variabel
		int a, b, c, d;

		//menu input
		cout << "MASUKKAN JUMLAH BARIS SEGITIGA = ";
		cin >> a;

		//line spacing
		cout << endl;
		cout << "########################################\n\n";

		//rumus
		for (b = 1; b <= a; b++)
		{
			for (c = a; c > b; c--)
			{
				cout << " ";
			}
			for (d = 1; d <= (2 * b - 1); d++)
			{
				cout << "*";
			}
			cout << endl;
		}
		//footer
		cout << "\n\n########################################\n\n\n\n";

		(void)_getch();
		
	}
}