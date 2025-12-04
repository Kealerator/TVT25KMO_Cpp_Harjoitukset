#include "classa1.h"
#include "classa2.h"
#include "classb.h"

#include <iostream>

using namespace std;

int main()
{
    int a = 5;

    int *pointerA = &a;
    int &refA = a;


    cout << "a:n arvo on: " << a;
    cout << " ja osoite on: " << &a << endl;
    cout << "\n";


    cout << "Pointterin osoittama osoite on: " << pointerA << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *pointerA;
    cout << "\n\n";

    cout << "refA osoittee osoitteeseen on: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA;
    cout << "\n\n";

// Lisää muuttuja int b ja anna sen arvoksi 6.
    int b = 6;

// Kokeile voitko muuttaa refA:n osoittamaan b:n osoitteeseen

/* NOTES: Nähtävästi referenssiin pystytään siirtämään ainoastaan b:n
 * arvo, eikä sen muistiosoitetta..
 */

    //Tulostetaan b:n osoite ja arvo
    cout << "b:n arvo on: " << b;
    cout << " ja osoite on: " << &b << endl;
    cout << "\n";

    // muutetaan refA osoittamaan b:n arvoa
    refA = b;

    // tulostetaan refA:n osoite ja arvo
    cout << "refA osoittaa osoitteeseen on: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA;
    cout << "\n\n";

// Kokeile voitko muuttaa pointerA:n osoittamaan b:n osoitteeseen?
/* NOTES: Nähtävästi toisin kuin referenssissä, pointteriin pystytään
 * muuttamaan niin osoite kuin sen arvo.
 */

    // muutetaan pointerA osoittamaan b:n osoitetta
    pointerA = &b;

    // tulostetaan pointerA:n osoite ja arvo
    cout << "Pointterin osoittama osoite on: " << pointerA << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *pointerA;
    cout << "\n\n";


    cout << "--------------------------------------------\n\n";

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objA1: " << objA1.getBinfo() << endl;
    cout << endl;

    cout << "--------------------------------------------\n\n";

    ClassB &refB = objB;
    ClassA2 objA2(refB);

    objA2.setBinfo("Olion Agr asettama info");
    cout << "objB: " << objB.getInfo() << endl;
    cout << "objA2: " << objA2.getBinfo() << endl;
    cout << endl;

    return 0;
}
