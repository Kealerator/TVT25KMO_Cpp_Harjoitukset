#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Et voi lisätä taulukkoon uusia alkioita
    int arrLuvut[5] = {1, 2, 3, 4, 5};

    // Sen sijaan vektoriin voit lisätä uusia alkioita
    vector<int> luvut = {1, 2, 3, 4, 5};

    luvut.push_back(6);

    for (int luku : luvut) {
        cout << luku << endl;
    }

    // Kysellään lukuja kunnes käyttäjä antaa luvun 99
    // jolloin luvut tulostetaan

    vector<int> myNumbers;
    int newNumber = 1;

    while(newNumber != 99){
        cout << "Anna kokonaisluku (lopetus=99): ";
        cin >> newNumber;

        myNumbers.push_back(newNumber);
    }

    // myNumbers tulostaminen
    cout << "Annetut luvut ovat: " << endl;

    for (int alkio : myNumbers) {
        cout << alkio << endl;
    }

    return 0;
}
