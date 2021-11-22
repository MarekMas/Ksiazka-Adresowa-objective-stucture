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
public:
    AdresatMenager (int idZalogowanegoUzytkownika, string nazwaPlikuZAdresatami)
    : ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika), plikZAdresatami(nazwaPlikuZAdresatami)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    }

    void dodajAdresata();
    void wyswietlWszystkichAdresatow();

};
#endif // ADRESATMENAGER_H
