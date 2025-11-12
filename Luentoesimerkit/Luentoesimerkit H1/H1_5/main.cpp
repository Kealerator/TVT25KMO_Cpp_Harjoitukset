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

    cout << "Anna positiivinen kokonaisluku: ";
    cin >> num;

    if (num < 0){
        throw runtime_error("Kokonaisluvun kuului olla positiivinen!");
    }

    try {

        doubledNum = tuplaa(num);
        luvunTulostus(doubledNum);

    } catch (runtime_error& e) {
        cout << e.what() << endl;
        system("pause");
    }


    system("pause");
    return 0;
}
