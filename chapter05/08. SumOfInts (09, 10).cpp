// Display the sum of a vector of numbers
// Display the difference between adjacent numbers in said vector

#include "stdafx.h"

#include <iostream>
#include <math.h>
#include <vector>


int main()
{
	int numOfInts = 0;

	std::cout << "Please enter the number of values you want to sum:\n";
	std::cin >> numOfInts;

	if (numOfInts < 1)
		std::cerr << "You need to enter atleast 1 positive integer.\n";
	else
	{
		std::vector<double> values;
		std::vector<double> differences;

		double tempValue = 0;

		std::cout << "Please enter some values (enter '|' to stop):\n";
		while (std::cin >> tempValue)
			values.push_back(tempValue);

		if (values.size() != numOfInts)
			std::cerr << "You must enter " << numOfInts << " values.\n";
		else
		{
			double sum = 0;

			for (int i = 0; i < values.size(); ++i)
				sum += values[i];

			// display the sum of values
			std::cout << "The sum of these " << numOfInts << " values ( ";

			for (int i = 0; i < values.size(); ++i)
				std::cout << values[i] << " ";

			std::cout << ") is " << sum << "." << std::endl;
		}

		// calculate the difference between adjacent values in the values vector
		for (int i = 0; i < values.size() - 1; ++i)
			differences.push_back(fabs(values[i] - values[i + 1]));

		// display the differences
		std::cout << "The differences between the values are:\n";
		for (double x : differences)
			std::cout << x << std::endl;
	}
}

