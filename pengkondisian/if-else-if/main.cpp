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

	cout << "Grade anda : " << grade;

	system("pause>0");
}