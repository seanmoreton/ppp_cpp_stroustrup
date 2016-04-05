#include <iostream>


int main()
{
	std::cout << "SIMPLE CALCULATOR\n\n"
		<< "Please enter two values and then an operator (+ - * /):\n\n";

	double val1 = 0.0;
	double val2 = 0.0;
	char operatorSymbol = ' ';
	
	while (std::cin >> val1 >> val2 >> operatorSymbol)
	{
		switch (operatorSymbol)
		{
		case '+':
			std::cout << val1 << " + " << val2 << " = " << val1 + val2 << std::endl;
			break;
		case '-':
			std::cout << val1 << " - " << val2 << " = " << val1 - val2 << std::endl;
			break;
		case '*':
			std::cout << val1 << " * " << val2 << " = " << val1 * val2 << std::endl;
			break;
		case '/':
			if (val2 == 0)
			{
				std::cout << "Please don't divide by 0" << std::endl;
				break;
			}
			else
			{
				std::cout << val1 << " / " << val2 << " = " << val1 / val2 << std::endl;
				break;
			}
		default:
			std::cout << "Invalid operator entered.\n\n";
			break;
		}
	}
}

