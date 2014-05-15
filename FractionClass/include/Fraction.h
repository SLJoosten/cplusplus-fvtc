#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

using namespace std;

class Fraction
{
    public:
        Fraction();
        Fraction(int, int);
        ~Fraction();

        int Numerator();
        int Denominator();
        void SetNumerator(int);
        void SetDenominator(int);

        Fraction& Simplify(Fraction&);
        int GetCommonDenominator(int, int);
        Fraction& ToCommonDenominator(Fraction&, int);

        friend ostream& operator<<(ostream&, Fraction&);
        friend Fraction& operator*(Fraction&, Fraction&);
        friend Fraction& operator/(Fraction&, Fraction&);
        friend Fraction& operator+(Fraction&, Fraction&);
        friend Fraction& operator-(Fraction&, Fraction&);
    protected:
    private:
};

#endif // FRACTION_H
