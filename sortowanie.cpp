#include <iostream>
#include <time.h>
#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <chrono>
#include "Funkcje.h"
using namespace std;

funkcja funkcjaa;

int main()
{
	int a;

	cout << "Wylosowane liczby to: " << endl;
	funkcjaa.losowanie();
	cout << endl;
	cout << "Ktore sortowanie wybierasz?" << endl << endl;
	cout << "1. Babelkowe" << endl;
	cout << "2. Wstawieniowe" << endl;
	cout << "3. Przez wybor" << endl;
	cout << "4. Quicksort" << endl;
	cin >> a;
	if (a == 1)
	{
		auto start = chrono::steady_clock::now();
		funkcjaa.babelki();
		auto end = chrono::steady_clock::now();
		auto czas = chrono::duration<double>(end - start);
		cout << "Czas Babelkowe: " << czas.count() << endl;
	}

	else if (a == 2)
	{
		auto start = chrono::steady_clock::now();
		funkcjaa.wstawienie();
		auto end = chrono::steady_clock::now();
		auto czas = chrono::duration<double>(end - start);
		cout << "Czas Wstawieniowe: " << czas.count() << endl;
	}

	else if (a == 3)
	{
	auto start = chrono::steady_clock::now();
	funkcjaa.wybor();
	auto end = chrono::steady_clock::now();
	auto czas = chrono::duration<double>(end - start);
	cout << "Czas Wybor: " << czas.count() << endl;
    }

	else if (a == 4)
	{
		auto start = chrono::steady_clock::now();
		funkcjaa.quicks(0, funkcjaa.yeye.size() - 1);
		auto end = chrono::steady_clock::now();
		auto czas = chrono::duration<double>(end - start);
		cout << "Czas Quicksort: " << czas.count() << endl;
	}
}