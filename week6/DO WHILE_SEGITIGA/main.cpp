#include<iostream>

using namespace std;

int main()
{
	int tinggi, baris, kolom;

	cout << "Masukkan jumlah tinggi = ";
	cin >> tinggi;

	baris = 1;
	do {
		kolom = 1;
		do {
			cout << "*";
			kolom++;
		} while (kolom <= baris);
		cout << endl;
		baris++;
	} while (baris <= tinggi);

	system("pause>0");
}