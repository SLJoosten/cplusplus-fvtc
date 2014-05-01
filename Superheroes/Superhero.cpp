#include "Superhero.h"

Superhero::Superhero()
{
    _name = "Unknown";
    _power = "Unknown";
    _secret = "Unknown";
    _age = -1;
}

Superhero::Superhero(string name, string power, string secret, int age, int powerLevel)
{
    _name = name;
    _power = power;
    _secret = secret;
    _age = age;
    _powerLevel = powerLevel;
}

void Superhero::RevealSecretIdentity()
{
    _name = _secret;
}

ostream& operator<<(ostream& out, Superhero& s)
{
    out << s._name << endl;
    return out;
}

bool operator >(Superhero& hero1, Superhero& hero2)
{
    return (hero1._powerLevel > hero2._powerLevel);
}

bool operator <(Superhero& hero1, Superhero& hero2)
{
    return (hero1._powerLevel < hero2._powerLevel);
}

bool operator ==(Superhero& hero1, Superhero& hero2)
{
    return (hero1._powerLevel == hero2._powerLevel);
}

//void operator =(Superhero& hero1, Superhero& hero2)
//{
    //hero1._name = hero2._name;
    //hero1._power = hero2._power;
    //and so on
//}

string Superhero::name()
{
    return _name;
}

string Superhero::power()
{
    return _power;
}

string Superhero::secret()
{
    return _secret;
}

int Superhero::age()
{
    return _age;
}

void Superhero::set_name(string name)
{
    _name = name;
}

void Superhero::set_power(string power)
{
    _power = power;
}

void Superhero::set_secret(string secret)
{
    _secret = secret;
}

void Superhero::set_age(int age)
{
    _age = age;
}

void Superhero::set_power_level(int powerLevel)
{
    _powerLevel = powerLevel;
}
