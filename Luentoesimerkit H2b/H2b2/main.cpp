#include "tuote.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <Tuote> tuoteLista;

    tuoteLista.emplace_back("Maito", 1.85);
    tuoteLista.emplace_back("Voi", 1.75);
    tuoteLista.emplace_back("Juusto", 6.80);


    for(Tuote alkio : tuoteLista){
        alkio.tulostaTiedot();
    }



    return 0;
}
