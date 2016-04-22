// Implement a little guessing game called(for some obscure reason) “Bulls and Cows.”
// The program has a vector of four different integers in the range 0 to 9 (e.g., 1234 but not 1122) and it is the user’s task to discover those numbers by repeated guesses.
// Say the number to be guessed is 1234 and the user guesses 1359;
// the response should be “1 bull and 1 cow” because the user got one digit(1) right and in the right position(a bull) and one digit(3) right but in the wrong position(a cow).
// The guessing continues until the user gets four bulls, that is, has the four digits correct and in the correct order.

#include "stdafx.h"

#include <iostream>
#include <time.h>
#include <vector>

// checks for duplicate digits
bool checkForDuplicates(std::vector<int> numbers)
{
	bool duplicates = false;

	for (int i = 0; i < numbers.size(); ++i)
	{
		if (duplicates)
			break;

		for (int j = 1; j < numbers.size(); ++j)
		{
			// i != j is to prevent finding a duplicate of itself
			if (i != j && numbers[i] == numbers[j])
			{
				duplicates = true;
				return duplicates;
			}
		}
	}
	return duplicates;
}


// generates 4 random unique digits between 0 and 9
std::vector<int> getNumbers()
{
	srand(time(NULL));

	bool numbersFound = false;

	std::vector<int> numbers;

	while (!numbersFound)
	{
		// store 4 unique random integers between 0 and 9
		numbers =
		{
			rand() % 10,
			rand() % 10,
			rand() % 10,
			rand() % 10
		};

		//// for testing
		//for (int x : numbers)
		//	std::cout << x << std::endl;
		//std::cout << std::endl;

		if (checkForDuplicates(numbers))
		{
			numbers.clear();
		}
		else
			numbersFound = true;
	}
	return numbers;
}

int main()
{
	while (true)
	{
		// get 4 random digits and store them in a vector
		std::vector<int> answers = getNumbers();

		bool success = false;
		int attempts = 0;

		std::cout
			<< "Try to guess the number I am thinking of.\n"
			<< "The number contains 4 digits between 0 and 9, and each digit is different.\n"
			<< "- For each correct digit guessed, you will get a \"cow\".\n"
			<< "- If you guess a digit in the correct position, you will get a \"bull\".\n\n";

		while (!success)
		{
			int temp = -1;
			int bulls = 0;
			int cows = 0;
			bool duplicates = true;

			// store user's guesses
			std::vector<int> guesses;

			while (duplicates)
			{
				// get digits from user
				while (!(std::cin >> temp))
				{
					std::cout << "Please enter only integers.\n\n";
					std::cin.clear(); // clears the cin.fail flag
					std::cin.ignore(std::numeric_limits<int>::max(), '\n'); // discards data currently in the input buffer (in this case the biggest possible value of an int)
				}

				// seperate the integer into four digits
				guesses.push_back(temp / 1000 % 10);
				guesses.push_back(temp / 100 % 10);
				guesses.push_back(temp / 10 % 10);
				guesses.push_back(temp % 10);

				if (checkForDuplicates(guesses))
				{
					std::cout << "Please enter 4 unique digits between 0 and 9.\n";
					guesses.clear();
				}
				else
					duplicates = false;
			}

			// compare the values entered by the user with the CPUs answers
			for (int i = 0; i < guesses.size(); ++i)
			{
				for (int j = 0; j < answers.size(); ++j)
				{
					if (guesses[i] == answers[j])
					{
						if (i == j)
							++bulls;
						else
							++cows;
					}
				}
			}

			// clears the vector of user guesses
			guesses.clear();

			// if user gets each digit right, they win, else display bulls/cows
			if (bulls == 4)
			{
				++attempts;
				if (attempts == 1)
				{
					std::cout << "\nYou guessed right! It took you only " << attempts << " attempt.\n" << std::endl;
					success = true;
				}
				else
				{
					std::cout << "\nYou guessed right! It took you " << attempts << " attempts.\n" << std::endl;
					success = true;
				}
			}
			else
			{
				std::cout << bulls << " bulls and " << cows << " cows.\n" << std::endl;
				++attempts;
			}
		}
	}
}

