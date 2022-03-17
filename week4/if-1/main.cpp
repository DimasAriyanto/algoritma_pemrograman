#include<iostream>

using namespace std;

int main()
{
	string password;

	cout << "=======LOGIN WIFI=======" << endl;
	cout << "Masukkan Password : ";
	cin >> password;

	if (password == "amikom")
	{
		cout << "Login Berhasil";
	}

	system("pause>0");
}