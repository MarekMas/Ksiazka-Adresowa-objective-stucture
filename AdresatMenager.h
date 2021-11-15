#ifndef ADRESATMENAGER_H
#define ADRESATMENAGER_H

#include <iostream>
#include "Adresat.h"
#include "vector"
#include "PlikZAdresatami.h"
#include "MetodyPomcnicze.h"
#include "UzytkownikMenager.h"

class AdresatMenager
{
    int idOstatniegoAdresata;
    vector<Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;



    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
public:
    AdresatMenager();
    void dodajAdresata(int idZalogowanegoUzytkownika);
    void wczytajAdresatowZalogowanegoUzytkownika(int idZalogowanegoUzytkownika);

};
#endif // ADRESATMENAGER_H
