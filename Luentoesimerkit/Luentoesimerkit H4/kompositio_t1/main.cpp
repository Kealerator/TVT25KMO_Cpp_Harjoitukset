#include <iostream>
#include <vector>
#include "address.h"
#include "person.h"

using namespace std;

int main()
{

    Person objPerson1("Teppo Testi", "Koulukatu 1", "2000", "Sastamala");

    objPerson1.printData();

    //vektori
    vector<Person> personLista;

    personLista.push_back(objPerson1);

    personLista.emplace_back("Matti Testi", "Koulukatu 2", "0001", "Uppsalla");
    personLista.emplace_back("Toni Testi", "Koulukatu 3", "0001", "Uppsalla");
    personLista.emplace_back("Matti Mainio", "Koulukatu 4", "0001", "Uppsalla");


    cout << "\n\n Vektorilista: \n";
    for (Person alkio : personLista) {
        alkio.printData();
        cout << "\n";
    }

    return 0;
}
