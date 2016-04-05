#include <iostream>
#include <string>

//// using an if-statement
//int main()
//{
//	double yen = 0.00895987; // yen to dollar on 22/03/2016
//	double euro = 1.12103; // euro to dollar
//	double pound = 1.42224; // pound to dollar
//
//	double amount = 0.0;
//	std::string currency = "???";
//
//	std::cout << "Enter how much you want converted to dollars followed by your currency (euro, pound, yen):\n\n";
//
//	while (std::cin >> amount >> currency)
//	{
//		if (currency == "yen")
//			std::cout << amount * yen << std::endl;
//		else if (currency == "euro")
//			std::cout << amount * euro << std::endl;
//		else if (currency == "pound")
//			std::cout << amount * pound << std::endl;
//		else
//			std::cout << "Invalid currency entered.\n";
//	}
//}

// using a switch-statement
int main()
{
	double yen = 0.00895987; // yen to dollar on 22/03/2016
	double euro = 1.12103; // euro to dollar
	double pound = 1.42224; // pound to dollar

	double amount = 0.0;
	char currency = '?';

	std::cout << "Enter how much you want converted to dollars followed by your currency (e, p, y):\n\n";

	std::cin >> amount >> currency;
		
	switch (currency)
	{
		case 'y':
			std::cout << amount * yen << std::endl;
			break;
		case 'e':
			std::cout << amount * euro << std::endl;
			break;
		case 'p':
			std::cout << amount * pound << std::endl;
			break;
		default:
			std::cout << "Invalid currency entered.\n";
			break;
	}
}