/*
  Kirjoita C++-sovellus, joka kysyy kaksi kokonaislukua (a ja b) ja tulostaa
  niiden summan ja osamäärän.

 Osamäärä tulostetaan kahdella desimaalilla.


  Muokkaa main-funktiota seuraavasti:

    Kysy luvut ja tallenna ne muuttujiin a ja b
    käytä cin ja cout olioita


Lisää sovellukseen summan ja osamäärän laskemiseen ja tulostamiseen käytettävät
funktiot:

- funktio calcSum ottaa vastaan kaksi kokonaislukua ja tulostaa niiden summan,
- mutta ei palauta mitään. funktio calcDiv ottaa vastaan kaksi kokonaislukua ja
tulostaa niiden osamäärän, mutta ei palauta mitään.
-jos jakaja on nolla calcDiv tulostaa virheilmoituksen.
- kutsu em. funktioita mainissa antamalla niille argumenttina muuttujat a ja b.

 *
 *
 *
 *
 *

Lisää sovellukseen toiset summan ja osamäärän laskemiseen ja tulostamiseen käytettävät funktiot:

    - funktio retSum ottaa vastaan kaksi kokonaislukua ja palauttaa niiden summan, mutta ei tulosta mitään
    - funktio retDiv ottaa vastaan kaksi kokonaisluka ja palauttaa niiden osamäärän (float), mutta ei tulosta mitään
    - jos jakaja on nolla retDiv funktiossa "aiheutuu runtime error" eli voit käyttää seuraavaa lausetta

                 throw std::runtime_error("jakaja ei saa olla negatiivinen.");
 */

#include <iostream>
#include "functions.h"

using namespace std;

int main() {
    int a, b;
    cout << "Anna 1. luku: ";
    cin >> a;

    cout << "Anna 2. luku: ";
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);

    // retSum
    cout << a << " * " << b << " = " << retSum(a, b) << endl;

    // retDiv
    float tulos = retDiv(a,b);
    cout.precision(3);
    cout << a << " / " << b << " = " << tulos << endl;

    system("pause");

    return 0;
}


