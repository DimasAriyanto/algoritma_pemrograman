#include<iostream>

using namespace std;

int main()
{
	int i, n;
	string nama, kelas, jurusan;

	cout << "===== Program Biodata =====" << endl;
	cout << "Masukkan jumlah data yang ingin dimasukkan = ";
	cin >> n;

	for (i = 0; i <= n; i++)
	{
		system("cls");
		cout << "===== Biodata =====" << endl;
		cout << "Nama\t= ";
		cin.ignore();
		getline(cin, nama) << endl;
		cout << "Kelas\t= ";
		getline(cin, kelas);
		cout << "Jurusan\t= ";
		getline(cin, jurusan);
	}

	system("pause>0");
}