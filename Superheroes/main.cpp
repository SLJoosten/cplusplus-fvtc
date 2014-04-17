#include <iostream>
#include "Superhero.h"

using namespace std;

int main()
{
    Superhero s("Captain America", "Super soldier serum", "Steve Rogers", 95);
    //s.set_name("Captain America");
    cout << s << endl;
    s.RevealSecretIdentity();
    cout << "After Reveal: " << s << endl;

    Superhero hulk;
    hulk.set_name("Incredible Hulk");
    hulk.set_power("Hulk Smash");
    hulk.set_secret("Bruce Banner");
    hulk.set_age(41);
    cout << endl << hulk << endl;

    return 0;
}
