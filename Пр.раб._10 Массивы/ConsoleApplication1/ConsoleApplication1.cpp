#include <iostream>

using namespace std;

void output(int mat[100][100], int n, int m);
void input(int mat[100][100], int n, int m);
void sqevenmat(int mat[100][100], int n, int m);
void transport(int mat[100][100], int m);

int main()
{
	int mat[100][100];
	int m, n;

	cout << "Vvedite m(ot 0 do 100) = ";
	cin >> m;

	cout << "Vvedite n(ot 0 do 100)= ";
	cin >> n;

	if ((n > 100) || (m > 100))
	{
		cout << "Err";
		main();
	}
	input(mat, n, m);
	output(mat, n, m);
	cout << endl;
	transport(mat, m);
	output(mat, n, m);
	sqevenmat(mat, n, m);
	output(mat, n, m);

	system("pause");

	return 0;
}

void output(int mat[100][100], int n, int m)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
}

void input(int mat[100][100], int n, int m)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Mat[" << i + 1 << ";" << j + 1 << "]=";
			cin >> mat[i][j];
		}
	}
}

void sqevenmat(int mat[100][100], int n, int m)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (!(mat[i][j] % 2 == 0))
			{
				mat[i][j] *= mat[i][j];
			}
		}
	}
}

void transport(int mat[100][100], int m)
{
	for (int j = 0; j < m; j++)
		for (int i = 0; i < m; i++)
		{
			if (mat[i][0] % 2 == 0)
			{
				int buf = mat[i + 1][0];
				mat[i + 1][0] = mat[i][0];
				mat[i][0] = buf;

			}
		}
}