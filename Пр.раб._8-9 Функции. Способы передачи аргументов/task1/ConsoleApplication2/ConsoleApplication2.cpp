#include <iostream>

#include <math.h>

using namespace std;

int vic(int a, float a1)

{

	int s;

	s = a * a * sin(a1);

	return s;

}

int main()

{

	int a, o;
	float a1;

	cout << "vvedite storonu romba 'a':";
	cin >> a;
	cout << "vvedite ugol romba 'a1' v radianah: ";
	cin >> a1;

	o = vic(a, a1);

	cout << o << endl;

	return 0;

}