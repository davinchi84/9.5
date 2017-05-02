#include <iostream>
using namespace std;

class Complex
{
  public:
    Complex(double = 0,double = 0);

    // function to set complex number
    void setComplex(double, double);
    
    // function that gets the real part
    double getRealPart();

    // function that gets the imaginary part
    double getImaginaryPart();

    // function that displays Complex number
    void displayComplex();

    // add complex
    Complex addComplex(Complex);

    // subtract complex
    Complex subtractComplex(Complex);

  private:
    double realPart;
    double imaginaryPart;
};