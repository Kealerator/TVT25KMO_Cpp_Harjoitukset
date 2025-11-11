#include "henkilo.h"

#include <iostream>

using namespace std;

int main()
{
    // Luodaan olio pinoon (stack)
    // ns. "automaattinen olio joka tuhoutuu automaattisesti

    Henkilo objHenkilo;

    objHenkilo.ika = 33;
    objHenkilo.nimi = "Matti";

    cout << objHenkilo.nimi << " on " << objHenkilo.ika << " vuotias." << endl;

    // luodaan olio kekoon (heap)
    // meidän tulee tuhota olio, kun sitä ei tarvita

    Henkilo *objHenkilo2;
    objHenkilo2 = new Henkilo();
    objHenkilo2->ika = 23;
    objHenkilo2->nimi = "Sakke";


    cout << objHenkilo2->nimi << " on " << objHenkilo2->ika << " vuotias." << endl;

    delete objHenkilo2;
    objHenkilo2 = nullptr;


    return 0;
}
