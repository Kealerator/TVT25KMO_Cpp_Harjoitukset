#include "pesukone.h"

Pesukone::Pesukone(string nimi, double hinta, int l, int m) : Tuote(nimi,hinta)
{
    this->linkousNopeus = l;
    this->maxPyykki = m;
}

void Pesukone::tulostaTiedot()
{

    std::cout << this->getNimi() << " : " << this->getHinta() << "e : ";
    std::cout << "linkous: " << linkousNopeus << " : MaxKg: " << maxPyykki <<  std::endl;
}
