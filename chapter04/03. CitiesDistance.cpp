#include <iostream>
#include <vector>


int main()
{
	std::vector<double> distance;

	std::cout << "Please enter a positive double number:\n";

	double temp = 0.0;

	while (std::cin >> temp)
	{
		if (temp > 0)
			distance.push_back(temp);
		else
			std::cout << "Please enter a positive double number:\n";
	}

	double sum = 0.0;
	double smallest = -1.0;
	double greatest = -1.0;
	double mean = 0.0;

	for (int x : distance) // range-for-statemenet - loops through the vector and prints x to the screen, x being the position in the vector.
	{
		std::cout << x << std::endl;

		sum += x; // add up all the values in the vector.

		if (smallest == -1.0 && greatest == -1.0) // sets the smallest and greatest with the first set of values inputted.
		{
			smallest = x;
			greatest = x;
		}
		else
		{
			if (x < smallest)
				smallest = x;
			if (x > greatest)
				greatest = x;				
		}
	}

	mean = sum / distance.size();

	std::cout << "The sum of all distances is " << sum << std::endl
		<< "The greatest distance is " << greatest << std::endl
		<< "The smallest distance is " << smallest << std::endl
		<< "The mean distance is " << mean << std::endl;

}

