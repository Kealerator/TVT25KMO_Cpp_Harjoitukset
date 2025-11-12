#include "tuote.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string userNimi;
    double userHinta;


    vector<Tuote> tuoteLista;

    cout << "Syota 5 tuotetta!\n" << endl;

    for (int var = 1; var <= 5; ++var) {
        cout << "Syota " << var << ". tuotteen nimi: ";
        cin >> userNimi;
        cout << "Syota " << var << ". tuotteen hinta: ";
        cin >> userHinta;

        tuoteLista.emplace_back(userNimi, userHinta);
    }


    cout << "Lisatyt tuotteet:\n" << endl;

    for (Tuote alkio : tuoteLista) {
        alkio.tulostaTiedot();
    }


    return 0;
}
