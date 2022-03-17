#include<iostream>

using namespace std;

int main()
{
	string nama, nim, jurusan, asal;

	cout << "+-------------------------------+" << endl;
	cout << "|\tBiodata Mahasiswa\t|" << endl;
	cout << "+-------------------------------+" << endl;

	cout << "Nama\t: ";
	getline(cin, nama);

	cout << "NIM\t: ";
	cin >> nim;
	
	cout << "Jurusan\t: ";
	cin.ignore();
	getline(cin, jurusan);

	cout << "Asal\t: ";
	getline(cin, asal);

	system("pause>0");
}