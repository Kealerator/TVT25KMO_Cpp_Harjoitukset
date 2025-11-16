#include "pesukone.h"
#include "televisio.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{

    Tuote objTuote("Sohva", 399.99);
    Televisio objTele("Samsung", 400.99, 27.5);
    Pesukone objPesukone("Upo", 399.90, 1200, 9);

    objTuote.tulostaTiedot();
    objTele.tulostaTiedot();
    objPesukone.tulostaTiedot();

    vector<Televisio> TVLista;
    TVLista.emplace_back("LG TV", 990.55, 75);
    TVLista.emplace_back("Samsung TV", 800.55, 55);
    TVLista.emplace_back("Finlux", 10000.99, 60);

    cout << "\nTelevisiot: " << endl;

    for(Televisio tv : TVLista){
        tv.tulostaTiedot();
    }

    vector<Tuote*> tuoteLista;

    tuoteLista.push_back(&objTuote);
    tuoteLista.push_back(&objTele);
    tuoteLista.push_back(&objPesukone);

    cout << "\n\nTuotelista: " << endl;

    for(auto tuote : tuoteLista){
        tuote->tulostaTiedot();
    }

    return 0;
}
