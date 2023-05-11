/*
* Operator Binary adalah operator yang melibatkan 2 buah nilai(operand)
* Operator penugasan diganakan untuk membandingkan 2 buah nilai
*/

#include<iostream>

using namespace std;

int main()
{
	int a = 3;
	int b = 4;
	bool hasil;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl << endl;

	hasil = a > b;
	cout << "hasil a > b = " << hasil << endl;

	hasil = a < b;
	cout << "hasil a < b = " << hasil << endl;

	hasil = a == b;
	cout << "hasil a == b = " << hasil << endl;

	hasil = a >= b;
	cout << "hasil a >= b = " << hasil << endl;

	hasil = a <= b;
	cout << "hasil a <= b = " << hasil << endl;

	hasil = a != b;
	cout << "hasil a != b = " << hasil << endl;

	system("pause>0");
}