#include <iostream>


int mySquare(int n); // function declaration


int main()
{
	std::cout << "Enter an integer to be squared: \n\n";

	int n = 0;

	std::cin >> n;

	std::cout << mySquare(n) << "\n\n"; // squares a number using mySquare() function (which involves addition instead of multiplaying by itself)
}


int mySquare(int n) // function definition
{
	int result = 0;

	for (int i = 0; i < n; i++)
		result = result + n;

	return result;
}