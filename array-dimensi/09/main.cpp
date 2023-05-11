/*
* demo array tiga dimensi
* by dimas ariyanto
*/

#include<iostream>

using namespace std;

int main()
{
	// Membuat dan mengisi nilai array 2 dimensi
	int a[2][3][4] = { { {1,2,3,4},{5,6,7,8},{9,10,11,12}},{ {13,14,15,16},{17,18,19,20},{21,22,23,24}} };

	// mencetak isi array
	cout << "Nilai index ke-[1][2][3] :  " << a[1][2][3] << endl;

	system("pause>0");

}