#ifndef PLIKTEKSTOWY_H
#define PLIKTEKSTOWY_H

#include <iostream>
#include <fstream>
#include "PlikTekstowy.h"

using namespace std;

class PlikTekstowy
{
protected:
    const string NAZWA_PLIKU;
public:
    PlikTekstowy(string nazwaPliku) : NAZWA_PLIKU(nazwaPliku){}

    bool czyPlikJestPusty(fstream &plikTekstowy);
};
#endif // PLIKI_H
