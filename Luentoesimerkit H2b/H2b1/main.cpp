#include "tuote.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    Tuote objTuote1("Maito", 1.85);
    Tuote objTuote2("Voi", 1.60);
    Tuote objTuote3("Juusto", 5.85);

    vector<Tuote> tuoteLista;

    tuoteLista.push_back(objTuote1);
    tuoteLista.push_back(objTuote2);
    tuoteLista.push_back(objTuote3);


    cout << "Listalla tuotteita: " << tuoteLista.size() << endl;
    for (Tuote tuote : tuoteLista) {
        tuote.tulostaTiedot();
    }


    return 0;
}
