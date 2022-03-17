#include<iostream>

using namespace std;

int main()
{
	int tinggi, baris, kolom;

	cout << "Masukkan jumlah tinggi = ";
	cin >> tinggi;

	baris = 1;
	while (baris <= tinggi)
	{
		kolom = 1;
		while (kolom <= baris)
		{
			cout << "*";
			kolom++;
		}
		cout << endl;
		baris++;
	}

	system("pause>0");
}