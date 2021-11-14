#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ks1("Uzytkownicy.txt");
    //ks1.rejestracjaUzytkownika();
    ks1.wypiszWszystkichUzytkownikow();
    ks1.logowanieUzytkownika();
    //ks1.wylogowanieUzytkownika();
    //ks1.zmiannaHaslaUzytkownika();
    //ks1.wypiszWszystkichUzytkownikow();
    ks1.dodajAdresata();
    return 0;
}
