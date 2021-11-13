#ifndef UZYTKOWNIKMENAGER_H
#define UZYTKOWNIKMENAGER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include "PlikZUzytkownikami.h"
#include "MetodyPomcnicze.h"

using namespace std;

class UzytkownikMenager
{
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;
    PlikZUzytkownikami plikZUzytkownikami;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
public:
     void rejestracjaUzytkownika();
     void wypiszWszystkichUzytkownikow();
     void wczytajUzytkownikowZPliku();
};
#endif // UZYTKOWNIKMENAGER_H
