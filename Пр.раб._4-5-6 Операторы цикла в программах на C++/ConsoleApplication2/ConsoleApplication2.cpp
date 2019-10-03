#include <iostream>
using namespace std;

int main()
{
	int choosetask;
	int a, b, i, y, n;
	cout << "Welcome to prak 4-5." << endl;
	cout << "Type '1' for task 1, '2' for task 2, and '0' to exit." << endl;
	cin >> choosetask;

	switch (choosetask)
	{
		case 1: 
			cout << "Task 1." << endl;
			cout << "a: ";
			cin >> a;
			cout << "n: ";
			cin >> n;


			for (i = 1; i <= n; i++)
			{
				y = i * i + 2 * a / i;

			}

		cout << "y= " << y;
		exit(0);

		case 2:
			cout << "Task 2." << endl;
			cout << "a: ";
			cin >> a;
			cout << "b: ";
			cin >> b;

			for (i = a; i <= b; i++)
			{
				if (i % 2 == 0) {
					a = a * i;
				}


			}

			cout << "a= " << a;
			exit(0);
		
		case 0:
			cout << "Exiting the programm..." << endl;
			exit(0);



	default:
		cout << "You killed the programm." << endl;
		exit(0);

		break;
	}




	return 0;
}
