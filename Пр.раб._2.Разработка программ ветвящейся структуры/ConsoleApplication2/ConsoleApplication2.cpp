#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() 
{
	int taskchosen;
	float x, y, z, e;
	cout << "1. Task 1" << endl;
	cout << "2. Task 2" << endl;
	cout << "0. Exit" << endl;
	cout << "Choose task:";
	cin >> taskchosen;
	switch (taskchosen)
	{
	case 1:
		cout << "You have chosen Task 1" << endl;

		cout << "X:";
		cin >> x;
		if (x < -5) {
			y = x + 5;
		}
		else if (x >= -5 && x <= 1) {
			y = 2 - x;
		}
		else y = 4;
		
		cout << "Y= " << y;

		exit(0);

	case 2: 
		cout << "You have chosen Task 2" << endl;
		cout << "X:";
		cin >> x;
		cout << "E:";
		cin >> e;
		cout << "Z:";
		cin >> z;

		y = sqrt(z - 2 * x) + sin( pow(e, x) - 1);

		cout << "Y= " << y;

		exit(0);
	case 0:
		exit(0);
	default: 
		cout << "You killed the programm!";
		break;
	}

	return 0;
}
