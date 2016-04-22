// Read(day - of - the - week, value) pairs from standard input.
// For example: Tuesday 23 Friday 56 Tuesday –3 Thursday 99
// Collect all the values for each day of the week in a vector<int>.
// Write out the values of the seven day - of - the - week vectors.
// Print out the sum of the values in each vector.
// Ignore illegal days of the week, such as Funday, but accept common synonyms such as Mon and monday.
// Write out the number of rejected values.


#include "stdafx.h"

#include <cctype>
#include <iostream>
#include <string>
#include <vector>


// display the sum of values within a vector
void sumValues(std::vector<int> values)
{
	int sumOfValues = 0;

	for (int x : values)
	{
		sumOfValues += x;
	}

	std::cout << "The sum of all the values is: " << sumOfValues << std::endl;
}

// display the values that are in each vector, titled with the day
void displayValues(std::string day, std::vector<int> values)
{
	std::cout << day << "\n";

	for (int x : values)
		std::cout << x << std::endl;

	sumValues(values);

	std::cout << std::endl;
}

int main()
{
	std::string tempDay = " ";
	int tempValue = -1;
	int rejected = 0;

	std::vector<int> mon;
	std::vector<int> tue;
	std::vector<int> wed;
	std::vector<int> thu;
	std::vector<int> fri;
	std::vector<int> sat;
	std::vector<int> sun;

	std::cout 
		<< "Enter the day of the week and a value. E.g. 'Friday 13' or 'Fri -1'.\n"
		<< "Once you have entered all of your days and values, type 'Stop 0'.\n\n";

	while (tempDay != "stop")
	{
		if (!(std::cin >> tempDay >> tempValue))
		{
			// too lazy to do good error handling
			std::cerr << "Error: Invalid data entered.\n\n";
			return 1;
		}
	
		// convert all characters to lowercase
		for (int i = 0; i < tempDay.length(); ++i)
			tempDay[i] = tolower(tempDay[i]);

		if (tempDay == "stop" || tempValue == 0)
			break;
		else if (tempDay == "monday" || tempDay == "mon")
			mon.push_back(tempValue);
		else if (tempDay == "tuesday" || tempDay == "tue" || tempDay == "tues")
			tue.push_back(tempValue);
		else if (tempDay == "wednesday" || tempDay == "wed")
			wed.push_back(tempValue);
		else if (tempDay == "thursday" || tempDay == "thu" || tempDay == "thur" || tempDay == "thurs")
			thu.push_back(tempValue);
		else if (tempDay == "friday" || tempDay == "fri")
			fri.push_back(tempValue);
		else if (tempDay == "saturday" || tempDay == "sat")
			sat.push_back(tempValue);
		else if (tempDay == "sunday" || tempDay == "sun")
			sun.push_back(tempValue);
		else
		{
			std::cout << "You didn't enter a correct day.\n";
			++rejected;
		}
	}

	// display the values of each vector
	displayValues("Monday ", mon);
	displayValues("Tuesday ", tue);
	displayValues("Wednesday ", wed);
	displayValues("Thursday ", thu);
	displayValues("Friday ", fri);
	displayValues("Saturday ", sat);
	displayValues("Sunday ", sun);

	// display rejected days i.e Funday
	if (rejected > 0)
		std::cout << "Rejected inputs: " << rejected << std::endl;
}