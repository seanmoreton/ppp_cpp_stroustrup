#include <iostream>
#include <vector>

int main()
{
	std::vector<int> primes;

	int n = 0;
	int numberOfPrimes = 0;

	std::cout << "Enter a number(n) which will then find the first n primes:\n\n";

	std::cin >> n;

	for (int i = 2; primes.size() < n; i++) // loop until the size of the vector 'prime' matches n
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
		{
			numberOfPrimes++;
			primes.push_back(i); // if it's a prime number, store in a vector

			if (numberOfPrimes == n)
				break;
		}
	}

	// print all the primes
	for (int x : primes)
		std::cout << x << "\t";
}