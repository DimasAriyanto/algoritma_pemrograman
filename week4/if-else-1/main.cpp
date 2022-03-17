#include<iostream>

using namespace std;

int main()
{
	string password;

	menu:
	cout << "=======LOGIN WIFI=======" << endl;
	cout << "Masukkan Password : ";
	cin >> password;

	if (password == "amikom")
	{
		system("cls");
		cout << "Login Berhasil";
	}
	else
	{
		cout << "Password salah, coba lagi" << endl;
		goto menu;
	}

	system("pause>0");
}