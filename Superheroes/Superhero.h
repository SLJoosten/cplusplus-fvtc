#ifndef SUPERHERO_H_INCLUDED
#define SUPERHERO_H_INCLUDED

#include <iostream>

using namespace std;

class Superhero
{
  private:
    //private variables
    string _name;
    string _power;
    string _secret;
    int _age;

  public:
    //constructors
    Superhero();
    Superhero(string, string, string, int);

    //destructor
    //~Superhero();

    //getters
    string name();
    string power();
    string secret();
    int age();

    //setters
    void set_name(string);
    void set_power(string);
    void set_secret(string);
    void set_age(int);

    //other methods
    void RevealSecretIdentity();

    friend ostream& operator<<(ostream&, Superhero&);
};

#endif // SUPERHERO_H_INCLUDED
