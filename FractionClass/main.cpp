#include <iostream>
#include "include/Fraction.h"

using namespace std;

int main()
{
    Fraction test_fracA(1,4);
    Fraction test_fracB(2,3);

    cout << "First Fraction: " << test_fracA << endl;
    cout << "Second Fraction: " << test_fracB << endl;
    cout << "Multiplied: " << test_fracA * test_fracB << endl;
    cout << "Divided: " << test_fracA / test_fracB << endl;
    cout << "Added: " << test_fracA + test_fracB << endl;
    cout << "Subtracted: " << test_fracA - test_fracB << endl;
    return 0;
}
