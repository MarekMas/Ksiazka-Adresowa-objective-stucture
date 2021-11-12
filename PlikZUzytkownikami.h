#ifndef PLIKZURZYTKOWNIKAMI_H
#define PLIKZURZYTKOWNIKAMI_H

#include <iostream>
#include <fstream>
#include "Uzytkownik.h"
#include "MetodyPomcnicze.h"


using namespace std;

class PlikZUzytkownikami
{
    string nazwaPlikuZUzytkownikami;
    fstream plikTekstowy;

    bool czyPlikJestPusty();
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);

public:
    PlikZUzytkownikami();
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);

};
#endif // PLIKZURZYTKOWNIKAMI_H
