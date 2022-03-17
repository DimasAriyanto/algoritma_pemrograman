#include<iostream>

using namespace std;

int main()
{
	int tinggi, baris, kolom;

	cout << "Masukkan jumlah tinggi = ";
	cin >> tinggi;

	for (baris = 1; baris <= tinggi; baris++)
	{
		for (kolom = 1; kolom <= baris; kolom++)
		{
			if (kolom == 1 || kolom == baris || baris == tinggi)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	system("pause>0");
}