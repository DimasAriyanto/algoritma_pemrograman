#include<iostream>

using namespace std;

int main()
{
	string nim, password;

	menu:
	cout << "=== LOGIN DASHBOARD MAHASISWA ===" << endl;
	cout << "Masukkan NIM = ";
	cin >> nim;

	cout << "Masukkan Password = ";
	cin >> password;

	if ((nim == "21.11.4408") && (password == "amikom"))
	{
		system("cls");
		cout << "Selamat login dashboard mahasiswa berhasil" << endl;
	}
	else
	{
		cout << "Login gagal, coba lagi!!" << endl;
		goto menu;
	}

	system("pause>0");
}