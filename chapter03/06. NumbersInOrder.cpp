#include <iostream>
#include <string>

using namespace std;

int main()
{
	int val1 = 0;
	int val2 = 0;
	int val3 = 0;

	cout << "Enter three integers seperated by a space:\n";
	cin >> val1 >> val2 >> val3;

	cout << "Values inputted: " << val1 << ", " << val2 << ", " << val3 << endl;

	int smallest;
	int middle;
	int largest;

	if (val1 <= val2 && val1 <= val3)
	{
		smallest = val1;

		if (val2 <= val3)
		{
			middle = val2;
			largest = val3;
		}
		else
		{
			middle = val3;
			largest = val2;
		}
	}
	else if (val2 <= val1 && val2 <= val3)
	{
		smallest = val2;

		if (val1 <= val3)
		{
			middle = val1;
			largest = val3;
		}
		else
		{
			middle = val3;
			largest = val1;
		}
	}
	else
	{
		smallest = val3;

		if (val1 <= val2)
		{
			middle = val1;
			largest = val2;
		}
		else
		{
			middle = val2;
			largest = val1;
		}
	}

	cout << "Values sorted: " << smallest << ", " << middle << ", " << largest << endl;
}

