#include <iostream>
using namespace std;

int main()
{
	int a, y, x;
	cout << "x: ";
	cin >> x;
	cout << "a: ";
	cin >> a;

	y = a * a * a - (x * x + 1);

	cout << "Y= " << y;



	return 0;
}