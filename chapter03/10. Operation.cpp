#include <iostream>

using namespace std;


int main()
{
	cout << "Enter an operation (+ - * /) followed by two floating-point values, each seperated by a space: \n\n";

	char operation;
	double val1;
	double val2;

	while (cin >> operation >> val1 >> val2)
	{
		if (operation == '+')
			cout << val1 << " + " << val2 << " == " << val1 + val2 << endl;
		else if (operation == '-')
			cout << val1 << " - " << val2 << " == " << val1 - val2 << endl;
		else if (operation == '*')
			cout << val1 << " * " << val2 << " == " << val1 * val2 << endl;
		else if (operation == '/')
		{
			if (val2 == 0)
				cout << "You mad? Don't even try diving by 0.\n\n";
			else
				cout << val1 << " / " << val2 << " == " << val1 / val2 << endl;
		}
		else
			cout << "Please enter a valid operator (+ - * /).\n\n";
	}
	cout << "Closing due to invalid input.\n\n";

}

