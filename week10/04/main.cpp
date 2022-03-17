/*
* demo sort
* by dimas ariyanto
*/

#include<iostream>

using namespace std;

int main()
{
	int data[10], i, j, temp;

	cout << "Program mengurutkan angka kecil ke besar" << endl;
	for (i = 0; i < 10; i++)
	{
		cout << "Masukkan angka ke " << (i + 1) << " ";
		cin >> data[i];
	}

	cout << "Data sebelum di urutkan :  " << endl;
	for (i = 0; i < 10; i++)
	{
		cout << data[i] << " ";
	}

	for (i = 0; i < 9; i++)
	{
		for (j = i+1; j < 10; j++)
		{
			if (data[i] > data[j])
			{
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
	}

	cout << "\nData setelah diurutakan :  " << endl;
	for (i = 0; i < 10; i++)
	{
		cout << data[i] << " ";
	}

	system("pause>0");
}