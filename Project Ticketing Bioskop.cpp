#include <iostream>
#include <string>
#include <array>
#include <conio.h>
#include <fstream>
#include <stdlib.h>
#include <ctime>
#include <windows.h>

using namespace std;

ofstream file1;

struct listwaktu
{
	int no1_waktu1, no1_waktu2, no1_waktu3;
	int no2_waktu1, no2_waktu2, no2_waktu3;
	int no3_waktu1, no3_waktu2, no3_waktu3;
}waktu;

string confirm;

int user = 123, pass = 123;

//input
int date;
int code;
int cancel;
int no_film;
int no1_tempat, no2_tempat, no3_tempat;
int tiket_reguler, tiket_premium;
int total_reguler, total_premium, total_harga, x;

void login()
{
loop:
	system("cls");
	cout << "                 # LOGIN (ADMIN ONLY) # \n\n";

	cout << "                 # ID\t\t= ";
	cin >> user;

	cout << "                 # Password\t= ";
	cin >> pass;

	if (user == 123 && pass == 123)
	{
		cout << "\n                 # Login Success !!! ";
		(void)_getch();
		system("cls");
	}
	else
	{
		cout << "\n                 # Wrong Username Or Passowrd !!! ";
		(void)_getch();
		goto loop;
		system("cls");
	}
}

void menu()
{
	cout << endl;
	system("cls");
	cout << "                    ======================================================================================\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                         #   #          #   #          #                            |\n";
	cout << "                    |                          # #            # #           #                            |\n";
	cout << "                    |                           #              #            #                            |\n";
	cout << "                    |                          # #            # #           #                            |\n";
	cout << "                    |                         #   #          #   #          #                            |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                      # Cinema 21 # |\n";
	cout << "                    ======================================================================================\n";
	cout << "                                                                                                          \n";
	cout << "                    ======================================================================================\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |            =============          =============          =============             |\n";
	cout << "                    |            |           |          |           |          |           |             |\n";
	cout << "                    |            |           |          |           |          |           |             |\n";
	cout << "                    |            |           |          |           |          |           |             |\n";
	cout << "                    |            |           |          |           |          |           |             |\n";
	cout << "                    |            |           |          |           |          |           |             |\n";
	cout << "                    |            |           |          |           |          |           |             |\n";
	cout << "                    |            |           |          |           |          |           |             |\n";
	cout << "                    |            =============          =============          =============             |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                 [1]                    [2]                    [3]                  |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                    [1] Shang-Chi and the Legend of the Ten Rings                   |\n";
	cout << "                    |                    [2] Black Widow                                                 |\n";
	cout << "                    |                    [3] Fast & Furious 9                                            |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n";
	cout << "                                                                                                          \n";
	cout << "                                         [#] Select Movie Number = ";

	cin >> no_film;

	system("cls");
}

void film1()
{
	cout << endl;

	cout << "                    ======================================================================================\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                   =============                                    |\n";
	cout << "                    |                                   |           |                                    |\n";
	cout << "                    |                                   |           |                                    |\n";
	cout << "                    |                                   |           |                                    |\n";
	cout << "                    |                                   |           |                                    |\n";
	cout << "                    |                                   |           |                                    |\n";
	cout << "                    |                                   |           |                                    |\n";
	cout << "                    |                                   |           |                                    |\n";
	cout << "                    |                                   =============                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                        [1]                                         |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |          # Title          = Shang-Chi and the Legend of the Ten Rings              |\n";
	cout << "                    |          # Genre          = Action, Adventure, Fantasy                             |\n";
	cout << "                    |          # Producer       = Kevin Feige, Jonathan Schwartz                         |\n";
	cout << "                    |          # Director       = Destin Daniel Cretton                                  |\n";
	cout << "                    |          # Writer         = Dave Callaham, Destin Daniel Cretton, Andrew Lanham    |\n";
	cout << "                    |          # Production     = Walt Disney Pictures                                   |\n";
	cout << "                    |          # Casts          = Simu Liu, Awkwafina, Meng'er Zhang, Fala Chen,         |\n";
	cout << "                    |                             Florian Munteanu, Benedict Wong, Michelle Yeoh,        |\n";
	cout << "                    |                             Tony Leung                                             |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                    # SYNOPSIS #                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |     Shang-Chi (Simu Liu) harus menghadapi masa lalunya sebelum ia memilih untuk    |\n";
	cout << "                    |       meninggalkan dan bergabung ke dalam sebuah organisasi bernama Ten Rings.     |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                    132  Minutes                                    |\n";
	cout << "                    |                                      All Ages                                      |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                    # SCHEDULE #                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |           [1] Atrium XXI            [ 13.00 ]     [ 17.00 ]     [ 21.00 ]          |\n";
	cout << "                    |           [2] Grand Paragon XXI     [ 12.30 ]     [ 15.00 ]     [ 19.00 ]          |\n";
	cout << "                    |           [3] St. Moritz XXI        [ 11.00 ]     [ 16.00 ]     [ 20.00 ]          |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n";
	cout << "                                                                                                          \n";
	cout << "                                                 # Select A Place Number = ";
	cin >> no1_tempat;

	system("cls");
}

