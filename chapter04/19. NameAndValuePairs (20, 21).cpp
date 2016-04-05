// User inputs names and corresponding scores, which are then stored in seperate vectors. 
// The names and scores are then displayed to the user as follows: Name 500\n.
// The user can then search for a name or score, which results in either the score of a specific name 
// or a list of names with a specified score.

#include "stdafx.h"

#include <ctype.h>
#include <iostream>
#include <limits>
#include <string>
#include <vector>

// intialised vectors here so that they can be used in a seperate function (C++ noob here)
std::vector<std::string> names;
std::vector<int> values;

void searchScores();

int main()
{
	std::cout << "Enter a name and a value seperated by a space followed by the ENTER key. Once all values are entered, type \"NoName 0\" without the quotation marks followed by the ENTER key:\n\n";

	std::string tempString = "???";
	int tempInt = 0;

	// populate both arrays with a name and their corresponding score
	while (std::cin >> tempString >> tempInt && !(tempString == "NoName" && tempInt == 0))
	{
		names.push_back(tempString);
		values.push_back(tempInt);
	}

	// check for duplicate names and remove all but the last one entered
	for (int i = 0; i < names.size(); i++)
	{
		// j = i+1 is used to ensure that it does not give a false duplicate of the string comparison in question
		for (int j = i+1; j < names.size(); j++)
		{
			if (names[i] == names[j])
			{
				// remove the name and value from each vector at index i
				std::cout << "Duplicate found: " << names[i] << std::endl;
				names.erase(names.begin() + i);
				values.erase(values.begin() + i);
			}
		}
	}

	// display the name and value seperated by a tab
	for (int i = 0; i < names.size(); i++)
		std::cout << "\n" << names[i] << "\t" << values[i] << "\n";


	// search through both vectors and display the results of the given query
	searchScores();
}

void searchScores()
{
	std::string userInput = "???";
	int valueInput = 0;
	std::string nameInput = "???";

	std::cout << "\nEnter a name or score. To QUIT, type \"NoName\" without the quotation marks followed by the ENTER key.\n\n";

	while (std::cin >> userInput && !(userInput == "NoName"))
	{
		// this is used to determine if the value entered is a string or integer
		bool isInt = false;

		// this is used to count how many names match a given value
		int valuesFound = 0;

		// this is used to break the loop when a name is found in the vector
		bool nameFound = false;

		// check if the value entered by the user is a string or integer
		for (int i = 0; i < userInput.length(); i++)
		{
			if (isdigit(userInput[i]))
			{
				// convert the string to an int data type if all chars of a given string are numbers
				valueInput = std::stoi(userInput);
				isInt = true;
			}
			else
				nameInput = userInput;
		}

		// searches through the values vector if the user query is an integer
		if (isInt)
		{
			for (int i = 0; i < values.size(); i++)
			{
				if (values[i] == valueInput)
				{
					std::cout << "RESULT: " << names[i] << "\t" << values[i] << std::endl;
					valuesFound++;
				}
			}
			if (valuesFound < 1)
				std::cout << "RESULT: Score not found.\n";
		}
		// searches through the names vector if the user query is a string
		else
		{
			for (int i = 0; i < names.size(); i++)
			{
				if (names[i] == nameInput)
				{
					std::cout << "RESULT: " << names[i] << "\t" << values[i] << std::endl;
					nameFound = true;
					break;
				}
			}
			if (!nameFound)
				std::cout << "RESULT: Name not found.\n";
		}
	}
}

