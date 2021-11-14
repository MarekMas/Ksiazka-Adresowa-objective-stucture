#ifndef ADRESATMENAGER_H
#define ADRESATMENAGER_H

#include <iostream>
#include "Adresat.h"
#include "vector"
#include "PlikZAdresatami.h"
#include "MetodyPomcnicze.h"

class AdresatMenager
{
    int idOstatniegoAdresata;
    vector<Adresat> adresaci;


    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
public:
    AdresatMenager();
    void dodajAdresata(int idZalogowanegoUzytkownika);



};
#endif // ADRESATMENAGER_H
