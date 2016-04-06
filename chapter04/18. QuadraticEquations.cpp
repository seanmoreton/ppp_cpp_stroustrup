// Write a program to solve quadratic equations.
// A quadratic equation is of the form: ax2 + bx + c = 0
// If you don’t know the quadratic formula for solving such an expression, do some research.
// Remember, researching how to solve a problem is often necessary before a programmer can teach the computer how to solve it.
// Use doubles for the user inputs for a, b, and c.
// Since there are two solutions to a quadratic equation, output both x1 and x2.

// Quadratic Formula: x1 = -b + sqrt(b squared - 4*a*c) / 2*a  OR  x2 = -b - sqrt(b squared - 4*a*c) / 2*a

#include "stdafx.h"

#include <iostream>
#include <math.h>

void quadraticFormula(double a, double b, double c);

int main()
{
	double a = 0.0;
	double b = 0.0;
	double c = 0.0;

	std::cout << "QUADRATIC FORMULA\n"
		<< "=================\n\n"
		<< "Enter the values for coefficients a, b, and c, followed by the ENTER key.\nUsage: 2 -3 -8\n\n";

	while (true)
	{
		std::cin >> a >> b >> c;

		if (a == 0)
			std::cout << "'a' cannot be zero.\n"; // if the user inputs 0 for 'a', prompt the user for a, b, and c again
		else
			quadraticFormula(a, b, c);
	}
}

void quadraticFormula(double a, double b, double c)
{
	double x1 = 0.0;
	double x2 = 0.0;
	double discriminent = (b*b - 4 * a * c);
	bool negativeDisc = false;

	// deal with complex roots
	if (discriminent < 0)
	{
		// converts a negative double to a positive
		discriminent = fabs(discriminent);
		negativeDisc = true;
	}

	// print root values depending on if it has a complex root of not
	if (negativeDisc)
	{
		std::cout << "x = " << -b / (2 * a) << " + " << sqrt(discriminent) / (2 * a) << "i" << std::endl;
		std::cout << "x = " << -b / (2 * a) << " - " << sqrt(discriminent) / (2 * a) << "i" << std::endl;
		std::cout << std::endl;
	}
	else
	{
		// quadratic formula
		x1 = (-b + sqrt(discriminent)) / (2 * a);
		x2 = (-b - sqrt(discriminent)) / (2 * a);

		std::cout << "x = " << x1 << std::endl;
		std::cout << "x = " << x2 << std::endl;
		std::cout << std::endl;
	}
}