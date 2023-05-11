/*
* demo fungsi tanpa pengembalian nilai
* by dimas ariyanto
*/

#include<iostream>

using namespace std;

void fungsiluas(int p, int l);

int main() {
	int panjang, lebar;

	cout << "Inputkan nilai panjang :  ";
	cin >> panjang;

	cout << "Inputkan nilai luas :  ";
	cin >> lebar;

	fungsiluas(panjang, lebar);

	system("pause");

	return 0;
}

void fungsiluas(int p, int l) {
	int luas = p * l;
	cout << "hasil luasnya adalah :  " << luas << endl;
}