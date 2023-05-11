#include<iostream>

using namespace std;

int main()
{
	int i, n;
	float nilai, nilai_terbesar;

	cout << "Input banyak nilai = ";
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		cout << "Input nilai ke-" << i << " = ";
		cin >> nilai;
		if (i == 1)
		{
			nilai_terbesar = nilai;
		}
		if (nilai > nilai_terbesar)
		{
			nilai_terbesar = nilai;
		}
	}

	cout << "Nilai terbesar adalah " << nilai_terbesar;

	system("pause>0");
}