#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenager.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenager.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenager.logowanieUzytkownika();

    if(uzytkownikMenager.pobierzIdZalogowanegoUzytkownika() > 0)
        adresatMenager = new AdresatMenager(uzytkownikMenager.pobierzIdZalogowanegoUzytkownika(),NAZWA_PLIKU_Z_ADRESATAMI);
}
void KsiazkaAdresowa::zmiannaHaslaUzytkownika()
{
    uzytkownikMenager.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikMenager.wylogowanieUzytkownika();
    delete adresatMenager;
    adresatMenager = NULL;
}

void KsiazkaAdresowa::dodajAdresata()
{
    adresatMenager->dodajAdresata();
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatMenager->wyswietlWszystkichAdresatow();
}

void KsiazkaAdresowa::usunAdresata()
{
    adresatMenager->usunAdresata();
}

void KsiazkaAdresowa::edytujAdresata()
{
    adresatMenager->edytujAdresata();
}
