/*
* demo array dua dimensi
* by dimas ariyanto
*/

#include<iostream>

using namespace std;

int main() 
{
	// Membuat dan mengisi nilai array 2 dimensi
	int a[2][3] = { {5,10,15}, {20,25,30} };

	// mencetak isi array
	cout << "Nilai index ke-[0][0]: " << a[0][0] << endl;
	cout << "Nilai index ke-[0][1]: " << a[0][1] << endl;
	cout << "Nilai index ke-[0][2]: " << a[0][2] << endl;
	cout << "Nilai index ke-[1][0]: " << a[1][0] << endl;
	cout << "Nilai index ke-[1][1]: " << a[1][1] << endl;
	cout << "Nilai index ke-[1][2]: " << a[1][2] << endl;

	system("pause>0");

}