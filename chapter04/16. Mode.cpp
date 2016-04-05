#include <algorithm>
#include <iostream>
#include <vector>

int findMode(std::vector<int> numbers);

int main()
{
	std::vector<int> numbers;

	int temp = 0;

	std::cout << "Enter a list of positive integers, each seperated by a space. Once finished enter the '|' key and then press the ENTER button.\n\n";

	while (std::cin >> temp)
		numbers.push_back(temp);

	// sort the values in the vector from lowest to highest
	std::sort(numbers.begin(), numbers.end());

	for (int i = 0; i < numbers.size(); i++)
		std::cout << numbers[i] << std::endl;

	int mode = findMode(numbers);

	std::cout << "The mode of these positive integers is " << mode << std::endl;
}

int findMode(std::vector<int> vec)
{
	int currentVal = vec[0];
	int mode = currentVal;
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