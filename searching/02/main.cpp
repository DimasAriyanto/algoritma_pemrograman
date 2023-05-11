/*
* demo liner/sequential search
* by dimas ariyanto
*/

#include<iostream>

using namespace std;

int main()
{
	int data[10] = { 20,37,42,77,89,20,37,11,77,92 };
	int cari, ditemukan = 0, hasilcari[10];

	cout << "Data Array\n";
	for (int i = 0; i < 10; i++)
	{
		cout << data[i] << " ";
	}

	cout << "\nMasukka nilai yang anda cari :  ";
	cin >> cari;

	for (int i = 0; i < 10; i++)
	{
		if (data[i] == cari)
		{
			ditemukan++;
			hasilcari[ditemukan] = i;
		}
	}
	if (ditemukan == 0)
	{
		cout << "Nilai yang dicari tidak ditemukan";
	}
	else
	{
		cout << "Nilai yang anda cari tedapat pada data ke : ";
		for (int i = 1; i <= ditemukan; i++)
		{
			cout << hasilcari[i] + 1 << " ";
		}
	}

	system("pause>0");
}