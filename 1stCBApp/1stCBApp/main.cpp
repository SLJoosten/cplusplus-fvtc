#include <iostream>
#include "HelperBot.h"
#include "Collection.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    int value = HelperBot::ConvertToInt("55");

    Collection<int> c;
    c.Add(1);
    c.Add(2);
    cout << "c: " << c << endl;

    return 0;
}