void film1mall1()
{
	cout << "                    ======================================================================================\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                      Atrium XXI                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |          # Floor          = ATRIUM SEGITIGA SENEN Lantai 4                         |\n";
	cout << "                    |          # Address        = Jl. Senen Raya No. 135 Senen                           |\n";
	cout << "                    |          # Province       = Jakarta Pusat                                          |\n";
	cout << "                    |          # Phone          = (021) 386 7830                                         |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                         Price                                      |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |          # Regular         = Rp 35.000,-                                           |\n";
	cout << "                    |          # Premium         = Rp 70.000,-                                           |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                    # SCHEDULE #                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |           [1] Atrium XXI            [ 13.00 ]     [ 17.00 ]     [ 21.00 ]          |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n";
	cout << "                                                                                                          \n";
	cout << "                                                  # Choose The Time Number = ";

	cin >> waktu.no1_waktu1;

	system("cls");
}

void film1mall2()
{
	cout << "                    ======================================================================================\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                   Grand Paragon XXI                                |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |          # Floor          = Grand Paragon Mall Lt.3                                |\n";
	cout << "                    |          # Address        = Jln. Gajah Mada No. 126                                |\n";
	cout << "                    |          # Province       = Jakarta Barat                                          |\n";
	cout << "                    |          # Phone          = (021) 29073151                                         |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                         Price                                      |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |          # Reguler         = Rp 35.000,-                                           |\n";
	cout << "                    |          # Premium         = Rp 70.000,-                                           |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                    # SCHEDULE #                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |           [2] Grand Paragon XXI     [ 12.30 ]     [ 15.00 ]     [ 19.00 ]          |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n";
	cout << "                                                                                                          \n";
	cout << "                                                  # Choose The Time Number = ";

	cin >> waktu.no1_waktu2;

	system("cls");
}

void film1mall3()
{
	cout << "                    ======================================================================================\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                   St. Moritz XXI                                   |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |          # Floor          = ST. MORITZ XXI Lt.1                                    |\n";
	cout << "                    |          # Address        = Jl. Puri Indah Raya Blok U1                            |\n";
	cout << "                    |          # Province       = Jakarta Barat                                          |\n";
	cout << "                    |          # Phone          = (021) 29111370                                         |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                         Price                                      |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |          # Reguler         = Rp 35.000,-                                           |\n";
	cout << "                    |          # Premium         = Rp 70.000,-                                           |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                    # SCHEDULE #                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |           [3] St. Moritz XXI        [ 11.00 ]     [ 16.00 ]     [ 20.00 ]          |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n";
	cout << "                                                                                                          \n";
	cout << "                                                  # Choose The Time Number = ";

	cin >> waktu.no1_waktu3;

	system("cls");
}

