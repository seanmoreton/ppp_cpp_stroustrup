#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

std::string findMode(std::vector<std::string> vec);
std::string findSmallest(std::vector<std::string> vec);
std::string findLargest(std::vector<std::string> vec);

int main()
{
	std::vector<std::string> strings;

	std::string temp = "???";

	std::cout << "Enter a list of strings, each seperated by a space. Press the ENTER button once all strings have been entered and then press CTRL + Z followed by the ENTER key again.\n\n";

	while (std::cin >> temp)
		strings.push_back(temp);

	// sort the values in the vector from lowest to highest
	std::sort(strings.begin(), strings.end());

	for (int i = 0; i < strings.size(); i++)
		std::cout << strings[i] << std::endl;

	// find the mode of a given set of values
	std::string mode = findMode(strings);
	std::string smallest = findSmallest(strings);
	std::string largest = findLargest(strings);

	std::cout << "The mode of these values is " << mode << std::endl;
	std::cout << "The smallest of these values is " << smallest << std::endl;
	std::cout << "The largest of these values is " << largest << std::endl;
}

// find the mode of the values in a vector
std::string findMode(std::vector<std::string> vec)
{
	std::string currentVal = vec[0];
	std::string mode = currentVal;
	int count = 1;
	int countMode = 1;

	for (int i = 1; i < vec.size(); i++)
	{
		if (vec[i] == currentVal)
		{
			count++;
			if (count > countMode)
			{
				countMode = count;
				mode = currentVal;
			}
		}
		else
		{
			count = 1;
			currentVal = vec[i];
		}
	}
	return mode;
}

// find the smallest value in a vector
std::string findSmallest(std::vector<std::string> vec)
{
	std::string smallest = " ";
	bool firstIteration = true;

	for (int i = 0; i < vec.size(); i++)
	{
		if (firstIteration)
		{
			smallest = vec[i];
			firstIteration = false;
		}
		if (vec[i] < smallest)
			smallest = vec[i];
	}
	return smallest;
}

// find the largest value in a vector
std::string findLargest(std::vector<std::string> vec)
{
	std::string largest = " ";
	bool firstIteration = true;

	for (int i = 0; i < vec.size(); i++)
	{
		if (firstIteration)
		{
			largest = vec[i];
			firstIteration = false;
		}
		if (vec[i] > largest)
			largest = vec[i];
	}
	return largest;
}