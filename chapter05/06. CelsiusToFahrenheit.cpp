// Temperature converter
// Convert Celsius to Fahrenheit and vice versa

#include "stdafx.h"
#include "std_lib_facilities.h"

// converts Celsius to Fahrenheit
double ctof(double c)
{
	// F = C * 1.8 + 32
	double f = c * 1.8 + 32;
	return f;
}

// converts Fahrenheit to Celsius
double ftoc(double f)
{
	// C = (F - 32) / 1.8
	double c = (f - 32) / 1.8;
	return c;
}

int main()
{
	std::cout << "Enter the corresponding number followed by the ENTER key:\n"
		<< "1 - Celsius to Fahrenheit\n"
		<< "2 - Fahrenheit to Celsius\n"
		<< "\n";

	while (true)
	{
		int userInput = 0;
		std::cin >> userInput;

		if (userInput == 1)
		{
			double c = 0;
			std::cout << "Enter a temperature in Celsius:\n";
			std::cin >> c;
			double f = ctof(c);
			std::cout << f << " F\n";
		}

		else if (userInput == 2)
		{
			double f = 0;
			std::cout << "Enter a temperature in Fahrenheit:\n";
			std::cin >> f;
			double c = ftoc(f);
			std::cout << c << " C\n";
		}

		else // in the event the user enters a value which cannot be stored in an int
		{
			cin.clear(); // clears the cin.fail flag
			cin.ignore(numeric_limits<int>::max(), '\n'); // discards data currently in the input buffer (in this case the biggest possible value of an int)
		}
	}
}
