#include <iostream>
#include <string>

using namespace std;


int main()
{
	string word = "???";
	int number = -1;

	cout << "Enter a number as a word. E.g. Four:\n";

	while (cin >> word)
	{
		if (word == "zero")
			number = 0;
		if (word == "one")
			number = 1;
		if (word == "two")
			number = 2;
		if (word == "three")
			number = 3;
		if (word == "four")
			number = 4;

		if (number < 0 || number > 4)
		{
			cout << "Error...err...computers can't read past...four!\n";
		}
		else
		{
			cout << "The word " << word << " as a number is " << number << endl;
		}
		number = -1;
	}
}

