#include<iostream>

using namespace std;

int main()
{
	float jari, hasil;
	const float p = 3.14f;

	cout << "Masukkan jumlah jari-jari : ";
	cin >> jari;

	hasil = (jari * p) * 2;

	cout << "Keliling dan lingkaran adalah " << hasil;

	system("pause>0");
}