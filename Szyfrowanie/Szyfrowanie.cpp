#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void szyfrowanieCezar(string & tekst, int k)
    {
        if (k > 26)k = k % 26; 

        for (int i = 0; i <tekst.length(); i++)
        {
            if (tekst[i] == ' ')continue; 
            tekst[i] += k; 
            if (tekst[i] > 'z') tekst[i] -= 26; 

        }


    }

void deszyfrowanieCezar(string & tekst, int k)
{
    if (k > 26)k = k % 26; 

    for (int i = 0; i < tekst.length(); i++)
    {
        if (tekst[i] == ' ')continue; 
        tekst[i] -= k; 
        if (tekst[i] > 'z') tekst[i] += 26; 

    }


}

string szyfrowanieprzest(string szyfr)
{
    string tekst = "";
    for (int i = 0; i < szyfr.size() - 1; i += 2)
        tekst = tekst + szyfr[i + 1] + szyfr[i];
    if (szyfr.size() % 2 != 0)
        tekst = tekst + szyfr[szyfr.size() - 1];
    return tekst;
}


int main()
{
    int wybor;
    int klucz;
    string tekst;

    cout << "Podaj tekst do zaszyfrowania: " << endl;
    getline (cin, tekst);

    cout << "1. Szyfrowanie Cezara" << endl;
    cout << "2. Szyfrowanie przestawieniowe" << endl;
    cout << "3. Szyfrowanie oba" << endl;
    cout << "4. Deszyfrowanie Cezar" << endl;
    cout << "5. Wyjście" << endl;
    cin >> wybor;

    if (wybor == 1){ 
        cout << "Podaj klucz szyfrowania: "<<endl;
            cin >> klucz;

        szyfrowanieCezar(tekst, klucz);

        cout << tekst << endl;
    }
    if (wybor == 2) {
        cout << szyfrowanieprzest(tekst) << endl;
    }
    if (wybor == 3) {
        cout << "Podaj klucz szyfrowania: " << endl;
        cin >> klucz;
        szyfrowanieCezar(tekst, klucz);
        cout << szyfrowanieprzest(tekst) << endl;
    }
    if (wybor == 4) {
        cout << "Podaj klucz deszyfrowania: " << endl;
        cin >> klucz;

        deszyfrowanieCezar(tekst, klucz);

        cout << tekst << endl;
    }
    if (wybor == 5) {
        exit;
    }
    else {
        exit;
    }
}
