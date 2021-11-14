#ifndef KSIAZKAADRESOWA22
#define KSIAZKAADRESOWA22

#include <iostream>
#include "UzytkownikMenager.h"
#include "AdresatMenager.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenager uzytkownikMenager;
    AdresatMenager adresatMenager;

public:
    KsiazkaAdresowa(string);
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void zmiannaHaslaUzytkownika();
    void wylogowanieUzytkownika();
    void dodajAdresata();
};
#endif // KSIAZKAADRESOWA_H