void film2()
{
	cout << endl;

	cout << "                    ======================================================================================\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                   =============                                    |\n";
	cout << "                    |                                   |           |                                    |\n";
	cout << "                    |                                   |           |                                    |\n";
	cout << "                    |                                   |           |                                    |\n";
	cout << "                    |                                   |           |                                    |\n";
	cout << "                    |                                   |           |                                    |\n";
	cout << "                    |                                   |           |                                    |\n";
	cout << "                    |                                   |           |                                    |\n";
	cout << "                    |                                   =============                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                        [2]                                         |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |          # Title          = Black Widow                                            |\n";
	cout << "                    |          # Producer       = Kevin Feige                                            |\n";
	cout << "                    |          # Director       = Cate Shortland                                         |\n";
	cout << "                    |          # Writer         = Eric Pearson                                           |\n";
	cout << "                    |          # Production     = Marvel Studios                                         |\n";
	cout << "                    |          # Casts          = Scarlett Johansson, Florence Pugh, Rachel Weisz,       |\n";
	cout << "                    |                             David Harbour, Yolanda Lynes, O-T Fagbenle,            |\n";
	cout << "                    |                             William Hurt, Ray Winstone, Olivier Richters,          |\n";
	cout << "                    |                             Ever Anderson                                          |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                    # SYNOPSIS #                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |         Natasha Romanoff (Scarlett Johansson) kembali ke kampung halamannya di     |\n";
	cout << "                    |        Rusia untuk menyelesaikan misi berbahaya. Disana, Natasha bertemu dengan    |\n";
	cout << "                    |            keluarga dari masa lalunya untuk melawan seorang musuh berbahaya        |\n";
	cout << "                    |                                   bernama Taskmaster.                              |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                    134  Minutes                                    |\n";
	cout << "                    |                                        A 13+                                       |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                    # SCHEDULE #                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |           [1] Bassura XXI           [ 09.00 ]     [ 13.00 ]     [ 18.00 ]          |\n";
	cout << "                    |           [2] Metropole XXI         [ 14.30 ]     [ 20.00 ]     [ 23.30 ]          |\n";
	cout << "                    |           [3] Senayan XXI           [ 12.00 ]     [ 17.00 ]     [ 21.00 ]          |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n";
	cout << "                                                                                                          \n";
	cout << "                                                 # Select A Place Number = ";

	cin >> no1_tempat;

	system("cls");
}

void film2mall1()
{
	cout << "                    ======================================================================================\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                      Bassura XXI                                   |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |          # Floor          = Bassura City Lt. 2                                     |\n";
	cout << "                    |          # Address        = Jl. Basuki Rahmat No. 1                                |\n";
	cout << "                    |          # Province       = Jakarta Timur                                          |\n";
	cout << "                    |          # Phone          = (021) 22807229                                         |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                         Price                                      |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |          # Reguler         = Rp 35.000,-                                           |\n";
	cout << "                    |          # Premium         = Rp 70.000,-                                           |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                    # SCHEDULE #                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |           [1] Bassura XXI           [ 09.00 ]     [ 13.00 ]     [ 18.00 ]          |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n";
	cout << "                                                                                                          \n";
	cout << "                                                  # Choose The Time Number = ";

	cin >> waktu.no2_waktu1;

	system("cls");
}

void film2mall2()
{
	cout << "                    ======================================================================================\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                    Metropole XXI                                   |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |          # Floor          = KOMP. MEGARIA                                          |\n";
	cout << "                    |          # Address        = Jl. Pegangsaan 21                                      |\n";
	cout << "                    |          # Province       = Jakarta Pusat                                          |\n";
	cout << "                    |          # Phone          = (021) 319 22 249                                       |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                         Price                                      |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |          # Reguler         = Rp 35.000,-                                           |\n";
	cout << "                    |          # Premium         = Rp 70.000,-                                           |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                    # SCHEDULE #                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |           [2] Metropole XXI         [ 14.30 ]     [ 20.00 ]     [ 23.30 ]          |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n";
	cout << "                                                                                                          \n";
	cout << "                                                  # Choose The Time Number = ";

	cin >> waktu.no2_waktu2;

	system("cls");
}

void film2mall3()
{
	cout << "                    ======================================================================================\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                     Senayan XXI                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |          # Floor          = SENAYAN CITY MAL Lantai 5                              |\n";
	cout << "                    |          # Address        = Jl. Asia Afrika LOT 19                                 |\n";
	cout << "                    |          # Province       = Jakarta Pusat                                          |\n";
	cout << "                    |          # Phone          = (021) 7278 1221                                        |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                         Price                                      |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |          # Reguler         = Rp 35.000,-                                           |\n";
	cout << "                    |          # Premium         = Rp 70.000,-                                           |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                    # SCHEDULE #                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |           [3] Senayan XXI           [ 12.00 ]     [ 17.00 ]     [ 21.00 ]          |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n";
	cout << "                                                                                                          \n";
	cout << "                                                  # Choose The Time Number = ";

	cin >> waktu.no2_waktu3;

	system("cls");
}

