#include "car.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Luo vektori nimeltään carList
    vector<Car> carList;

    // Lisää kolme Car-luokan oliota listaan.
    carList.emplace_back("Audi", "A4", 2006);
    carList.emplace_back("Nissan", "Sunny", 1996);
    carList.emplace_back("Volkswagen", "Transporter", 2016);

    // Tulosta listan toisen alkion tiedot
    carList[1].printData();


    // Tulosta kaikkien autojen tiedot käyttämällä for -silmukkaa.

    for (Car alkio : carList) {
        alkio.printData();
    }

    return 0;
}
