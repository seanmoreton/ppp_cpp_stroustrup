#include <algorithm>
#include <ctype.h>
#include <iostream>
#include <string>
#include <vector>

//Make a vector holding the ten string values "zero", "one", . . . "nine".
//Use that in a program that converts a digit to its corresponding spelled - out value; 
//e.g., the input 7 gives the output seven. Have the same program, using the same input loop, 
//convert spelled - out numbers into their digit form; e.g., the input seven gives the output 7.

int main()
{
	std::vector<std::string> numbers
		= { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

	std::cout << "Enter a number between 0 and 9 / zero and nine:\n";

    std::string valueString = "???";
	int valueNumber = 0;
	bool isInt = false;

	while (std::cin >> valueString)
	{
		for (int i = 0; i < valueString.length(); i++)
		{
			if (isdigit(valueString[i])) // checks if the string contains only integers
			{
				valueNumber = std::stoi(valueString);
				isInt = true;
			}
			else
			{
				isInt = false;
			}
		}

		if (isInt)
		{
			if (valueNumber < 0 || valueNumber > 9)
				std::cout << "Enter a number between 0 and 9 / zero and nine:\n";
			else
				std::cout << numbers[valueNumber] << std::endl;
		}
		else
		{
			auto position = find(numbers.begin(), numbers.end(), valueString); // finds the string in the vector, e.g. "one"
			int arrayPos = std::distance(numbers.begin(), position); // once string is found, store the position in the vector

			if (arrayPos < 0 || arrayPos > 9)
				std::cout << "Enter a number between 0 and 9 / zero and nine:\n";
			else
				std::cout << arrayPos << std::endl;
		}
	}

}

