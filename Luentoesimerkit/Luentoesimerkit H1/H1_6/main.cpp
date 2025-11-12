#include <iostream>

using namespace std;

/*
 *Tee ohjelma, jossa on main-funktio ja funktio nimeltä tuplaa().
 *
 *Funktio ei palauta mitään vaan kaksinkertaistaa sille argumenttina annetun luvun arvon
 *(eli argumenttina onkin muuttujan osoite).
 *
 *Huomaa: sinun on käytettävä osoitinta.
 *
 *Tulosta mainissa alkuperäinen luku, kutsu tuplaa funktiota ja tulosta muuttujan uusi arvo.
 *
 */


// personal memo: & = muuttujan muistipaikan osoite, * = osoitin muuttuja johon voidaan sijoittaa muistipaikan osoite

void tuplaa(int *);

int main()
{
    int num;

    cout << "Anna kokonaisluku: ";
    cin >> num;

    tuplaa(&num);
    cout << num << endl;


    tuplaa(&num);
    cout << num << endl;

    return 0;
}
void tuplaa(int *a) { *a = *a * 2; }
