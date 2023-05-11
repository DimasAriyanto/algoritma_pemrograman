/*
* Operator Binary adalah operator yang melibatkan 2 buah nilai ( operand )
* operator bitwise adalah operator yang digunakan untuk operasi berdasarkan bit(biner) dari sebuah nilai
*/

#include<iostream>

using namespace std;

int main()
{
	int a = 6, b = 3, hasil;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl << endl;

	hasil = a & b;
	cout << "a & b = " << hasil << endl;

	hasil = a | b;
	cout << "a | b = " << hasil << endl;

	hasil = a ^ b;
	cout << "a ^ b = " << hasil << endl;

	hasil = ~a;
	cout << "~a = " << hasil << endl;

	hasil = a >> 1;
	cout << "a >> 1 = " << hasil << endl;

	hasil = a << 1;
	cout << "a << 1 = " << hasil << endl;

	system("pause>0");
}