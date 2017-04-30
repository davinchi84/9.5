#include <iostream>
using namespace std;

class Complex
{
  public:
    Complex(double, double);

    // function to set complex number
    void setComplex(int, int);
    

    // function that gets the real part
    double getRealPart();

    // function that gets the imaginary part
    double getImaginaryPart();

    // function that displays Complex number
    void displayComplex();

  private:
    double realPart;
    double imaginaryPart;
};