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
        cout << endl;

        tuoteLista.emplace_back(userNimi, userHinta);
    }


    cout << "Lisatyt tuotteet:\n" << endl;

    for (Tuote alkio : tuoteLista) {
        alkio.tulostaTiedot();
    }

    double kalleinTuote = -1.00;
    int kalleinTuoteIndex = -1;

    for (int i = 0; i < tuoteLista.size(); ++i){
        if(tuoteLista[i].getHinta() > kalleinTuote){
            kalleinTuote = tuoteLista[i].getHinta();
            kalleinTuoteIndex = i;
        }
    }

    cout << "\nKallein tuote: ";
    tuoteLista[kalleinTuoteIndex].tulostaTiedot();


    return 0;
}
