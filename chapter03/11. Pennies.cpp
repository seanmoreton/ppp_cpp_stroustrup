#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	int onePence;
	int twoPence;
	int fivePence;
	int tenPence;
	int twentyPence;
	int fiftyPence;

	cout << "How many 1p coins do you have?\n";
	cin >> onePence;

	cout << "How many 2p coins do you have?\n";
	cin >> twoPence;

	cout << "How many 5p coins pieces do you have?\n";
	cin >> fivePence;

	cout << "How many 10p coins do you have?\n";
	cin >> tenPence;

	cout << "How many 20p coins do you have?\n";
	cin >> twentyPence;

	cout << "How many 50p coins do you have?\n";
	cin >> fiftyPence;

	cout << "\nYou have " << onePence << " 1p coin(s)." << endl
		<< "You have " << twoPence << " 2p coin(s)." << endl
		<< "You have " << fivePence << " 5p coin(s)." << endl
		<< "You have " << tenPence << " 10p coin(s)." << endl
		<< "You have " << twentyPence << " 20p coin(s)." << endl
		<< "You have " << fiftyPence << " 50p coin(s).\n\n" << endl;

	
	
	double total = (onePence) + (twoPence * 2) + (fivePence * 5) + (tenPence * 10) + (twentyPence * 20) + (fiftyPence * 50);

	char pound = 156; // the only way I know how to output GBP £ in C++

	cout << "The value of all your coins is " << pound << fixed << setprecision(2) << total / 100 << "\n\n"; // needs std::fixed and std::setprecision(2) to print to two decimal places (#include iomanip)
}

