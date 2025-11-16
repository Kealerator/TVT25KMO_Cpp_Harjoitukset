#include "tuote.h"

string Tuote::getNimi() const
{
    return nimi;
}

void Tuote::setNimi(const string &newNimi)
{
    nimi = newNimi;
}

double Tuote::getHinta() const
{
    return hinta;
}

void Tuote::setHinta(double newHinta)
{
    hinta = newHinta;
}

void Tuote::tulostaTiedot()
{
    std::cout << this->nimi << " : " << this->hinta << "e" << endl;
}

Tuote::Tuote() {}

Tuote::Tuote(string nimi, double hinta)
{
    this->nimi = nimi;
    this->hinta = hinta;
}
