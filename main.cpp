#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ks1("Uzytkownicy.txt");
    ks1.rejestracjaUzytkownika();
    ks1.rejestracjaUzytkownika();
    ks1.wypiszWszystkichUzytkownikow();
    return 0;
}
