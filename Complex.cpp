#include "Complex.h"

Complex::Complex(double Re, double Im)
    : realPart(Re), imaginaryPart(Im)
{
}

// function to set complex number
void Complex::setComplex(double Re, double Im)
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

    cout << "( " << realPart << ", " << imaginaryPart << " )" << endl;
}

// add complex
Complex Complex::addComplex(Complex B)
{
    double realA, imaginaryA;
    double realB, imaginaryB;
    double realC, imaginaryC;

    realA = getRealPart();           // real part of A
    imaginaryA = getImaginaryPart(); // imaginary part of A

    realB = B.getRealPart();           // real part of B
    imaginaryB = B.getImaginaryPart(); // imaginary part of B

    // complex summation
    realC = realA + realB;
    imaginaryC = imaginaryA + imaginaryB;

    Complex C(realC, imaginaryC);

    return C;
}

// subtract complex
Complex Complex::subtractComplex(Complex B)
{
    double realA, imaginaryA;
    double realB, imaginaryB;
    double realC, imaginaryC;

    realA = getRealPart();           // real part of A
    imaginaryA = getImaginaryPart(); // imaginary part of A

    realB = B.getRealPart();           // real part of B
    imaginaryB = B.getImaginaryPart(); // imaginary part of B

    // complex summation
    realC = realA - realB;
    imaginaryC = imaginaryA - imaginaryB;

    Complex C(realC, imaginaryC);

    return C;
}