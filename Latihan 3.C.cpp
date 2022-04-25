#include <iostream>

using namespace std;

//deklarasi variabel global
double luas_layang(double d1, double d2);
double keliling_layang(double s1, double s2);
double volume_kerucut(double luasalas, double tinggi);

//void output
void hasil_layang(double luaslayang);
void hasil_kerucut(double volumekerucut);
void hasil_keliling(double keliling);

int main()
{
	//header
	cout << "##############################################################\n";
	cout << "#                                                            #\n";
	cout << "#     PROGRAM PENGHITUNG LUAS DAN KELILING LAYANG-LAYANG     #\n";
	cout << "#                        VOLUME KERUCUT                      #\n";
	cout << "#                                                            #\n";
	cout << "##############################################################\n\n";

	//dekarasi variabel
	double d1, d2, s1, s2, luas, luasalas, tinggi, volume, keliling;

	//input luas layang-layang
	cout << "                    #  Luas Layang-layang  #                    \n\n";
	cout << "Masukan diagonal 1 = "; cin >> d1;
	cout << "Masukan diagonal 2 = "; cin >> d2;

	//rumus luas layang-layang
	luas = luas_layang(d1, d2);

	cout << "\n##############################################################\n\n";

	//input keliling layang-layang
	cout << "                  #  Keliling Layang-layang  #                  \n\n";
	cout << "Masukkan sisi 1    = "; cin >> s1;
	cout << "Masukkan sisi 2    = "; cin >> s2;

	//rumus keliling layang-layang
	keliling = keliling_layang(s1, s2);

	cout << "\n##############################################################\n\n";

	//input volume kerucut
	cout << "                       #  Volume Kerucut  #                     \n\n";
	cout << "Masukkan luas alas = ";  cin >> luasalas;
	cout << "Masukkan tinggi    = ";  cin >> tinggi;

	//rumus volume kerucut
	volume = volume_kerucut(luasalas, tinggi);

	cout << "\n##############################################################\n\n";

	//hasil operasi
	cout << "                       #  Hasil Operasi  #                      \n\n";
	hasil_layang(luas);
	hasil_keliling(keliling);
	hasil_kerucut(volume);
}

//program input rumus
double luas_layang(double d1, double d2) {
	return d1 * d2 / 2;
}

double keliling_layang(double s1, double s2) {
	return (s1 + s2) * 2;
}

double volume_kerucut(double luasalas, double tinggi) {
	return luasalas * tinggi / 3;
}


//program output rumus
void hasil_layang(double x) {
	cout << "Luas Layang-layang      = " << x << endl;
}

void hasil_keliling(double y) {
	cout << "Keliling Layang-layang  = " << y << endl;
}

void hasil_kerucut(double z) {
	cout << "Volume Kerucut          = " << z << endl;
}
