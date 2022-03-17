/*
* demo fungsi tanpa pengembalian nilai
* by dimas ariyanto
*/

#include<iostream>

using namespace std;

void hello(string nama) {
	cout << "Hello Selamat Datang " << nama << endl;
}

int main() {

	hello("Andi");
	hello("Ani");
	hello("Ana");
	hello("Ali");
	hello("Adi");

	system("pause");

	return 0;
}