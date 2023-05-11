#include<iostream>

using namespace std;

int main()
{
	int i, n;
	float jumlah=0, kali=1, rata, nilai;

	cout << "Input banyak nilai = ";
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		cout << "Input nilai ke-" << i << " = ";
		cin >> nilai;
		jumlah += nilai;
		kali *= nilai;
		rata = jumlah / n;
	}
	cout << "Total Nilai = " << jumlah << endl;
	cout << "Total Perkalian = " << kali << endl;
	cout << "Rata-rata = " << rata << endl;

	system("pause>0");
}