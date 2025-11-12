#include <iostream>

using namespace std;

void calcSum(int num1, int num2) { cout << (num1 * num2) << endl; }

void calcDiv(int num1, int num2) {

    if (num2 == 0) {
        cout << "Jakaja ei voi olla nolla!" << endl;
    } else {

        double result = double(num1) / double(num2);

        cout << result << endl;
    }
}

int retSum(int num1, int num2) { return num1 * num2; }

float retDiv(int num1, int num2) {

    if(num2 == 0){
        throw std::runtime_error("jakaja ei saa olla nolla.");
    }else {
        return float(num1) / float(num2);
    }

}
