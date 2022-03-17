#include<iostream>

using namespace std;

int main()
{
	int nilai;
	char grade;

	cout << "Masukkan nilai = ";
	cin >> nilai;

	if (nilai >= 80)
	{
		grade = 'A';
	}
	else if (nilai >= 60)
	{
		grade = 'B';
	}
	else if (nilai >= 40)
	{
		grade = 'C';
	}
	else if (nilai >= 20)
	{
		grade = 'D';
	}
	else
	{
		grade = 'E';
	}

	switch (grade)
	{
		case 'A':
			cout << "Luar biasa" << endl;
			break;
		case 'B':
			cout << "Bagus" << endl;
			break;
		case 'C':
			cout << "Cukup" << endl;
			break;
		case 'D':
		case 'E':
			cout << "Anda Remidi" << endl;
			break;
		default:
			cout << "Grade Salah" << endl;
	}

	system("pause>0");
}