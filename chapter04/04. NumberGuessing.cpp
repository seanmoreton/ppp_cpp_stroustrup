// Write a program to play a numbers guessing game.
// The user thinks of a number between 1 and 100 and your program asks questions to figure out what the number is
// (e.g., “Is the number you are thinking of less than 50 ? ”).
// Your program should be able to identify the number after asking no more than seven questions.
// Hint: Use the < and <= operators and the if - else construct.


#include "stdafx.h"

#include <iostream>


int main()
{
	int low = 1;
	int high = 100;

	char answer = ' ';
	int attempts = 0;

	std::cout << "Think of a number between " << low << " and " << high << ". I can guess it in at most 7 attempts!\n" << std::endl;

	while (true)
	{
		std::cout << "GUESS: Is the number: " << (low + high) / 2 << "? y or n\n" << std::endl;
		std::cin >> answer;

		if (answer == 'y')
		{
			attempts++;

			if (attempts == 1)
			{
				std::cout << "-----------------------------------------------------\n"
					<< "I win! The number is: " << (low + high) / 2 << ". I got it in only " << attempts << " attempt!" << std::endl;
				break;
			}
			else
			{
				std::cout << "-------------------------------------------------\n"
					<< "I win! The number is: " << (low + high) / 2 << ". I got it in " << attempts << " attempts!" << std::endl;
				break;
			}
		}

		if (answer == 'n')
		{
			attempts++;

			std::cout << "Is your number less than " << (low + high) / 2 << "? y or n\n" << std::endl;
			std::cin >> answer;

			if (answer == 'y')
				high = (low + high) / 2;
			else if (answer == 'n')
				low = (low + high) / 2;
			else
			{
				std::cout << "FATAL ERROR! I don't know how to deal with this!" << std::endl;
				break;
			}
		}
	}
}

