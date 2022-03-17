#include<iostream>

using namespace std;

int main()
{
	char ulangi = 'y';

	int i = 0;
	while (ulangi == 'y')
	{
		cout << "Apakah kamu mau mengulangi?" << endl;
		cout << "Jawab : ";
		cin >> ulangi;
		i++;
	}
	cout << "Perulangan Selesai" << endl;
	cout << "Kamu mengulangi sebanyak " << i << endl;

	system("pause>0");
}