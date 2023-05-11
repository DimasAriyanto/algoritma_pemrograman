/*
* demo fungsi tanpa pengembalian nilai
* by dimas ariyanto
*/

#include<iostream>

using namespace std;

void fungsiluas(int p,int l) {
	int luas = p * l;
	cout << "hasil luasnya adalah " << luas << endl;
}

int main() {

	fungsiluas(4, 5);

	system("pause");

	return 0;
}