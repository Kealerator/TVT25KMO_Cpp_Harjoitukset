#include "car.h"
#include "rectangle.h"
#include "student.h"

#include <iostream>
#include <memory>

using namespace std;

int main()
{
    // Luodaan Car -olio pinomuistiin ja asetetaan sille merkki, malli ja vuosi.
    Car auto1;
    auto1.setBrand("Audi");
    auto1.setModel("A4");
    auto1.setYearModel(2004);

    // Tulostetaan auton tiedot
    auto1.printData();


    // Luodaan Rectangle -olio kekomuistiin
    Rectangle *objRect1 = new Rectangle;

    // Asetetaan oliolle leveys ja korkeus
    objRect1->setHeight(2.48);
    objRect1->setWidth(2.48);

    //Tulostetaan suorakulmion pinta-ala ja ympärysmitta.
    cout << "Suorakulmion pinta-ala: " << objRect1->getArea() << "\n";
    cout << "Suorakulmion ymparysmitta: " << objRect1->getCircum() << "\n";

    // Tuhoa olio
    delete objRect1;	// Muisti vapautetaan
    objRect1 = nullptr; // Osoitin ei enään osoita muistiin joka vapautettiin


    // Luodaan Student -olio smart pointerilla
    unique_ptr<Student> objStudent = make_unique<Student>();

    // Asetetaan sille nimi, opiskelija numero ja keskiarvo
    objStudent->setName("Aku Ankka");
    objStudent->setStudentNumer(18);
    objStudent->setAverage(6.45);

    // Tulostetaan Student -olion tiedot käyttämällä get -metodeja.
    cout << "Nimi: " << objStudent->getName() << "\n";
    cout << "Opiskelija nro: " << objStudent->getStudentNumer() << "\n";
    cout << "Keskiarvo: " << objStudent->getAverage() << endl;


    return 0;
}
