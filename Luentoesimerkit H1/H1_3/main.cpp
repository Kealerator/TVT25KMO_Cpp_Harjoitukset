#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Anna kokonaisluku: ";
    cin >> num;

    if(num % 2 == 0){
        cout << num << " on parillinen!" << endl;
    }else {
        cout << num << " on pariton." << endl;
    }

    cout << endl;

    return 0;
}
