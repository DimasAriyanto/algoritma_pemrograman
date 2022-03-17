#include<iostream>

using namespace std;

int main()
{
	string username, password;

	menu:
	cout << "=== Login Dashboard Mahasiswa ===" << endl;
	cout << "Masukkan username = ";
	cin >> username;

	if (username == "admin")
	{
		password:
		cout << "Masukkan Password = ";
		cin >> password;
		if(password == "amikom")
		{
			system("cls");
			cout << "Welcome, Login Berhasil";
		}
		else
		{
			cout << "Pasword salah, Coba Lagi!!" << endl;
			goto password;
		}
	}
	else
	{
		cout << "Username Salah, Coba Lagi!!" << endl;
		goto menu;
	}
	
	system("pause>0");
}