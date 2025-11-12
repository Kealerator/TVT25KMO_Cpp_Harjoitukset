#include <iostream>

using namespace std;

int laskeNelio(int);

int main()
{
    int luku,tulos;
    cout << "Anna kokonaisluku: ";
    cin >> luku;
    tulos = laskeNelio(luku);

    cout << "Luvun " << luku << " nelio on " << tulos << endl;
    return 0;
}

int laskeNelio(int luku){
    return luku * luku;
}
