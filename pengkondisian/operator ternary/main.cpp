#include<iostream>

using namespace std;

int main()
{
	int jawaban;

	cout << "Berapa hasil 3+4 ?" << endl;
	cout << "Jawab =  ";
	cin >> jawaban;

	string hasil = (jawaban == 7) ? "Benar" : "Salah";
	cout << "Jawaban kamu " << hasil;

	system("pause>0");
}