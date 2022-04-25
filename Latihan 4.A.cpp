#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

//deklarasi variabel rumus
void kuadrat(int *valPtr);
void hasil_kuadrat(int valPtr);
void akar(double &ref);
void hasil_akar(double nilai_ref);

int main()
{
	//looping
	int x = 0;
	while (x == 0) 
	{
		//system clear
		system("cls");

		//deklarasi input
		int input1;
		double input2;

		//header
		cout << "#########################################################\n";
		cout << "#                                                       #\n";
		cout << "#       PROGRAM PENGHITUNG KUADRAT DENGAN POINTER       #\n";
		cout << "#   PROGRAM PENGHITUNG AKAR KUADRAT DENGAN REFERENCE    #\n";
		cout << "#                                                       #\n";
		cout << "#########################################################\n\n";

		//input kuadrat
		cout << "# Program Kuadrat #\n\n";
		cout << "Masukkan Angka  = ";
		cin >> input1;
		cout << "Address Angka   = " << &input1 << endl;;

		//rumus kuadrat
		kuadrat(&input1);

		//hasil kuadrat
		hasil_kuadrat(input1);

		cout << "\n#########################################################\n\n";

		//input akar
		cout << "# Program Akar #\n\n";
		cout << "Masukkan Angka  = ";
		cin >> input2;
		cout << "Address Angka   = " << &input2 << endl;;

		//rumus akar
		akar(input2);

		//hasil akar
		hasil_akar(input2);

		cout << "\n#########################################################\n\n";

		(void)_getch();
	}
	return 0;
}

//rumus kuadrat
void kuadrat(int *valPtr)
{
	*valPtr = (*valPtr) * (*valPtr);
}

//hasil kuadrat
void hasil_kuadrat(int valPtr)
{
	cout << "Hasil Kuadrat   = " << valPtr << endl;
}

//rumus akar
void akar(double &nilai_ref)
{
	nilai_ref = sqrt(nilai_ref);
}

//hasil akar
void hasil_akar(double nilai_ref)
{
	cout << "Hasil Akar      = " << nilai_ref << endl;
}