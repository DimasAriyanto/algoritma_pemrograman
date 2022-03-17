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
	for (int i = 0; i <= 1; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			for (int k = 0; k <= 3; k++)
			{
				cout << "Nilai index ke-[" << i << "][" << j << "][" << k << "] :  " << a[i][j][k] << endl;
			}
		}
	}

	system("pause>0");

}