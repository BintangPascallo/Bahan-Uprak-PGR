#include <iostream>

using namespace std;

int main()
{
	cout << "############################################################################\n";
	//soal 
	cout << "# Buatlah program Komparasi dengan menggunakan boolean dengan variabel sbb #\n";
	cout << "# a = 23                                                                   #\n";
	cout << "# b = 21                                                                   #\n";
	cout << "############################################################################\n";

	//deklarasi variabel int
	int a = 23;
	int b = 21;

	//deklarasi variabel boolean
	bool output;

	// (a < b)
	cout << "\n************************************************************************\n";
	cout << "Apakah a kurang dari b?\n";
	output = (a < b);
	cout << "Jawaban = " << output << " ";
	if (output == 0) 
	{
		cout << "(False)\n";
	}
	else 
	{
		cout << "(True)\n";
	}
	
	// (a <= b)
	cout << "\n************************************************************************\n";
	cout << "\nApakah a kurang dari sama dengan b?\n";
	output = (a <= b);
	cout << "Jawaban = " << output << " ";
	if (output == 0)
	{
		cout << "(False)\n";
	}
	else
	{
		cout << "(True)\n";
	}

	// (a > b)
	cout << "\n************************************************************************\n";
	cout << "\nApakah a lebih dari b?\n";
	output = (a > b);
	cout << "Jawaban = " << output << " ";
	if (output == 0)
	{
		cout << "(False)\n";
	}
	else
	{
		cout << "(True)\n";
	}

	// (a >= b)
	cout << "\n************************************************************************\n";
	cout << "\nApakah a lebih dari sama dengan b?\n";
	output = (a >= b);
	cout << "Jawaban = " << output << " ";
	if (output == 0)
	{
		cout << "(False)\n";
	}
	else
	{
		cout << "(True)\n";
	}

	// (a == b)
	cout << "\n************************************************************************\n";
	cout << "\nApakah a sama dengan b?\n";
	output = (a == b);
	cout << "Jawaban = " << output << " ";
	if (output == 0)
	{
		cout << "(False)\n";
	}
	else
	{
		cout << "(True)\n";
	}

	// (a != b)
	cout << "\n************************************************************************\n";
	cout << "\nApakah a tidak sama dengan b?\n";
	output = (a != b);
	cout << "Jawaban = " << output << " ";
	if (output == 0)
	{
		cout << "(False)\n";
	}
	else
	{
		cout << "(True)\n";
	}

	// (a == 23) && (b == 21)
	cout << "\n************************************************************************\n";
	cout << "\nHasil Jika Operasi AND \n";
	cout << "a = 23 dan b = 21\n\n";
	output = (a == 23) && (b == 21);
	cout << "Jawaban = " << output << " ";
	if (output == 0)
	{
		cout << "(False)\n";
	}
	else
	{
		cout << "(True)\n";
	}

	// (a == 23) && (b == 20)
	cout << "\n************************************************************************\n";
	cout << "\nHasil Jika Operasi AND \n";
	cout << "a = 23 dan b = 20\n\n";
	output = (a == 23) && (b == 20);
	cout << "Jawaban = " << output << " ";
	if (output == 0)
	{
		cout << "(False)\n";
	}
	else
	{
		cout << "(True)\n";
	}

	// (a == 23) || (b == 19)
	cout << "\n************************************************************************\n";
	cout << "\nHasil Jika Operasi OR \n";
	cout << "a = 23 dan b = 19\n\n";
	output = (a == 23) || (b == 19);
	cout << "Jawaban = " << output << " ";
	if (output == 0)
	{
		cout << "(False)\n";
	}
	else
	{
		cout << "(True)\n";
	}

	// (a == 10) || (b == 11)
	cout << "\n************************************************************************\n";
	cout << "\nHasil Jika Operasi OR \n";
	cout << "a = 10 dan b = 11\n\n";
	output = (a == 10) || (b == 11);
	cout << "Jawaban = " << output << " ";
	if (output == 0)
	{
		cout << "(False)\n";
	}
	else
	{
		cout << "(True)\n";
	}

	cout << "\n************************************************************************\n";
}