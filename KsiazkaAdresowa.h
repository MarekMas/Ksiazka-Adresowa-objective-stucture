#ifndef KSIAZKAADRESOWA22
#define KSIAZKAADRESOWA22

#include <iostream>
#include "UzytkownikMenager.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenager uzytkownikMenager;

public:
    KsiazkaAdresowa();
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
};
#endif // KSIAZKAADRESOWA_H