void film3()
{
	cout << endl;
	cout << "                    ======================================================================================\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                   =============                                    |\n";
	cout << "                    |                                   |           |                                    |\n";
	cout << "                    |                                   |           |                                    |\n";
	cout << "                    |                                   |           |                                    |\n";
	cout << "                    |                                   |           |                                    |\n";
	cout << "                    |                                   |           |                                    |\n";
	cout << "                    |                                   |           |                                    |\n";
	cout << "                    |                                   |           |                                    |\n";
	cout << "                    |                                   =============                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                        [3]                                         |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |          # Title          = Fast & Furious 9                                       |\n";
	cout << "                    |          # Producer       = Clayton Townsend, Jeff Kirschenbaum, Joe Roth,         |\n";
	cout << "                    |                             Justin Lin, Neal H.Moritz, Samantha Vincent,           |\n";
	cout << "                    |                             Vin Die                                                |\n";
	cout << "                    |          # Director       = Justin Lin                                             |\n";
	cout << "                    |          # Writer         = Daniel Casey                                           |\n";
	cout << "                    |          # Production     = Universal Pictures                                     |\n";
	cout << "                    |          # Casts          = Vin Diesel, Michelle Rodriguez, Tyrese Gibson,         |\n";
	cout << "                    |                             Nathalie Emmanuel, Sung Kang, Helen Mirren,            |\n";
	cout << "                    |                             Jordana Brewster, Charlize Theron, John Cena           |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                    # SYNOPSIS #                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |     Dom(Vin Diesel) kini hidup dengan tenang jauh dari orang lain dengan Letty     |\n";
	cout << "                    |       dan putranya, Brian, meskipun mereka menyadari bahwa bahaya akan dapat       |\n";
	cout << "                    |        dapat selalu mengancam ketenangan mereka. Kali ini, ancaman dari luar       |\n";
	cout << "                    |               memaksa Dom untuk menghadapi dosa - dosanya di masa lalu.            |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                     143  Minutes                                   |\n";
	cout << "                    |                                        A 13+                                       |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                    # SCHEDULE #                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |           [1] Pondok Indah XXI      [ 13.35 ]     [ 19.10 ]                        |\n";
	cout << "                    |           [2] Kelapa Gading XXI     [ 13:40 ]     [ 16.30 ]     [ 19.20 ]          |\n";
	cout << "                    |           [3] Puri Indah XXI        [ 13.20 ]     [ 16.10 ]     [ 19.00 ]          |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n";
	cout << "                                                                                                          \n";
	cout << "                                                 # Select A Place Number = ";

	cin >> no1_tempat;

	system("cls");
}

void film3mall1()
{
	cout << "                    ======================================================================================\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                  PONDOK INDAH MALL 1                               |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |          # Floor          = PONDOK INDAH MALL 1 Lt.2                               |\n";
	cout << "                    |          # Address        = Jl. Metro Pondok Indah No. 3B                          |\n";
	cout << "                    |          # Province       = Jawa Barat                                             |\n";
	cout << "                    |          # Phone          = (021) 750 6921                                         |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                         Price                                      |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |          # Reguler         = Rp 35.000,-                                           |\n";
	cout << "                    |          # Premium         = Rp 70.000,-                                           |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                    # SCHEDULE #                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |           [1] Pondok Indah XXI      [ 13.35 ]     [ 19.10 ]                        |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n";
	cout << "                                                                                                          \n";
	cout << "                                                  # Choose The Time Number = ";

	cin >> waktu.no3_waktu1;

	system("cls");
}

void film3mall2()
{
	cout << "                    ======================================================================================\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                 MALL KELAPA GADING 3                               |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |          # Floor          = MALL KELAPA GADING 3 Lt.3                              |\n";
	cout << "                    |          # Address        = Jl. Bulevar Kelapa Gading                              |\n";
	cout << "                    |          # Province       = Jawa Barat                                             |\n";
	cout << "                    |          # Phone          = (021) 458 53 821                                       |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                         Price                                      |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |          # Reguler         = Rp 35.000,-                                           |\n";
	cout << "                    |          # Premium         = Rp 70.000,-                                           |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                    # SCHEDULE #                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |           [2] Kelapa Gading XXI     [ 13:40 ]     [ 16.30 ]     [ 19.20 ]          |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n";
	cout << "                                                                                                          \n";
	cout << "                                                  # Choose The Time Number = ";

	cin >> waktu.no3_waktu2;

	system("cls");
}

