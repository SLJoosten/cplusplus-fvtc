#include <iostream>
#include "include/Fraction.h"

using namespace std;

int main()
{
    Fraction test_frac1(1,4);
    Fraction test_frac2(2,3);

    cout << "First Fraction: " << test_frac1 << endl;
    cout << "Second Fraction: " << test_frac2 << endl;
    cout << "Multiplied: " << test_frac1 * test_frac2 << endl;
    cout << "Divided: " << test_frac1 / test_frac2 << endl;
    cout << "Added: " << test_frac1 + test_frac2 << endl;
    cout << "Subtracted: " << test_frac1 - test_frac2 << endl;
    return 0;
}
