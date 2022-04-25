#include <iostream>
#include <math.h>
#include <iomanip>
#include <conio.h>

using namespace std;

//define variabel
double phi = 3.14159265358979;
double g = 10;

int main()
{
	//looping program
	int x = 0;
	while (x == 0) 
	
	{
		//clear system
		system("cls");

		//header
		cout << "##############################################\n";
		cout << "#                                            #\n";
		cout << "#  ~~  PROGRAM PENGHITUNG XMAX DAN HMAX  ~~  #\n";
		cout << "#                                            #\n";
		cout << "##############################################\n\n";

		//deklarasi variabel
		double v, sudut, hmax, xmax, sinx, cosx;

		//input
		cout << "#) Masukkan nilai v (m/s)   = ";
		cin >> v;
		cout << endl;
		cout << "#) Masukkan sudut (derajat) = ";
		cin >> sudut;
		cout << "\n##############################################\n\n";

		//pengubah sudut dari radian
		sinx = sin(sudut * phi / 180);
		cosx = cos(sudut * phi / 180);

		//rumus
		hmax = pow(v, 2) * (sinx * sinx) / (2 * g);
		xmax = pow(v, 2) * (2 * sinx * cosx) / g;

		//output
		cout << "Sudut Sin = " << sinx << endl;
		cout << "Sudut Cos = " << cosx << endl;
		cout << "\n##############################################\n\n";

		cout << "Hasil = \n\n";
		cout << "h max     = (v * v) * (sin(x) * sin(x) / (2 * g)\n";
		cout << "          = (" << v << " * " << v << ") * (" << sinx << " * " << sinx << ")" << " / (2 * " << g << ")\n";
		cout << setprecision (3) << "          = " << hmax << " m \n\n";

		cout << "x max     = (v * v) * (2 * sin(x) * cos(x)) / g\n";
		cout << "          = (" << v << " * " << v << ") * (2 * " << sinx << " * " << cosx << ")" << " / " << g << "\n";
		cout << setprecision(3) << "          = " << xmax << " m \n";

		//footer
		cout << "\n##############################################\n\n";

		//system pause
		(void)_getch();
	}
}