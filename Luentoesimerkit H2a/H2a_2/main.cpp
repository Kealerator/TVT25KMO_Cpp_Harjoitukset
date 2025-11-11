#include "henkilo.h"

#include <iostream>

using namespace std;

int main()
{
    Henkilo objHenkilo;

    objHenkilo.setNimi("Juuso");
    objHenkilo.setIka(33);

    objHenkilo.tulostaTiedot();

    return 0;
}
