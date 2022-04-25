#include <iostream>

using namespace std;

int main()
{

	//soal
	cout << "********************************************************************************\n";
	cout << "Buatlah tampilan program untuk menampilkan size(byte) max dan min tipe tipe data\n";
	cout << "********************************************************************************\n\n\n";
	
	cout << "********************************************************************************\n";

	//bilangan bulat int
	int a = 7;

	cout << "Tipe Data int\n";
	cout << "Nilai Variabel int                  = " << a << "\n";
	cout << "Nilai Byte int                      = " << sizeof(a) << " byte" << "\n";
	cout << "Nilai Limit Max int                 = " << numeric_limits<int>::max() << "\n";
	cout << "Nilai Limit Min int                 = " << numeric_limits<int>::min() << "\n\n";

	cout << "********************************************************************************\n";

	//bilangan bulat unsigned int
	unsigned int b = 7;

	cout << "Tipe Data unsigned int\n";
	cout << "Nilai Variabel unsigned int         = " << b << "\n";
	cout << "Nilai Byte unsigned int             = " << sizeof(b) << " byte" << "\n";
	cout << "Nilai Limit Max unsigned int        = " << numeric_limits<unsigned int>::max() << "\n";
	cout << "Nilai Limit Min unsigned int        = " << numeric_limits<unsigned int>::min() << "\n\n";

	cout << "********************************************************************************\n";

	//bilangan bulat long
	long c = 7;

	cout << "Tipe Data long\n";
	cout << "Nilai Variabel long                 = " << c << "\n";
	cout << "Nilai Byte long                     = " << sizeof(c) << " byte" << "\n";
	cout << "Nilai Limit Max long                = " << numeric_limits<long>::max() << "\n";
	cout << "Nilai Limit Min long                = " << numeric_limits<long>::min() << "\n\n";

	cout << "********************************************************************************\n";

	//bilangan bulat short
	short d = 7;

	cout << "Tipe Data short\n";
	cout << "Nilai Variabel short                = " << d << "\n";
	cout << "Nilai Byte short                    = " << sizeof(d) << " byte" << "\n";
	cout << "Nilai Limit Max short               = " << numeric_limits<short>::max() << "\n";
	cout << "Nilai Limit Min short               = " << numeric_limits<short>::min() << "\n\n";

	cout << "********************************************************************************\n";

	//bilangan bulat float
	float e = 7.0;

	cout << "Tipe Data float\n";
	cout << "Nilai Variabel float                = " << e << "\n";
	cout << "Nilai Byte float                    = " << sizeof(e) << " byte" << "\n";
	cout << "Nilai Limit Max float               = " << numeric_limits<float>::max() << "\n";
	cout << "Nilai Limit Min float               = " << numeric_limits<float>::min() << "\n\n";

	cout << "********************************************************************************\n";

	//bilangan bulat double
	double f = 7.7;

	cout << "Tipe Data double\n";
	cout << "Nilai Variabel double               = " << f << "\n";
	cout << "Nilai Byte double                   = " << sizeof(f) << " byte" << "\n";
	cout << "Nilai Limit Max double              = " << numeric_limits<double>::max() << "\n";
	cout << "Nilai Limit Min double              = " << numeric_limits<double>::min() << "\n\n";

	cout << "********************************************************************************\n";

	//character
	char g = 'b';

	cout << "Tipe Data char\n";
	cout << "Nilai char                          = " << g << "\n";
	cout << "Nilai byte char                     = " << sizeof(f) << " byte" << "\n";
	cout << "Nilai Limit Max char                = " << numeric_limits<char>::max() << "\n";
	cout << "Nilai Limit Min char                = " << numeric_limits<char>::min() << "\n\n";

	cout << "********************************************************************************\n";

	//boolean true
	bool h = true;

	cout << "Tipe Data boolean true\n";
	cout << "Nilai Variabel bool true            = " << h << "\n";
	cout << "Nilai Byte bool true                = " << sizeof(h) << " byte" << "\n";
	cout << "Nilai Limit Max bool true           = " << numeric_limits<bool>::max() << "\n";
	cout << "Nilai Limit Min bool true           = " << numeric_limits<bool>::min() << "\n\n";

	cout << "********************************************************************************\n";

	//boolean false
	bool i = false;

	cout << "Tipe Data boolean false\n";
	cout << "Nilai Variabel bool false           = " << i << "\n";
	cout << "Nilai Byte double                   = " << sizeof(i) << " byte" << "\n";
	cout << "Nilai Limit Max bool false          = " << numeric_limits<bool>::max() << "\n";
	cout << "Nilai Limit Min bool false          = " << numeric_limits<bool>::min() << "\n\n";

	cout << "********************************************************************************\n";
}