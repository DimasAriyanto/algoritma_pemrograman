/*
* demo rekursif
* by dimas ariyanto
*/

#include<iostream>

using namespace std;

int rekrusifFaktorial(int f) {
	if (f == 1) {
		return 1;
	}
	else {
		return f * rekrusifFaktorial(f-1);
	}
}

int main() {

	int faktorial;

	cout << "Inputkan nilai faktorial = ";
	cin >> faktorial;

	cout << "Hasil faktorial adalah " << rekrusifFaktorial(faktorial) << endl;

	system("pause");

	return 0;
}