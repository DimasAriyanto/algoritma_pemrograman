/*
* demo array dua dimensi
* by dimas ariyanto
*/

#include <iostream>
using namespace std;

int main()
{
	int n, m;
	int a['n']['m']; //membuat ordo matrik 2x3
	cout << "input ordo metrix :  ";
	cin >> n;
	cout << "input ordo metrix :  ";
	cin >> m;
	//mengisi nilai ordo matrik 2x3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "Inputkan nilai index ke-[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}

	//menampilkan nilai ordo matrik 2x3
	cout << "\nNilai matrik " << n << " x " << m;
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		for (int j = 0; j < m; j++)
		{
			cout << a[i][j] << " ";
		}
	}

	system("pause>0");

}