#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

class MetodyPomocnicze
{
public:
    string static konwerjsaIntNaString(int liczba);
    int static konwersjaStringNaInt(string liczba);
    string static wczytajLinie();
    string static zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    string static pobierzLiczbe(string tekst, int pozycjaZnaku);
    char static wczytajZnak();
    int static wczytajLiczbeCalkowita();

};
#endif // METODYPOMOCNICZE_H
