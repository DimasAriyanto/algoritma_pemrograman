/*
* demo liner/sequential search (1)
* by dimas ariyanto 21.11.4408
*/

#include<iostream>

using namespace std;

int main()
{
	int data[5] = { 20,37,42,77,89 };
	int cari, ditemukan = 0;

	cout << "Data Array\n";
	for (int i = 0; i < 5; i++)
	{
		cout << data[i] << " ";
	}

	cout << "\nMasukka nilai yang anda cari :  ";
	cin >> cari;

	for (int i = 0; i < 5; i++) 
	{
		if (data[i] == cari)
		{
			ditemukan = 1;
			cout << "Nilai yang anda cari tedapat pada data ke " << i + 1;
			break;
		}
	}
	if (ditemukan == 0)
	{
		cout << "Nilai yang dicari tidak ditemukan";
	}

	system("pause>0");
}