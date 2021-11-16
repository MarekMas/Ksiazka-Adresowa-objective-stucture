#ifndef ADRESATMENAGER_H
#define ADRESATMENAGER_H

#include "PlikZAdresatami.h"

class AdresatMenager
{
    int idOstatniegoAdresata;
    vector<Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;



    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    void wyswietlDaneAdresata(Adresat adresat);
public:
    void dodajAdresata(int idZalogowanegoUzytkownika);
    void wczytajAdresatowZalogowanegoUzytkownika(int idZalogowanegoUzytkownika);
    void usunAdresatow();
    void wyswietlWszystkichAdresatow();

};
#endif // ADRESATMENAGER_H
