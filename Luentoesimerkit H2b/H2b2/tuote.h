#ifndef TUOTE_H
#define TUOTE_H

#include <iostream>


class Tuote
{
private:
    std::string nimi;
    double hinta;
public:
    Tuote(std::string nimi, double hinta);
    double getHinta() const;
    void setHinta(double newHinta);
    std::string getNimi() const;
    void setNimi(const std::string &newNimi);
    void tulostaTiedot();
};

#endif // TUOTE_H
