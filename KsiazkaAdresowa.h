#ifndef KSIAZKAADRESOWA22
#define KSIAZKAADRESOWA22

#include <iostream>
#include "UzytkownikMenager.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenager uzytkownikMenager;

public:
    KsiazkaAdresowa(string);
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void zmiannaHaslaUzytkownika();
    void wylogowanieUzytkownika();
};
#endif // KSIAZKAADRESOWA_H
