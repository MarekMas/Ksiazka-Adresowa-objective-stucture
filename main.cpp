#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    //KsiazkaAdresowa ks1("Uzytkownicy.txt","Adresaci.txt");
    //ks1.rejestracjaUzytkownika();
    //ks1.wypiszWszystkichUzytkownikow();
    //ks1.logowanieUzytkownika();
    //ks1.zmiannaHaslaUzytkownika();
    //ks1.wyswietlWszystkichAdresatow();
    //ks1.wyszukajAdresatowPoImieniu();
    //ks1.wyszukajAdresatowPoNazwisku();
    //ks1.dodajAdresata();
    //ks1.wyswietlWszystkichAdresatow();
    //ks1.wylogowanieUzytkownika();
    //ks1.edytujAdresata();

    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt","Adresaci.txt");

    while (true)
    {
        if (ksiazkaAdresowa.czyUzytkownikJestZalogowany() == false)
        {
            switch (ksiazkaAdresowa.wybierzOpcjeZMenuGlownego())
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
        else
        {

            switch (ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika())
            {
            case '1':
                ksiazkaAdresowa.dodajAdresata();
                break;
            case '2':
                ksiazkaAdresowa.wyszukajAdresatowPoImieniu();
                break;
            case '3':
                ksiazkaAdresowa.wyszukajAdresatowPoNazwisku();
                break;
            case '4':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            case '5':
                ksiazkaAdresowa.usunAdresata();
                break;
            case '6':
                ksiazkaAdresowa.edytujAdresata();
                break;
            case '7':
                ksiazkaAdresowa.zmiannaHaslaUzytkownika();
                break;
            case '8':
                ksiazkaAdresowa.wylogowanieUzytkownika();
                break;
            }
        }
    }

    return 0;
}
