#include <iostream>

using namespace std;

/*
 *
 * Tee ohjelma, jossa on main-funktio ja funktio nimeltä tuplaa().
 *
 * Funktio ottaa argumenttina kokonaisluvun ja palauttaa sen kaksinkertaisena.
 *
 * Pääohjelmasta (main) kysytään kokonaisluku, kutsutaan tuplaa-funktiota argumenttina annettu
 * luku ja tulostetaan saatu tulos.
*/

int tuplaa(int);

int main()
{
    int num;

    cout << "Anna kokonaisluku: ";
    cin >> num;

    cout << tuplaa(num) << endl;

    system("pause");
    return 0;
}

int tuplaa(int a){ return a * 2; }
