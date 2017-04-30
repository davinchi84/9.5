#include "Complex.h"

void Complex::Complex(double Re, double Im)
{
    setComplex(Re,Im);
}

// function to set complex number
void Comlex::setComplex(int Re, int Im)
{
    realPart = Re;
    imaginaryPart = Im;
}

// function that gets the real part
double Complex::getRealPart()
{
    return realPart;
}

// function that gets the imaginary part
double Complex::getImaginaryPart()
{
    return imaginaryPart;
}

// function that displays Complex number
void Complex::displayComplex()
{
    if (imaginaryPart < 0)
        cout << realPart << " " << imaginaryPart << "*i" << endl;

    else
        cout << realPart << " +" << imaginaryPart << "*i" << endl;
}