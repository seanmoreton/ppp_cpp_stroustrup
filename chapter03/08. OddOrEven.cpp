#include <iostream>

using namespace std;


int main()
{
	int number = 0;

	cout << "Enter an integer:\n";

	cin >> number;

	// number % 2 computes the remainder when number is divided by 2
	if (number % 2 == 0)
		cout << number << " is even.\n";
	else
		cout << number << " is odd.\n";
}

