#include <iostream>

using namespace std;

void kasvata(int&);
void asetaNollaksi(int*);
void tuplaa(int);

int main()
{
    int x = 42;
//    int *pointer = &x;
    int *pointer;

    pointer = &x;

    cout << "x:n arvo: " << x << endl;
    cout << "&x:n arvo: " << &x << endl;
    cout << "*pointterin arvo: " << *pointer << endl;
    cout << "pointterin arvo: " << pointer << "\n\n" << endl;

    cout << "kasvatetaan x:n arvoa yhdella.\n\n";
    // Kasvatetaan x:n arvoa
    kasvata(x);


    cout << "x:n arvo: " << x << endl;
    cout << "&x:n arvo: " << &x << endl;
    cout << "*pointterin arvo: " << *pointer << endl;
    cout << "pointterin arvo: " << pointer << "\n" << endl;


    cout << "Nollataan x:n arvo.\n\n";
    asetaNollaksi(&x);

    cout << "x:n arvo: " << x << endl;
    cout << "&x:n arvo: " << &x << endl;
    cout << "*pointterin arvo: " << *pointer << endl;
    cout << "pointterin arvo: " << pointer << "\n" << endl;

     cout << "kasvatetaan x:n arvoa yhdella.\n\n";
    // Kasvatetaan x:n arvoa
    kasvata(x);

    cout << "Tuplataan x:n arvo.\n\n";
    tuplaa(x);

    cout << "x:n arvo: " << x << endl;
    cout << "&x:n arvo: " << &x << endl;
    cout << "*pointterin arvo: " << *pointer << endl;
    cout << "pointterin arvo: " << pointer << "\n" << endl;




    return 0;
}

void kasvata(int &luku)
{
    luku++;
}
void asetaNollaksi(int *luku){
    *luku = 0;
}
void tuplaa(int luku){
    luku = luku * 2;
    cout << "Funktion tuplaa sisalla oleva luku: " << luku << endl;
}
