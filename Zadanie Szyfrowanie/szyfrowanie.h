#pragma once

#include <iostream>
#include <string>
#include <utility>
using namespace std;

class szyfrowanie
{
public:
	string szyfrowaniecezara(string tekst);
	string szyfrowanieprzestawieniowe(string a);
	string oba(string a);
	string deszyfrowaniecezara(string tekst);
	string RSA(string tekst);
};