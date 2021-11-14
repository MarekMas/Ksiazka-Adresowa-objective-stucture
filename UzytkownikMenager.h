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
    UzytkownikMenager(string);
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();// testowa
    void wczytajUzytkownikowZPliku();
    void logowanieUzytkownika();
    void wypiszIdZalogowanegUzytkownika(); //testowa
};
#endif // UZYTKOWNIKMENAGER_H
