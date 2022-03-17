/*
* demo array dua dimensi
* by dimas ariyanto
*/

#include<iostream>

using namespace std;

int main() 
{
	string data[3][3];

	for (int i = 0; i <= 2; i++) 
	{
		for (int j = 0; j <= 2; j++)
		{
			if (j == 0) 
			{
				cout << "Nama Mahasiswa : ";
				cin >> data[i][j];
			}
			else if (j == 1)
			{
				cout << "Nilai UTS : ";
				cin >> data[i][j];
			}
			else if (j == 2)
			{
				cout << "Nilai UAS : ";
				cin >> data[i][j];
			}
		}
	}

	cout << "\nNama\tUTS\tUAS";
	for (int i = 0; i <= 2; i++) 
	{
		cout << endl;
		for (int j = 0; j <= 2; j++) 
		{
			cout << data[i][j] << "\t";
		}
	}

	system("pause>0");

}