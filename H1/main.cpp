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

using namespace std;

void calcSum(int, int);
void calcDiv(int, int);

int retSum(int, int);
float retDiv(int, int);

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
    throw std::runtime_error("jakaja ei saa olla negatiivinen.");

    try{
        float result = retDiv(a,b);
        cout << a << " * " << b << " = " << result << endl;
    } catch (runtime_error& e){
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}

void calcSum(int num1, int num2) { cout << (num1 * num2) << endl; }

void calcDiv(int num1, int num2) {

    if (num2 == 0) {
        cout << "Jakaja ei voi olla nolla!" << endl;
    } else {

        double result = double(num1) / double(num2);

    cout << result << endl;
    }
}

int retSum(int num1, int num2) { return num1 * num2; }

float retDiv(int num1, int num2) { return float(num1) / float(num2); }
