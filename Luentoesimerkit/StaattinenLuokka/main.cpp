#include "mystaticclass.h"

#include <iostream>

using namespace std;

int main()
{
    double decInput;

    cout << "Anna desimaaliluku: ";
    cin >> decInput;
    cout << decInput << " * 2 = " << MyStaticClass::doubleMe(decInput) << endl;
    return 0;
}
