#include<iostream>

using namespace std;

int main()
{
	int tinggi, kolom, baris;

	cout << "Masukkan jumlah tinggi = ";
	cin >> tinggi;

	for (baris = 1; baris <= tinggi; baris++)
	{
		for (kolom = 1; kolom < baris; kolom++)
		{
			cout << " ";
		}
		for (kolom = tinggi; kolom >= baris * 2 - tinggi; kolom--)
		{
			cout << "*";
		}
		cout << endl;
	}

	system("pause>0");
}