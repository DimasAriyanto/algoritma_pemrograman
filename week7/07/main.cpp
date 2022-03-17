/*
* demo fungsi dengan pengembalian nilai
* by dimas ariyanto
*/

#include<iostream>

using namespace std;

int luas(int p, int l) {
	int luas = p * l;
	return luas;
}
int main() {
	int panjang, lebar, L;

	cout << "Inputkan nilai panjang :  ";
	cin >> panjang;

	cout << "Inputkan nilai luas :  ";
	cin >> lebar;

	L = luas(panjang, lebar);
	cout << "hasil luasnya adalah :  " << L << " cm" << endl;

	system("pause");

	return 0;
}