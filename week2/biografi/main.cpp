#include<iostream>

using namespace std;

int main() 
{
    string nama;
    int umur;
    char jenis_kelamin;

    cout << "Siapakah Namamu?" << endl;
    cout << "Jawab : ";
    getline(cin, nama);

    cout << "Berapa Umurmu?" << endl;
    cout << "Jawab : ";
    cin >> umur;

    cout << "Jenis Kelamin" << endl;
    cin >> jenis_kelamin;

    cout << " Salam kenal, " << nama << " Sekarang anda berusia " << umur << " dan anda berjenis kelamain " << jenis_kelamin;

    system("pause>0");
}