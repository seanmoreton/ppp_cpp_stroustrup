#include <iostream>
#include <string>
#include <vector>

//Write a program that plays the game “Rock, Paper, Scissors.”
//If you are not familiar with the game do some research(e.g., on the web using Google).
//Research is a common task for programmers. Use a switch - statement to solve this exercise.
//Also, the machine should give random answers(i.e., select the next rock, paper, or scissors randomly).
//Real randomness is too hard to provide just now, so just build a vector with a sequence of values to be used as “the next value.” 
//If you build the vector into the program, it will always play the same game, so maybe you should let the user enter some values.
//Try variations to make it less easy for the user to guess which move the machine will make next.


int main()
{
	std::vector<int> cpuChoices;

	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int num5 = 0;

	std::cout << "Enter five numbers between 1 and 9 seperated by spaces, and then the '|' symbol followed by the ENTER key. (press Ctrl+Z when finished)\n\n";

	// have user enter 5 numbers which be stored in a vector (only single digits between 1 and 9)
	std::cin >> num1
		>> num2
		>> num3
		>> num4
		>> num5;

	// shit way of entering values into vector (could be a for loop but I'm shit)
	cpuChoices.push_back(num1);
	cpuChoices.push_back(num2);
	cpuChoices.push_back(num3);
	cpuChoices.push_back(num4);
	cpuChoices.push_back(num5);

	std::cin.clear(); // clears the cin.fail flag
	std::cin.ignore(std::numeric_limits<int>::max(), '\n'); // discards data currently in the input buffer (in this case the biggest possible value of an int)

	// depending on user input, have cpuChoices appear random
	if (cpuChoices[0] <= 5)
		cpuChoices[0] = cpuChoices[0] + 2;
	else
		cpuChoices[0] = cpuChoices[0] - 3;

	if (cpuChoices[1] <= 5)
		cpuChoices[1] = cpuChoices[1] + 3;
	else
		cpuChoices[1] = cpuChoices[1] - 4;

	if (cpuChoices[2] <= 5)
		cpuChoices[2] = cpuChoices[2] + 1;
	else
		cpuChoices[2] = cpuChoices[2] - 2;

	if (cpuChoices[3] <= 5)
		cpuChoices[3] = cpuChoices[3] + 4;
	else
		cpuChoices[3] = cpuChoices[3] - 1;

	// use this vector to store the new cpuChoice values as either r, p, or s
	std::vector<std::string> options;

	for (int i = 0; i < cpuChoices.size(); i++)
	{
		if (cpuChoices[i] == 1 || cpuChoices[i] == 4 || cpuChoices[i] == 7)
			options.push_back("rock");
		else if (cpuChoices[i] == 2 || cpuChoices[i] == 5 || cpuChoices[i] == 8)
			options.push_back("paper");
		else if (cpuChoices[i] == 3 || cpuChoices[i] == 6 || cpuChoices[i] == 9)
			options.push_back("scissors");
		else
			std::cout << "Error!" << std::endl;
	}

	for (std::string x : options)
		std::cout << x << std::endl;


	std::cout << "ROCK PAPER SCISSORS.\nEnter 'r', 'p', or 's' followed by the ENTER key.\nYou can quit at any time by entering 'q'.\n\n";
	
	char userChoice = ' ';

	int userScore = 0;
	int cpuScore = 0;

	// needs implementing fully...barely started!
	for (int i = 0; i < cpuChoices.size(); i++)
	{
		std::cin >> userChoice;

		switch (userChoice)
		{
		case 'r':
			std::cout << "USER: rock" << std::endl;
			std::cout << "CPU: " << options[i] << std::endl;
			if (options[i] == "rock")
			{
				userScore += 0;
				cpuScore += 0;
				std::cout << "It's a draw. " << "PLAYER: " << userScore << " CPU: " << cpuScore << std::endl;
			}
			
			if (options[i] == "paper")
			{
				userScore += 0;
				cpuScore += 1;
				std::cout << "You lose. " << "PLAYER: " << userScore << " CPU: " << cpuScore << std::endl;
			}

			if (options[i] == "scissors")
			{
				userScore += 1;
				cpuScore += 0;
				std::cout << "You win. " << "PLAYER: " << userScore << " CPU: " << cpuScore << std::endl;
			}
			break;
		case 'p':
			std::cout << "USER: paper\n";
			std::cout << "CPU: " << options[i] << std::endl;
			if (options[i] == "rock")
			{
				userScore += 1;
				cpuScore += 0;
				std::cout << "You win. " << "PLAYER: " << userScore << " CPU: " << cpuScore << std::endl;
			}

			if (options[i] == "paper")
			{
				userScore += 0;
				cpuScore += 0;
				std::cout << "It's a draw. " << "PLAYER: " << userScore << " CPU: " << cpuScore << std::endl;
			}

			if (options[i] == "scissors")
			{
				userScore += 0;
				cpuScore += 1;
				std::cout << "You lose. " << "PLAYER: " << userScore << " CPU: " << cpuScore << std::endl;
			}
			break;
		case 's':
			std::cout << "USER: scissors\n";
			std::cout << "CPU: " << options[i] << std::endl;
			if (options[i] == "rock")
			{
				userScore += 0;
				cpuScore += 1;
				std::cout << "You lose. " << "PLAYER: " << userScore << " CPU: " << cpuScore << std::endl;
			}

			if (options[i] == "paper")
			{
				userScore += 1;
				cpuScore += 0;
				std::cout << "You win. " << "PLAYER: " << userScore << " CPU: " << cpuScore << std::endl;
			}

			if (options[i] == "scissors")
			{
				userScore += 0;
				cpuScore += 0;
				std::cout << "It's a draw. " << "PLAYER: " << userScore << " CPU: " << cpuScore << std::endl;
			}
			break;
		case 'q':
			return 0;
		default:
			std::cout << "Enter 'r', 'p', or 's' followed by the ENTER key.\n\n";
			break;
		}
	}
}