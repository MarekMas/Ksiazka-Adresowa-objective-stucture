#ifndef PLIKZURZYTKOWNIKAMI_H
#define PLIKZURZYTKOWNIKAMI_H

#include <iostream>
#include <fstream>
#include <vector>
#include "Uzytkownik.h"
#include "MetodyPomcnicze.h"


using namespace std;

class PlikZUzytkownikami
{
    const string nazwaPlikuZUzytkownikami;

    bool czyPlikJestPusty();
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);

public:
    PlikZUzytkownikami(string);
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    vector<Uzytkownik> wczytajUzytkownikowZPliku();

};
#endif // PLIKZURZYTKOWNIKAMI_H