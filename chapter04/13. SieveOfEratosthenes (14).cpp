#include <iostream>
#include <vector>

//Create a program to find all the prime numbers between 1 and 100. 
//There is a classic method for doing this, called the “Sieve of Eratosthenes.” 
//If you don’t know that method, get on the web and look it up.
//Write your program using this method.

void SieveOfEratosthenes(int n);

int main()
{
	int n = 0;

	std::cout << "Enter a positive integer:\n";
	std::cin >> n;

	std::cout << "The following numbers are prime numbers below " << n << ":" << std::endl;

	SieveOfEratosthenes(n);

	return 0;
}

void SieveOfEratosthenes(int n)
{
	// populate a vector with boolean values set to true
	std::vector<bool> numbers(n, true);


	for (int i = 2; i < sqrt(n); i++)
	{
		if (numbers[i])
		{
			for (int j = i*i; j < n; j += i)
				numbers[j] = false;
		}
	}

	// print all prime numbers
	for (int i = 2; i < n; i++)
		if (numbers[i])
			std::cout << i << "\t";

	std::cout << "\n";
}

