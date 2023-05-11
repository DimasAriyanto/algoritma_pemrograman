/*
* demo array dua dimensi
* by dimas ariyanto
*/

#include <iostream>
using namespace std;

int main() 
{
	int a[2][3] = { {5,10,15}, {20,25,30} };

	for (int i = 0; i <= 1; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			cout << "Nilai index ke-[" << i << "][" << j << "]: " << a[i][j] << endl;
		}
	}

	system("pause>0");

}