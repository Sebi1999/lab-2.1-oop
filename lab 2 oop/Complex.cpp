#include "Complex.h"
#include <cmath>
#include <iostream>

Complex::Complex(double real, double complex)
{
	pReal = real;
	pComplex = complex;
}

Complex::Complex()
{
	pReal = 0;
	pComplex = 0;
}

double Complex::getComplex()
{
	return pComplex;
}

double Complex::getReal()
{
	return pReal;
};

void Complex::setComplexpart(double value)
{
	pComplex = value;
}

void Complex::setRealpart(double value)
{
	pReal = value;
}

Complex Complex::add(Complex adunare)
{
	adunare.pReal += pReal;
	adunare.pComplex += pComplex;
	return adunare;
}

Complex Complex::mul(Complex inmultire)
{
	//(a+bi)(c+di)=ac-bd+i(as+bc)
	inmultire.pReal = pReal * inmultire.pReal - pComplex * inmultire.pComplex;
	inmultire.pComplex = pReal * inmultire.pComplex + pComplex * inmultire.pReal;
	return inmultire;
}

Complex Complex::div(Complex impartire)
{
	impartire.pReal = (pReal * impartire.pReal + pComplex * impartire.pComplex) / (impartire.pReal * impartire.pReal + impartire.pComplex * impartire.pComplex);
	impartire.pComplex = (pComplex * impartire.pReal - pReal * impartire.pComplex) / (impartire.pReal * impartire.pReal + impartire.pComplex * impartire.pComplex);
	return impartire;
}

double Complex::abs()
{
	return sqrt(getReal() * getReal() + getComplex() * getComplex());
}

Complex Complex::polarform()
{
	Complex rez = Complex();
	double radius = abs();
	double theta = atan(getComplex() / getReal());
	rez.setRealpart(radius * cos(theta));
	rez.setComplexpart(radius * sin(theta));
	return rez;
}