void film3mall3()
{
	cout << "                    ======================================================================================\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                      PURI INDAH MALL                               |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |          # Floor          = PURI INDAH MALL Lt.2                                   |\n";
	cout << "                    |          # Address        = Jl. Puri Indah Raya                                    |\n";
	cout << "                    |          # Province       = Jawa Barat                                             |\n";
	cout << "                    |          # Phone          = (021) 582 2285                                         |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                         Price                                      |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |          # Reguler         = Rp 35.000,-                                           |\n";
	cout << "                    |          # Premium         = Rp 70.000,-                                           |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                    # SCHEDULE #                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |           [3] Puri Indah XXI        [ 13.20 ]     [ 16.10 ]     [ 19.00 ]          |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n";
	cout << "                                                                                                          \n";
	cout << "                                                  # Choose The Time Number = ";

	cin >> waktu.no3_waktu3;

	system("cls");
}


void tiket()
{
	cout << "                    ======================================================================================\n";
	cout << "                    |     |                                                                        |     |\n";
	cout << "                    |     |========================================================================|     |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |       [ A1 ]  [ A2 ]  [ A3 ]  [ A4 ]  [ A5 ]  [ A6 ]  [ A7 ]  [ A8 ]  [ A9 ]       |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |       [ B1 ]  [ B2 ]  [ B3 ]  [ B4 ]  [ B5 ]  [ B6 ]  [ B7 ]  [ B8 ]  [ B9 ]       |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |           [     P1     ]  [     P2     ]  [     P3     ]  [     P4     ]           |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                  # INFORMATION #                                   |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                  [A] Regular seat                                  |\n";
	cout << "                    |                                  [B] Regular seat                                  |\n";
	cout << "                    |                                  [P] Premium seat                                  |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                  # Regular                             # Premium                   |\n";
	cout << "                    |                  - Free Soft Drink                     - Free Soft Drink           |\n";
	cout << "                    |                  - Free Popcorn                        - Free Popcorn              |\n";
	cout << "                    |                                                        - Free Popcorn Refill       |\n";
	cout << "                    |                                                        - Premium Seat              |\n";
	cout << "                    |                                                        - Free Blanket              |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                       # PRICE #                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                               [1] Regular    = Rp 35.000,-                         |\n";
	cout << "                    |                               [2] Premium    = Rp 70.000,-                         |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n\n";
}

void jumlahiket()
{
	cout << "                                                             # TICKET #                                   \n\n";
	cout << "                                                      Buy Regular Ticket(s) = ";
	cin >> tiket_reguler;
	cout << endl;
	cout << "                                                      Buy Premium Ticket(s) = ";
	cin >> tiket_premium;

	cout << endl;

	system("cls");
}

void tanggal()
{
	system("cls");

	cout << "                    ======================================================================================\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                        # DATE #                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                               [1] Saturday 2 October 2021                          |\n";
	cout << "                    |                               [2] Sunday   3 October 2021                          |\n";
	cout << "                    |                               [3] Monday   4 October 2021                          |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n\n";

	cout << "                                                    [#] Choose The Date = ";
	cin >> date;

}

string input = "X";
int pilih;
int i;

array <string, 9> seatA{ "1", "2" , "3" ,"4" ,"5", "6", "7" , "8" , "9" };
array <string, 9> seatB{ "1", "2" , "3" ,"4" ,"5", "6", "7" , "8" , "9" };
array <string, 4> seatP{ "1", "2" , "3" ,"4" };

void kursia()
{
loop:

	system("cls");

	cout << "                    ======================================================================================\n";
	cout << "                    |     |                                                                        |     |\n";
	cout << "                    |     |========================================================================|     |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |          A [ " << seatA.at(0) << " ]  [ " << seatA.at(1) << " ]  [ " << seatA.at(2) << " ]  [ " << seatA.at(3) << " ]  [ " << seatA.at(4) << " ]  [ " << seatA.at(5) << " ]  [ " << seatA.at(6) << " ]  [ " << seatA.at(7) << " ]  [ " << seatA.at(8) << " ]           |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |          B [ " << seatB.at(0) << " ]  [ " << seatB.at(1) << " ]  [ " << seatB.at(2) << " ]  [ " << seatB.at(3) << " ]  [ " << seatB.at(4) << " ]  [ " << seatB.at(5) << " ]  [ " << seatB.at(6) << " ]  [ " << seatB.at(7) << " ]  [ " << seatB.at(8) << " ]           |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |          P  [     " << seatP.at(0) << "     ]  [     " << seatP.at(1) << "     ]  [     " << seatP.at(2) << "     ]  [     " << seatP.at(3) << "     ]             |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n\n";
	cout << "                          [#] Ordered Ticket\n\n";
	cout << "                          [1] Regular Ticket         = " << tiket_reguler << " Tickets" << endl;
	cout << "                          [2] Premium Ticket         = " << tiket_premium << " Tickets" << endl << endl;
	cout << "                          [#] Press 0 To Choose The Next Seat\n\n";

	cout << "                                                       # Choose The Seat #\n\n";
	cout << "                                                           Seat A = ";
	cin >> i;
	switch (i)
	{
	case 0:
		break;

	default:
		i = i - 1;
		seatA[i] = input;
		cout << endl;

		seatA[i] = input;

		seatA[i].replace(0, 20, input);

		cout << endl;
		goto loop;
		break;
	}
}

