#include <iostream>
#include <math.h>
using namespace std;
main()
{
	float r, d, l, s;
	int choosecount;

	cout << "1. Radius" << endl;
	cout << "2. Diametr" << endl;
	cout << "3. Dlina" << endl;
	cout << "4. Ploshad'" << endl;
	cout << "0. Exit" << endl;
	cout << "Choose one:";
	cin >> choosecount;

	switch (choosecount)
	{
	case 1: 
		cout << "vvedite Radius: ";
		cin >> r;
		cout << "1.Radius = " << r << endl;
		d = 2 * r;
		cout << "2.Diametr = " << d << endl;
		l = 2 * 3.14 * r;
		cout << "3.Dlina = " << l << endl;
		s = 3.14 * r * r;
		cout << "4.Ploshad' = " << s << endl;
		exit(0);

	case 2: 
		cout << "vvedite Diametr: ";
		cin >> d;
		r = d / 2;
		cout << "1.Radius = " << r << endl;
		cout << "2.Diametr = " << d << endl;
		l = 2 * 3.14 * r;
		cout << "3.Dlina = " << l << endl;
		s = 3.14 * r * r;
		cout << "4.Ploshad' = " << s << endl;
		exit(0);

	case 3: 
		cout << "vvedite Dlinu: ";
		cin >> l;
		r = l / 2 / 3.14;
		cout << "1.Radius = " << r << endl;
		d = 2 * r;
		cout << "2.Diametr = " << d << endl;
		cout << "3.Dlina = " << l << endl;
		s = 3.14 * r * r;
		cout << "4.Ploshad' = " << s << endl;
		exit(0);

	case 4:
		cout << "vvedite Ploshad': ";
		cin >> s;
		r = sqrt(s / 3.14);
		cout << "1. Radius = " << r << endl;
		d = 2 * r;
		cout << "2. Diametr = " << d << endl;
		l = 2 * 3.14 * r;
		cout << "3. Dlina = " << l << endl;
		cout << "4. Ploshad' = " << s << endl;
		exit(0);

	case 0:
		exit(0);

	default:
		cout << "Congratulations! You just killed a programm!";
		exit(0);

		break;
	}


	return 0;
}
