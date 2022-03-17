/*
* demo array
* by dimas ariyanto
*/

#include<iostream>

using namespace std;

int main()
{
	string buah[5] = {"apel","jeruk","mangga","jambu","durian"};

	for (int i = 0; i <=4; i++)
	{
		cout << "Nilai ke-" << i + 1 << " :  " << buah[i] << endl;
	}

	system("pause>0");
}