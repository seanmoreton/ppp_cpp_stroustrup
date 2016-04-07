// Temperature converter
// Convert Celsius to Kelvin and vice versa

#include "stdafx.h"
#include "std_lib_facilities.h"

// converts Celsius to Kelvin
double ctok(double c) 
{
	const double min_temp_c = -273.15;

	if (c < min_temp_c)
	{
		std::cerr << "The lowest temperature is -273.15 C\n";
		c = min_temp_c;
	}

	// K = C + 273.15
	double k = c + 273.15;
	return k;
}

// converts Kelvin to Celsius
double ktoc(double k)
{
	const int min_temp_k = 0;

	if (k < min_temp_k)
	{
		std::cerr << "The lowest temperature is 0 K\n";
		k = min_temp_k;
	}

	// C = K - 273.15
	double c = k - 273.15;
	return c;
}

int main()
{
	std::cout << "Enter the corresponding number followed by the ENTER key:\n"
		<< "1 - Celsius to Kelvin\n"
		<< "2 - Kelvin to Celsius\n"
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
			double k = ctok(c);
			std::cout << k << " K\n";
		}

		else if (userInput == 2)
		{
			double k = 0;
			std::cout << "Enter a temperature in Kelvin:\n";
			std::cin >> k;
			double c = ktoc(k);
			std::cout << c << " C\n";
		}

		else // in the event the user enters a value which cannot be stored in an int
		{
			cin.clear(); // clears the cin.fail flag
			cin.ignore(numeric_limits<int>::max(), '\n'); // discards data currently in the input buffer (in this case the biggest possible value of an int)
		}
	}
}
