#include "Funkcje.h"
#include <iostream>
#include <time.h>
#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <chrono>
using namespace std;
const int ilosc_liczb = 100000;

void funkcja::babelki()
{
	
		for (int i = 0; i < ilosc_liczb - 1; i++) 
		{
			for (int j = 0; j < ilosc_liczb - 1; j++) 
			{
				if (yeye[j] > yeye[j + 1]) 
				{
					swap(yeye[j], yeye[j + 1]);
				}
			}
		}
	}

void funkcja::wstawienie()
{
	int a, b;
	for (int i = 1; i < ilosc_liczb; i++)
	{
		a = yeye[i];
		b = i - 1;
		while (b >= 0 && yeye[b] > a)
		{
			yeye[b + 1] = yeye[b];
			b--;
		}
		yeye[b + 1] = a;
	}
}

void funkcja::losowanie()
{
	srand(time(NULL));
	for (int i = 0; i < 100; i++)
	{
		yeye.push_back(rand() % 1000);
	}
}

void funkcja::wyswietlanie()
{
	for (int i = 0; i < ilosc_liczb; i++)
	{
		cout << yeye[i] << " ";
	}
}

void funkcja::wybor()
{
	{
		int min;
		for (int i = 0; i < yeye.size(); i++)
		{
			min = i;
			for (int j = i + 1; j < yeye.size(); j++)
			{
				if (yeye[j] < yeye[min])
				{
					min = j;
				}
			}
			swap(yeye[i], yeye[min]);
		}
	}
}

void funkcja::quicks(int lewy, int prawy)
{
	{

		int i = (lewy + prawy) / 2;
		int piwot = yeye[i];
		yeye[i] = yeye[prawy];
		int j = lewy;
		for (i = lewy; i < prawy; i++)
		{
			if (yeye[i] < piwot)
			{
				swap(yeye[i], yeye[j]);
				j = j + 1;
			}

		}
		yeye[prawy] = yeye[j];
		yeye[j] = piwot;
		if (lewy < j - 1)
		{
			quicks(lewy, j - 1);
		}
		if (j + 1 < prawy)
		{
			quicks(j + 1, prawy);
		}
	}
}

int funkcja::szukaj(int l, int p, long szukana)
{
	int sz;
	while (l <= p)
	{
		sz = (l + p) / 2;

		if (yeye[sz] == szukana)
			return sz;

		if (yeye[sz] > szukana)
			p = sz - 1;
		else
			l = sz + 1;
	}

	return -1;
}