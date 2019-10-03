#include <iostream>

#include <math.h>

using namespace std;

int vic(int x, int y, int z)

{

	int s, p;

	s = x + y + z;

	p = x * y * z;

	cout << "Сумма равна " << s << endl;

	cout << "Произведение равно " << p << endl;

	return 0;

}

int main()

{

	int x, y, z;

	cout << "x:";
	cin >> x;
	cout << "y: ";
	cin >> y;
	cout << "z: ";
	cin >> z;

	vic(x, y, z);

	return 0;

}