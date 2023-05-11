#include<iostream>

using namespace std;

int main()
{
	double jari, hasil;
	const double p = 3.14;

	cout << "Masukkan jumlah jari-jari : ";
	cin >> jari;

	hasil = (jari * p) * 2;

	cout << "Keliling dan lingkaran adalah " << hasil;

	system("pause>0");
}