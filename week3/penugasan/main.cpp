/*
* Operator Binary adalah operator yang melibatkan 2 buah nilai ( operand )
* Operator penugasan diganakan untuk memberikan tugas pada variabel
*/

#include<iostream>

using namespace std;

int main()
{
	int a = 5;
	int b = 10;

	cout << "a : " << a << endl;
	cout << "b : " << b << endl << endl;

	b += a;// b = b + a
	cout << "hasil b += a : " << b << endl;
	
	a = 5;
	b = 10;
	b -= a;// b = b - a
	cout << "hasil b -= a : " << b << endl;

	a = 5;
	b = 10;
	b *= a;// b = b * a
	cout << "hasil b *= a : " << b << endl;

	a = 5;
	b = 10;
	b /= a;// b = b / a
	cout << "hasil b /= a : " << b << endl;

	a = 5;
	b = 10;
	b %= a;// b = b % a
	cout << "hasil b %= a : " << b << endl;

	system("pause>0");
}