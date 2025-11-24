#include "testclass.h"

#include <iostream>

using namespace std;

int main()
{
    TestClass objTest1;

    objTest1.Method1(14);

    cout << "14 * 2 = " << objTest1.Method2(14) << endl;


    return 0;
}
