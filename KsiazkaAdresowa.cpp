#include "KsiazkaAdresowa.h"

KsiazkaAdresowa::KsiazkaAdresowa(string nazwaPlikuZUzytkownikami)
: uzytkownikMenager(nazwaPlikuZUzytkownikami)
{
    uzytkownikMenager.wczytajUzytkownikowZPliku();
}

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
    if(uzytkownikMenager.pobierzIdZalogowanegoUzytkownika() != 0)
        adresatMenager.wczytajAdresatowZalogowanegoUzytkownika(uzytkownikMenager.pobierzIdZalogowanegoUzytkownika());

}
void KsiazkaAdresowa::zmiannaHaslaUzytkownika()
{
    uzytkownikMenager.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikMenager.wylogowanieUzytkownika();
    adresatMenager.usunAdresatow();
}

void KsiazkaAdresowa::dodajAdresata()
{
    adresatMenager.dodajAdresata(uzytkownikMenager.pobierzIdZalogowanegoUzytkownika());
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatMenager.wyswietlWszystkichAdresatow();
}
