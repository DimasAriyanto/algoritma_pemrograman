/*
* demo array
* by dimas ariyanto
*/

#include<iostream>

using namespace std;

int main()
{
	char huruf[5] = { 'a','b','c','d','e'};

	for (int i = 0; i < 5; i++)
	{
		cout << "Nilai ke-" << i + 1 << " :  " << huruf[i] << endl;
	}

	system("pause>0");
}