#include<iostream>
#include "Complex.h"
#include<cassert>

int main()
{
	Complex s;
	Complex a = Complex(1, 2);
	Complex b = Complex(2, 3);
	Complex res = a.mul(b);
	Complex c = Complex(3, 4);
	Complex d = Complex(4, 5);
	s = a.add(b);
	std::cout << s.getReal() << " " << s.getComplex() << std::endl;
	Complex v[6] = { a,b,res,c,d };
	Complex aux;
	for (int i = 0; i < 5; i++)

	{
		for (int j = i + 1; j < 5; j++)

		{
			if (v[j].abs() < v[i].abs())

			{
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;

			}
		}
	}

	Complex suma(0, 0);
	for (int i = 0; i <= 5; i++)
	{
		std::cout << v[i].getReal() << " " << v[i].getComplex() << ",";
		suma = suma.add(v[i]);
	}
	std::cout << " suma este:" << suma.getReal() << " " << suma.getComplex << " " << std::endl;

	//teste
	assert(a.abs() == sqrt(5));
	assert(a.polarform().getReal == sqrt(5) * cos(atan(2)));

	std::cout << res.getReal() << " " << res.getComplex << " " << "i";
	std::cout << std::endl << a.abs();
}


