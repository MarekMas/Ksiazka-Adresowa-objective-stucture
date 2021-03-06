#ifndef ADRESATMENAGER_H
#define ADRESATMENAGER_H

#include "PlikZAdresatami.h"

class AdresatMenager
{
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector<Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;


    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);
    int podajIdWybranegoAdresata();
    char wybierzOpcjeZMenuEdycja();
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);
public:
    AdresatMenager (int idZalogowanegoUzytkownika, string nazwaPlikuZAdresatami)
    : ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika), plikZAdresatami(nazwaPlikuZAdresatami)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    }

    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void usunAdresata();
    void edytujAdresata();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();

};
#endif // ADRESATMENAGER_H
