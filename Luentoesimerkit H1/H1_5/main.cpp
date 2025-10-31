#include <iostream>
#include "functions.h"

using namespace std;

/*
 * Tee samalainen sovellus kuin edellä, mutta lisää siihen luvunTulostus() niminen funktio.
 *
 * Tälle funktiolle annetaan argumenttina luku, jonka se tulostaa.
 *
 * Kutsu mainista ensin funktiota tuplaa, ota talteen sen palauttama luku ja kutsu sitten
 * funktiota luvunTulostus antamalla sille argumenttina edellä saatu luku.
 *
 *
 */



int main()
{
    int num, doubledNum;

    cout << "Anna kokonaisluku: ";
    cin >> num;

    doubledNum = tuplaa(num);

    luvunTulostus(doubledNum);

    system("pause");
    return 0;
}
