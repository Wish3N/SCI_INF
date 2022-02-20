#pragma once
#include <iostream>
#include <vector>

using namespace std;

class funkcja
{
public:
	vector<int> yeye;
	void losowanie();
	void babelki();
	void quicks(int left, int right);
	void wybor();
	void wstawienie();
	void wyswietlanie();
	int szukaj(int l, int p, long szukana);
	void szukana(int left, int right);
};