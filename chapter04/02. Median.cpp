#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<double> temps;
	double temp;

	while (std::cin >> temp)
		temps.push_back(temp);

	// compute mean temprature
	sort(temps.begin(), temps.end()); // sort temps from beginning to end

	if (temps.size() % 2 == 0)
		std::cout << "Median temprature: " << (temps[temps.size()/2 - 1] + temps[temps.size() / 2]) / 2 << std::endl; // need to understand this better
	else
		std::cout << "Median temprature: " << temps[temps.size()/2] << std::endl;
}