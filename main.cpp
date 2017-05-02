// 9.5 ( Complex Class) Create a class called Complex for performing arithmetic with complex num-
// bers. Write a program to test your class. Complex numbers have the form
// realPart + imaginaryPart * i
// where i is –1
// Use double variables to represent the private data of the class. Provide a constructor that enables
// an object of this class to be initialized when it’s declared. The constructor should contain default
// values in case no initializers are provided. Provide public member functions that perform the fol-
// lowing tasks:
// a) Adding two Complex numbers: The real parts are added together and the imaginary
// parts are added together.
// b) Subtracting two Complex numbers: The real part of the right operand is subtracted from
// the real part of the left operand, and the imaginary part of the right operand is sub-
// tracted from the imaginary part of the left operand.
// c) Printing Complex numbers in the form (a, b) , where a is the real part and b is the imag-
// inary part.

#include "Complex.h"

int main()
{
    Complex a(2,-1);
    Complex b(2,3);
    Complex c;

    a.displayComplex();
    b.displayComplex();

    c=a.subtractComplex(b);

    c.displayComplex();
}