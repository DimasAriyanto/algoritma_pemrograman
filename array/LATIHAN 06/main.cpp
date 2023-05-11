/*
* demo array
* by dimas ariyanto
*/

#include<iostream>
#include<array>

using namespace std;

int main()
{
	int n;

	cout << "Input banyak nilai :  ";
	cin >> n;
	int nilai['n'];

	for (int i = 0; i < n; i++)
	{
		cout << "Input nilai ke-" << i + 1<<" :  ";
		cin >> nilai[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << "Nilai ke-" << i + 1 << " :  " << nilai[i] << endl;
	}

	system("pause>0");
}