#ifndef PESUKONE_H
#define PESUKONE_H

#include "tuote.h"

class Pesukone : public Tuote
{
    int linkousNopeus;
    int maxPyykki;
public:
    Pesukone(string nimi, double hinta, int l, int m);
    void tulostaTiedot() override;
};

#endif // PESUKONE_H