void kursib()
{
loop:

	system("cls");


	cout << "                    ======================================================================================\n";
	cout << "                    |     |                                                                        |     |\n";
	cout << "                    |     |========================================================================|     |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |          A [ " << seatA.at(0) << " ]  [ " << seatA.at(1) << " ]  [ " << seatA.at(2) << " ]  [ " << seatA.at(3) << " ]  [ " << seatA.at(4) << " ]  [ " << seatA.at(5) << " ]  [ " << seatA.at(6) << " ]  [ " << seatA.at(7) << " ]  [ " << seatA.at(8) << " ]           |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |          B [ " << seatB.at(0) << " ]  [ " << seatB.at(1) << " ]  [ " << seatB.at(2) << " ]  [ " << seatB.at(3) << " ]  [ " << seatB.at(4) << " ]  [ " << seatB.at(5) << " ]  [ " << seatB.at(6) << " ]  [ " << seatB.at(7) << " ]  [ " << seatB.at(8) << " ]           |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |          P  [     " << seatP.at(0) << "     ]  [     " << seatP.at(1) << "     ]  [     " << seatP.at(2) << "     ]  [     " << seatP.at(3) << "     ]             |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n\n";

	cout << "                          [#] Ordered Ticket\n\n";
	cout << "                          [1] Regular Ticket         = " << tiket_reguler << " Tickets" << endl;
	cout << "                          [2] Premium Ticket         = " << tiket_premium << " Tickets" << endl << endl;
	cout << "                          [#] Press 0 To Choose The Next Seat\n\n";

	cout << "                                                       # Choose The Seat #\n\n";
	cout << "                                                           Seat B = ";
	cin >> i;
	switch (i)
	{
	case 0:
		break;

	default:
		i = i - 1;
		seatB[i] = input;
		cout << endl;

		seatB[i] = input;

		seatB[i].replace(0, 20, input);

		cout << endl;
		goto loop;
		break;
	}
}

void kursip()
{
loop:

	system("cls");


	cout << "                    ======================================================================================\n";
	cout << "                    |     |                                                                        |     |\n";
	cout << "                    |     |========================================================================|     |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |          A [ " << seatA.at(0) << " ]  [ " << seatA.at(1) << " ]  [ " << seatA.at(2) << " ]  [ " << seatA.at(3) << " ]  [ " << seatA.at(4) << " ]  [ " << seatA.at(5) << " ]  [ " << seatA.at(6) << " ]  [ " << seatA.at(7) << " ]  [ " << seatA.at(8) << " ]           |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |          B [ " << seatB.at(0) << " ]  [ " << seatB.at(1) << " ]  [ " << seatB.at(2) << " ]  [ " << seatB.at(3) << " ]  [ " << seatB.at(4) << " ]  [ " << seatB.at(5) << " ]  [ " << seatB.at(6) << " ]  [ " << seatB.at(7) << " ]  [ " << seatB.at(8) << " ]           |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |          P  [     " << seatP.at(0) << "     ]  [     " << seatP.at(1) << "     ]  [     " << seatP.at(2) << "     ]  [     " << seatP.at(3) << "     ]             |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n\n";

	cout << "                          [#] Ordered Ticket\n\n";
	cout << "                          [1] Regular Ticket         = " << tiket_reguler << " Tickets" << endl;
	cout << "                          [2] Premium Ticket         = " << tiket_premium << " Tickets" << endl << endl;
	cout << "                          [#] Press 0 To Choose The Next Seat\n\n";

	cout << "                                                       # Choose The Seat #\n\n";
	cout << "                                                           Seat P = ";
	cin >> i;
	switch (i)
	{
	case 0:
		break;

	default:
		i = i - 1;
		seatP[i] = input;
		cout << endl;

		seatP[i] = input;

		seatP[i].replace(0, 20, input);

		cout << endl;
		goto loop;
		break;
	}
}


void harga_total(int tiket_reguler, int tiket_premium, int total_reguler, int total_premium, int total_harga);


