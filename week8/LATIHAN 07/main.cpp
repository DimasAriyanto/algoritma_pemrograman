/*
* demo array
*/

#include<iostream>
#include<array>

using namespace std;

int main()
{
	int i, n, jumlah = 0, terkecil, terbesar;

	cout << "Input banyak nilai :  ";
	cin >> n;
	int nilai['n'];

	for (i = 0; i < n; i++)
	{
		cout << "Input nilai ke-" << i + 1 << " :  ";
		cin >> nilai[i];
		jumlah = jumlah + nilai[i];
		if (i == 0)
		{
			terkecil = nilai[0];
			terbesar = nilai[0];
		}
		if (nilai[i] < terkecil)
		{
			terkecil = nilai[i];
		}
		if (nilai[i] > terkecil)
		{
			terbesar = nilai[i];
		}
	}

	cout << "\n== Data Nilai ==" << endl;
	for (i = 0; i < n; i++)
	{
		cout << "  " << nilai[i];
	}

	cout << "\nJumlah nilainya adalah :  " << jumlah;
	cout << "\nNilai terbesar :  " << terbesar;
	cout << "\nNilai terkecil :  " << terkecil;

	system("pause>0");
}