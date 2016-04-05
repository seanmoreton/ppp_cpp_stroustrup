#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


//int main()
//{
//	double val1 = 0.0;
//	double val2 = 0.0;
//
//	while (std::cin >> val1 >> val2)
//	{
//		std::cout << "Values: " << val1 << " " << val2 << std::endl;
//
//		if (val1 < val2)
//		{
//			std::cout << "Smallest: " << val1 << std::endl;
//			std::cout << "Largest " << val2 << std::endl;
//
//			if (val2 - val1 < 1.0/10000000)
//				std::cout << "These numbers are almost equal." << std::endl;
//		}
//		else if (val2 < val1)
//		{
//			std::cout << "Smallest: " << val2 << std::endl;
//			std::cout << "Largest: " << val1 << std::endl;
//
//			if (val1 - val2 < 1.0/10000000)
//				std::cout << "These numbers are almost equal." << std::endl;
//		}
//		else if (val1 == val2)
//		{
//			std::cout << val1 << " and " << val2 << " are of the same value." << std::endl;
//		}
//		else
//		{
//			std::cout << "ERROR!" << std::endl;
//		}
//	}
//}

int main()
{
	double val = 0.0;
	double smallest = -1;
	double largest = -1;
	
	std::string unit = "???";

	// unit values
	const double cm = 1;
	const double in = 2.54 * cm;
	const double ft = 12 * in;
	const double m = 100 * cm;

	// declare a vector
	std::vector<double> values;

	while (std::cin >> val >> unit)
	{
		bool validUnit = false;

		// convert all values into centimeters for easy calculation
		if (unit == "cm")
		{
			val *= cm; // can also be val = val * cm;
			validUnit = true;
		}
		else if (unit == "in")
		{
			val *= in;
			validUnit = true;
		}
		else if (unit == "ft")
		{
			val *= ft;
			validUnit = true;
		}
		else if (unit == "m")
		{
			val *= m;
			validUnit = true;
		}
		else
			std::cout << "Invalid unit entered.\n\n";

		if (validUnit)
		{
			values.push_back(val); // put each value into vector

			std::cout << "Current value: " << val/m << "m" << std::endl; // print value in meters

			// ensures that first time through the loop, the smallest and largest get proper values (as opposed to both starting as 0, which would make it the smallest)
			if (smallest == -1 && largest == -1)
			{
				smallest = val;
				largest = val;
			}
			else
			{
				if (val <= smallest)
				{
					smallest = val;
				}
				else if (val >= largest)
				{
					largest = val;
				}
			}
		}
		else
			std::cout << "Please enter a valid unit of measurement (cm in ft m):\n\n";
	}

	// display the smallest, largest values, and the total number of entries
	std::cout << "Smallest: " << smallest/m << "m" << std::endl;
	std::cout << "Largest: " << largest/m << "m" << std::endl;
	std::cout << "Total values: " << values.size() << std::endl;

	double sumOfUnits = 0.0;

	// sort the values in the vector
	sort(values.begin(), values.end());

	// print each value entered in meters
	for (int i = 0; i < values.size(); i++)
	{
		std::cout << values[i] / m << "m" << std::endl;
		sumOfUnits += values[i];
	}
		
	// print the sum of all the values as meters
	std::cout << "The sum of all values: " << sumOfUnits/m << "m" << std::endl;
}

