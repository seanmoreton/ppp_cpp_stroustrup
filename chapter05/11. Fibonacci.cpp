// Write a program that writes out the first so many values of the Fibonacci series, that is, the series that starts with 1 1 2 3 5 8 13 21 34.
// The next number of the series is the sum of the two previous ones. Find the largest Fibonacci number that fits in an int. (2,147,483,647 for 32-bit integer)

#include "stdafx.h"

#include <iostream>

int main()
{
	int a = 1;
	int b = 2;
	int temp = 0;

	while (a < b)
		{
			std::cout << a << std::endl;

			temp = a + b;
			a = b;
			b = temp;
		}
	
	std::cout << "The largest Fibonacci number that fits in an 32-bit integer is " << a << std::endl;
}