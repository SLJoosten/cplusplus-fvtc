#include "../include/Fraction.h"

//private fields
int _numerator;
int _denominator;

//getters and setters
int Fraction::Numerator()
{
    return _numerator;
}

int Fraction::Denominator()
{
    return _denominator;
}

void Fraction::SetNumerator(int value)
{
    _numerator = value;
}

void Fraction::SetDenominator(int value)
{
    _denominator = value;
}

//constructors and destructors
Fraction::Fraction()
{
    //ctor
    _numerator = 1;
    _denominator = 1;
}

Fraction::Fraction(int numerator, int denominator)
{
    _numerator = numerator;
    _denominator = denominator;
}

Fraction::~Fraction()
{
    //dtor
}

//other methods
//Fraction& Fraction::Simplify(Fraction& frac)
//{

//}

int Fraction::GetCommonDenominator(int first_denom, int second_denom)
{
    //common denominator = denominator 1 * denominator 2
    return first_denom * second_denom;
}

Fraction& Fraction::ToCommonDenominator(Fraction& frac, int comm_denom)
{
    //find other fraction's denominator (number by which to multiply numerator and denominator)
    int others_denominator = comm_denom / frac.Denominator();

    //multiply numerator and denominator by that number
    int new_num = frac.Numerator() * others_denominator;
    int new_denom = frac.Denominator() * others_denominator;

    Fraction converted = Fraction(new_num, new_denom);

    return converted;
}

ostream& operator<<(ostream& out, Fraction& frac)
{
    //output fraction as numerator/denominator (i.e. 1/2)
    out << frac.Numerator() << "/" << frac.Denominator();
    return out;
}

Fraction& operator*(Fraction& frac_1, Fraction& frac_2)
{
    //multiply the numerators and denominators together to get the resulting numerator and denominator
    int product_num = frac_1.Numerator() * frac_2.Numerator();
    int product_denom = frac_1.Denominator() * frac_2.Denominator();
    Fraction product = Fraction(product_num, product_denom);
    //Simplify(product);

    return product;
}

Fraction& operator/(Fraction& frac_1, Fraction& frac_2)
{
    //multiply first fraction by second fraction's reciprocal to get the resulting numerator and denominator
    int quotient_num = frac_1.Numerator() * frac_2.Denominator();
    int quotient_denom = frac_1.Denominator() * frac_2.Numerator();
    Fraction quotient = Fraction(quotient_num, quotient_denom);
    //Simplify(quotient);

    return quotient;
}

Fraction& operator+(Fraction& frac_1, Fraction& frac_2)
{
    //check whether there is a common denominator
    if (frac_1.Denominator() == frac_2.Denominator())
    {
        //add the numerators together to get the resulting numerator
        int sum_num = frac_1.Numerator() + frac_2.Numerator();
        Fraction sum = Fraction(sum_num, frac_1.Denominator());

        //Simplify(sum);

        return sum;
    }
    else
    {
        //find the two fractions' common denominator
        int comm_denom = frac_1.GetCommonDenominator(frac_1.Denominator(), frac_2.Denominator());

        //convert both fractions to that common denominator and add together
        Fraction new_frac_1 = frac_1.ToCommonDenominator(frac_1, comm_denom);
        Fraction new_frac_2 = frac_2.ToCommonDenominator(frac_2, comm_denom);
        Fraction sum = Fraction((new_frac_1.Numerator() + new_frac_2.Numerator()), comm_denom);

        //Simplify(sum);

        return sum;
    }
}

Fraction& operator-(Fraction& frac_1, Fraction& frac_2)
{
    //check whether there is a common denominator
    if (frac_1.Denominator() == frac_2.Denominator())
    {
        //subtract the numerators to get the resulting numerator
        int difference_num = frac_1.Numerator() - frac_2.Numerator();
        Fraction difference = Fraction(difference_num, frac_1.Denominator());

        //Simplify(difference);

        return difference;
    }
    else
    {
        //find the two fractions' common denominator
        int comm_denom = frac_1.GetCommonDenominator(frac_1.Denominator(), frac_2.Denominator());

        //convert both fractions to that common denominator and subtract
        Fraction new_frac_1 = frac_1.ToCommonDenominator(frac_1, comm_denom);
        Fraction new_frac_2 = frac_2.ToCommonDenominator(frac_2, comm_denom);
        Fraction difference = Fraction((new_frac_1.Numerator() - new_frac_2.Numerator()), comm_denom);

        //Simplify(difference);

        return difference;
    }
}
