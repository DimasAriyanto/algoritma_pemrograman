/*
* Operator unary adalah operator yang dikenakan untuk 1 buah nilai(operand)
*/

#include<iostream>

using namespace std;

int main()
{
	int a = -10;
	int b = +10;

	cout << "nilai awal a : " << a << endl;
	cout << "nilai awal b : " << b << endl << endl;

	a++;// a = a + 1 
	b--;// a = b - 1

	cout << "hasil increment a : " << a << endl;
	cout << "hasil decrement b : " << b << endl << endl;

	system("pause>0");
}