#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");

	int not1, not2, ortalama;

	cout << "Vize notunuzu giriniz: ";
	cin >> not1;

	cout << "Final notunuzu giriniz: ";
	cin >> not2;

	ortalama = not1 * 0.4 + not2 * 0.6;

	if (ortalama >= 50)
	{
		cout << " " << "\n";
		cout << "Vize ve Final not Ortalamanız = " << ortalama << " Tebrikler dersi başarıyla geçtiniz."<<"\n";
		cout << " ";
	}
	else {
		cout << " "<<"\n";
		cout << "Vize ve Final not Ortalamanız = "<< ortalama<< " Dersten kaldınız!"<<"\n";
		cout << " ";
	}
}
