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
    string static wczytajLinie();
    string static zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);

};
#endif // METODYPOMOCNICZE_H
