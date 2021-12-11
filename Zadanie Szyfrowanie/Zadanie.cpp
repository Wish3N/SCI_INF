#include <iostream>
#include <string>
#include "szyfrowanie.h"
using namespace std;

int main()
{
	string tekst;
	string szyfrowaniejeden;
	string szyfrowaniedwa;
	szyfrowanie klasa;

	int a;
	a = 1;

	cout << "Wprowadz tekst" << endl;
	getline(cin, tekst);
	do {
		cout << "Wybierz opcje " << endl;
		cout << "1. Szyfrowanie cezara" << endl;
		cout << "2. Deszyfrownaie cezara" << endl;
		cout << "3. Szyfrowanie przestawieniowe" << endl;
		cout << "4. OBA" << endl;
		cout << "5. RSA" << endl;
		int opcja;
		cin >> opcja;
		if (opcja == 1)
		{
			szyfrowaniejeden = klasa.szyfrowaniecezara(tekst);
			cout << "zaszyfrowany tekst: " << szyfrowaniejeden << endl;
		}
		else if (opcja == 2)
		{
			szyfrowaniejeden = klasa.deszyfrowaniecezara(tekst);
			cout << "zdeszyfrowany tekst: " << szyfrowaniejeden << endl;
		}
		else if (opcja == 3)
		{
			szyfrowaniejeden = klasa.szyfrowanieprzestawieniowe(tekst);
			cout << "zaszyfrowany tekst: " << szyfrowaniejeden << endl;
			
		}
		else if (opcja == 4)
		{
			szyfrowaniejeden = klasa.oba(tekst);
			cout << "zaszyfrowany tekst: " << szyfrowaniejeden << endl;
		}
		else if (opcja == 5)
		{
			szyfrowaniejeden = klasa.RSA(tekst);
		}
		else {
			exit;
		}
	} while (a = 1);
}