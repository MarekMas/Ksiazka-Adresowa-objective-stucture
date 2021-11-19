#ifndef ADRESATMENAGER_H
#define ADRESATMENAGER_H

#include "PlikZAdresatami.h"

class AdresatMenager
{
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    int idOstatniegoAdresata;
    vector<Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;



    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);
public:
    AdresatMenager (int idZalogowanegoUzytkownika, string nazwaPlikuZAdresatami)
    : ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika), plikZAdresatami(nazwaPlikuZAdresatami){}

    void dodajAdresata();
    void wczytajAdresatowZalogowanegoUzytkownika();
    void wyswietlWszystkichAdresatow();

};
#endif // ADRESATMENAGER_H