void harga_total(int tiket_reguler, int tiket_premium, int total_reguler, int total_premium, int total_harga)
{
	total_reguler = tiket_reguler * 35000;
	total_premium = tiket_premium * 70000;
	total_harga = total_reguler + total_premium;

	system("cls");
	cout << "                    ======================================================================================\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    |                                       # RECEIPT #                                  |\n";
	cout << "                    |                                                                                    |\n";
	cout << "                    ======================================================================================\n\n";

	cout << "                                           [1] Regular Ticket         = " << tiket_reguler << " Tickets" << endl;
	cout << "                                           [2] Premium Ticket         = " << tiket_premium << " Tickets" << endl;
	cout << "                                           [3] Regular Price          = Rp " << total_reguler << ",-" << endl;
	cout << "                                           [4] Premium Price          = Rp " << total_premium << ",-" << endl;
	cout << "                                           [5] Total Tickets Price    = Rp " << total_harga << ",-" << endl << endl;

	switch (date)
	{
	case 1:
		cout << "                                           [#] Saturday 2 October 2021\n";
		break;

	case 2:
		cout << "                                           [#] Sunday   3 October 2021\n";
		break;

	case 3:
		cout << "                                           [#] Monday   4 October 2021\n";
		break;
	}

}

void cancelmenu()
{
	cout << "\n\n                    # Press 1 To Proccess This Order  \n";
	cout << "                    # Press 0 To Cancel This Order  \n\n";
	cout << "                    # Confirmation = ";
	cin >> cancel;
	(void)_getch();
}

void transaksi()
{
	system("cls");

payloop:
	cout << endl << endl << endl << endl << endl << endl << endl;
	cout << "                                # Confirmation Menu #\n\n";

	cout << "                    # Enter Your Name For Confirmation = ";
	cin >> confirm;
	cout << endl;
	cout << "                    # Confirm Passowrd For The Payment = ";
	cin >> pass;

	switch (pass)
	{

	case 123:
		srand(time_t(NULL));
		code = rand() % 1000;

		file1.open("Struk_Pembayaran.txt");

		file1 << "             # Receipt #\n";

		file1 << "\n Name                    = " << confirm;
		file1 << "\n Regular Ticket          = " << tiket_reguler << " Tickets";
		file1 << "\n Premium Ticket          = " << tiket_premium << " Tickets";
		file1 << "\n Regular Price           = Rp " << tiket_reguler * 35000 << ",-";
		file1 << "\n Premium Price           = Rp " << tiket_premium * 70000 << ",-";
		file1 << "\n Total Tickets Price     = Rp " << tiket_reguler * 35000 + tiket_premium * 70000 << ",-";
		file1 << "\n Code For Scan           = " << &code;
		file1 << "\n Struct Code             = #" << code;


		file1 << endl << endl;

		switch (date)
		{
		case 1:
			file1 << " # Saturday 2 October 2021\n";
			break;

		case 2:
			file1 << " # Sunday 3 October 2021\n";
			break;

		case 3:
			file1 << " # Monday 4 October 2021\n";
			break;
		}

		file1 << "\n Thanks For Your Transaction !\n";
		file1.close();

		system("cls");
		cout << endl << endl << endl << endl << endl << endl << endl;
		cout << "\n                           # Receipt Was Successfully Saved #\n\n";
		cout << "\n                           # Thanks For Your Transaction !! # \n";

		break;

	default:
		system("cls");
		cout << "\n # Wrong Password # \n";
		goto payloop;
	}

	(void)_getch();
}

