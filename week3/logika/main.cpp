/*
* Operator Binary adalah operator yang melibatkan 2 buah nilai ( operand )
* operator Logika adalah operator yang digunakan untuk membuat operasi logika
*/

#include<iostream>

using namespace std;

int main()
{
	int a = 1;
	int b = 0;
	bool hasil;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl << endl;

	hasil = a && b;
	cout << "a && = " << hasil << endl;

	hasil = a || b;
	cout << "a || = " << hasil << endl;

	cout << "!a = " << !a << endl;

	system("pause>0");
}
