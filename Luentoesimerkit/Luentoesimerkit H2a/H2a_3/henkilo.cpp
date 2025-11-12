#include "henkilo.h"

int Henkilo::getIka() const
{
    return ika;
}

void Henkilo::setIka(int newIka)
{
    ika = newIka;
}

string Henkilo::getNimi() const
{
    return nimi;
}

void Henkilo::setNimi(const string &newNimi)
{
    nimi = newNimi;
}

void Henkilo::tulostaTiedot()
{
    cout << "Nimi: " << this->getNimi() << ", ika: " << this->getIka() << endl;
}

Henkilo::Henkilo() {}

Henkilo::Henkilo(string nimi, int ika)
{
    this->nimi = nimi;
    this->ika = ika;
}
