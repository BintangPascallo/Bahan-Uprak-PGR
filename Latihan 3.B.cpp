#include <iostream>
#include <cstdlib>  //clear system
#include <ctime> //randomize
#include <conio.h> //system pause

using namespace std;

int main()
{
	//deklarasi char
	char x;

	//loop
	while (true)
	{
		//system clear
		system("cls");

		//header
		cout << "###########################\n";
		cout << "#                         #\n";
		cout << "#    MARI LEMPAR DADU!    #\n";
		cout << "#                         #\n";
		cout << "###########################\n\n";
		cout << "1) YES (ROLL)\n";
		cout << "2) NO  (OUT)\n\n";
		cout << "CHOOSE >>> ";
		cin >> x;
		cout << "\n###########################\n\n";

		//looping
		if (x == '1')
		{
			//randomizer
			srand(time(NULL));
			int fortune = 1 + rand() % 6;
			cout << "  HASIL LEMPAR DADU \n\n";

			//hasil jika
			if (fortune == 1)
			{
				cout << "    =============" << endl;
				cout << "    |           |" << endl;
				cout << "    |     O     |" << endl;
				cout << "    |           |" << endl;
				cout << "    =============" << endl;
			}
			else if (fortune == 2)
			{
				cout << "    =============" << endl;
				cout << "    | O         |" << endl;
				cout << "    |           |" << endl;
				cout << "    |         O |" << endl;
				cout << "    =============" << endl;
			}
			else if (fortune == 3)
			{
				cout << "    =============" << endl;
				cout << "    | O         |" << endl;
				cout << "    |     O     |" << endl;
				cout << "    |         O |" << endl;
				cout << "    =============" << endl;
			}
			else if (fortune == 4)
			{
				cout << "    =============" << endl;
				cout << "    | O       O |" << endl;
				cout << "    |           |" << endl;
				cout << "    | O       O |" << endl;
				cout << "    =============" << endl;
			}
			else if (fortune == 5)
			{
				cout << "    =============" << endl;
				cout << "    | O       O |" << endl;
				cout << "    |     O     |" << endl;
				cout << "    | O       O |" << endl;
				cout << "    =============" << endl;
			}
			else
			{
				cout << "    =============" << endl;
				cout << "    | O       O |" << endl;
				cout << "    | O       O |" << endl;
				cout << "    | O       O |" << endl;
				cout << "    =============" << endl;
			}
		}
		else if (x == '2')
		{
			cout << "TERIMAKASIH" << "\n\n";
			break;
		}
		else
		{
			cout << "WARNING = PILIH 1 ATAU 2\n" << endl;
		}
		(void)_getch();
	}
}