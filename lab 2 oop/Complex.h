#pragma once
class Complex
{
private:
	double pComplex;
	double pReal;

public:
	Complex();
	Complex(double real, double complex);

	double getComplex();
	double getReal();

	void setRealpart(double value);
	void setComplexpart(double value);

	Complex add(Complex adunare);
	Complex mul(Complex inmultire);
	Complex div(Complex imparte);
	double abs();
	Complex polarform();
};
