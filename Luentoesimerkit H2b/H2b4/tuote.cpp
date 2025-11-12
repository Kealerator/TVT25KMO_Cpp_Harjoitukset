#include "tuote.h"


Tuote::Tuote(std::string nimi, double hinta)
{
    this->nimi = nimi;
    this->hinta = hinta;
}

double Tuote::getHinta() const
{
    return hinta;
}

void Tuote::setHinta(double newHinta)
{
    hinta = newHinta;
}

std::string Tuote::getNimi() const
{
    return nimi;
}

void Tuote::setNimi(const std::string &newNimi)
{
    nimi = newNimi;
}

void Tuote::tulostaTiedot()
{
    std::cout << this->getNimi() << " : " << this->getHinta() << std::endl;
}