int main()
{
	system("color 70");

	login();

menu:
	menu();

	switch (no_film)
	{
	case 1:
		//film 1
		film1();

		switch (no1_tempat)
		{
		case 1:
			film1mall1();
			switch (waktu.no1_waktu1)
			{
			case 1:
				//jam 1
				cout << "Time = 13.00\n";

				tiket();
				jumlahiket();

				break;

			case 2:
				//jam 2
				cout << "Time = 17.00\n";

				tiket();
				jumlahiket();

				break;

			case 3:
				//jam 3
				cout << "Time = 21.00\n";

				tiket();
				jumlahiket();

				break;

			default:
				goto menu;
				break;
			}
			break;

		case 2:
			film1mall2();

			switch (waktu.no1_waktu2)
			{
			case 1:
				//jam 1
				cout << "Time = 12.30\n";

				tiket();
				jumlahiket();

				break;

			case 2:
				//jam 2
				cout << "Time = 15.00\n";

				tiket();
				jumlahiket();

				break;

			case 3:
				//jam 3
				cout << "Time = 19.00\n";

				tiket();
				jumlahiket();

				break;

			default:
				goto menu;
				break;
			}
			break;

		case 3:
			film1mall3();
			switch (waktu.no1_waktu3)
			{
			case 1:
				//jam 1
				cout << "Time = 11.00\n";

				tiket();
				jumlahiket();

				break;

			case 2:
				//jam 2
				cout << "Time = 16.00\n";

				tiket();
				jumlahiket();

				break;

			case 3:
				//jam 3
				cout << "Time = 20.00\n";

				tiket();
				jumlahiket();

				break;

			default:
				goto menu;
				break;
			}
			break;

		default:
			goto menu;
			break;
		}
		break;

	case 2:
		//film 2
		film2();

		switch (no1_tempat)
		{
		case 1:
			film2mall1();
			switch (waktu.no2_waktu1)
			{
			case 1:
				//jam 1
				cout << "Time = 09.00\n";

				tiket();
				jumlahiket();

				break;

			case 2:
				//jam 2
				cout << "Time = 13.00\n";

				tiket();
				jumlahiket();

				break;

			case 3:
				//jam 3
				cout << "Time = 18.00\n";

				tiket();
				jumlahiket();

				break;

			default:
				goto menu;
				break;
			}

			break;

		case 2:
			film2mall2();
			switch (waktu.no2_waktu2)
			{
			case 1:
				//jam 1
				cout << "Time = 09.00\n";

				tiket();
				jumlahiket();

				break;

			case 2:
				//jam 2
				cout << "Time = 13.00\n";

				tiket();
				jumlahiket();

				break;

			case 3:
				//jam 3
				cout << "Time = 18.00\n";

				tiket();
				jumlahiket();

				break;

			default:
				goto menu;
				break;
			}
			break;

		case 3:
			film2mall3();
			switch (waktu.no2_waktu3)
			{
			case 1:
				//jam 1
				cout << "Time = 12.00\n";


				tiket();
				jumlahiket();

				break;

			case 2:
				//jam 2
				cout << "Time = 17.00\n";

				tiket();
				jumlahiket();

				break;

			case 3:
				//jam 3
				cout << "Time = 21.00\n";

				tiket();
				jumlahiket();

				break;

			default:
				goto menu;
				break;
			}
			break;

		default:
			goto menu;
			break;
		}
		break;

	case 3:
		//film 3
		film3();

		switch (no1_tempat)
		{
		case 1:
			film3mall1();
			switch (waktu.no3_waktu1)
			{
			case 1:
				//jam 1
				cout << "Time = 13.35\n";

				tiket();
				jumlahiket();
				break;

			case 2:
				//jam 2
				cout << "Time = 19.10\n";

				tiket();
				jumlahiket();
				break;

			default:
				goto menu;
				break;
			}
			break;

		case 2:
			film3mall2();
			switch (waktu.no3_waktu2)
			{
			case 1:
				//jam 1
				cout << "Time = 13.40\n";

				tiket();
				jumlahiket();

				break;

			case 2:
				//jam 2
				cout << "Time = 16.30\n";

				tiket();
				jumlahiket();

				break;

			case 3:
				//jam 3
				cout << "Time = 19.20\n";

				tiket();
				jumlahiket();

				break;

			default:
				goto menu;
				break;
			}
			break;

		case 3:
			film3mall3();
			switch (waktu.no3_waktu3)
			{
			case 1:
				//jam 1
				cout << "Time = 13.20\n";

				tiket();
				jumlahiket();

				break;

			case 2:
				//jam 2
				cout << "Time = 16.10\n";

				tiket();
				jumlahiket();

				break;

			case 3:
				//jam 3
				cout << "Time = 19.00\n";

				tiket();
				jumlahiket();

				break;

			default:
				goto menu;
				break;
			}

			break;

		default:
			goto menu;
			break;
		}
		break;

	default:
		goto menu;
		break;
	}

	tanggal();

	harga_total(tiket_reguler, tiket_premium, total_reguler, total_premium, total_harga);

	cancelmenu();
	if (cancel == 0)
	{
		goto menu;
	}
	else
	{
		cout << "\n                    # Order Success !!!\n";
		(void)_getch();
	}

	system("cls");

	kursia();
	kursib();
	kursip();

	transaksi();

	(void)_getch();
	return 0;
}