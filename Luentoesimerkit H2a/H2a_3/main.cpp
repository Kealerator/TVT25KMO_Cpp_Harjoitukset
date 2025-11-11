#include "henkilo.h"

#include <iostream>

using namespace std;

int main()
{

    Henkilo objHenkilo("Matti", 33);
    Henkilo objHenkilo2("Teppo", 34);

    objHenkilo.tulostaTiedot();
    objHenkilo2.tulostaTiedot();

    // jos haluat että olion voi luoda myös näin:
    // on Henkilo -luokkaan lisättävä myös tyhjä konstruktori
    Henkilo objHenkilo3;
    objHenkilo3.setNimi("Markku");
    objHenkilo3.setIka(32);
    objHenkilo3.tulostaTiedot();

    // Dynaaminen olio:
    Henkilo *objHenkilo4 = new Henkilo("Aino", 36);
    objHenkilo4->tulostaTiedot();

    delete objHenkilo4;
    objHenkilo4 = nullptr;

    return 0;
}
