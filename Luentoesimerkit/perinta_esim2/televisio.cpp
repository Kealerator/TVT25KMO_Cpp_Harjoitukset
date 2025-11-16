#include "televisio.h"

double Televisio::getRuudunKoko() const
{
    return ruudunKoko;
}

void Televisio::setRuudunKoko(double newRuudunKoko)
{
    ruudunKoko = newRuudunKoko;
}

void Televisio::tulostaTiedot()
{
    std::cout << this->getNimi() << " : " << this->getHinta() << "e : " << this->ruudunKoko << "\"" << std::endl;
}

Televisio::Televisio(string nimi, double hinta, double ruudunKoko): Tuote(nimi, hinta){
    this->ruudunKoko = ruudunKoko;
}
