#include <iostream>

//deklarasi soal
int a = 250, b = 175, c = 35;
//deklarasi rumus
int pertambahan, pengurangan, pembagian, perkalian;

int main()
{
	//soal
	std::cout << "*******************************\n";
	std::cout << "#                             #\n";
	std::cout << "#       Soal Latihan 1 C      #\n";
	std::cout << "#       a = 250               #\n";
	std::cout << "#       b = 175               #\n";
	std::cout << "#       c = 35                #\n";
	std::cout << "#                             #\n";
	std::cout << "*******************************\n\n";

	//rumus
	pertambahan = a + b + c;
	pengurangan = a - b - c;
	pembagian   = a / b;
	perkalian   = a * c;

	//output
	std::cout << "*******************************\n";
	std::cout << "#                             #\n";
	std::cout << "#       Jawabannya adalah     #\n";
	std::cout << "#       a + b + c = " << pertambahan << "       #\n";
	std::cout << "#       a - b - c = " << pengurangan << "        #\n";
	std::cout << "#       a / b     = " << pembagian << "         #\n";
	std::cout << "#       a * c     = " << perkalian << "      #\n";
	std::cout << "#                             #\n";
	std::cout << "*******************************\n\n";
}