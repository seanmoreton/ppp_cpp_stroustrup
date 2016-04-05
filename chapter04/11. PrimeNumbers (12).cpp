#include <iostream>
#include <vector>


//Create a program to find all the prime numbers between 1 and 100.
//One way to do this is to write a function that will check if a number is prime
//(i.e., see if the number can be divided by a prime number smaller than itself) using a vector of primes in order
//(so that if the vector is called primes, primes[0] == 2, primes[1] == 3, primes[2] == 5, etc.).
//Then write a loop that goes from 1 to 100, checks each number to see if it is a prime, and stores each prime found in a vector.
//Write another loop that lists the primes you found.
//You might check your result by comparing your vector of prime numbers with primes.
//Consider 2 the first prime.

int main()
{
	std::vector<int> primes;

	int numbers = 0;

	std::cout << "Enter a positive integer:\n\n";

	std::cin >> numbers;

	for (int i = 2; i <= numbers; i++) // n = 100 for the time being
	{
		bool isPrime = true;

		for (int j = 2; j < i; j++)
		{
			if (i % j == 0) // if there is no remainder remainder of i divided by j
			{
				isPrime = false; // then it is not a prime number
				break;
			}
		}

		if (isPrime)
			primes.push_back(i); // if it's a prime number, store in a vector

	}

	// print all the primes
	for (int x : primes)
		std::cout << x << std::endl;
}

