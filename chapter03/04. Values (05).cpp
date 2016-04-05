#include <iostream>

using namespace std;

int main()
{
	double val1 = 0.0;
	double val2 = 0.0;
	double largest;
	double smallest;

	cout << "Please enter two integers, each seperated by a space:\n";
	cin >> val1 >> val2;

	cout << "\nThe two integers are " << val1 << " and " << val2 << endl;

	if (val1 > val2)
	{
		largest = val1;
		smallest = val2;
		cout << "Largest: " << val1 << endl;
		cout << "Smallest: " << val2 << endl;
	}
	else
	{
		largest = val2;
		smallest = val1;
		cout << "Largest: " << val2 << endl;
		cout << "Smallest: " << val1 << endl;
	}

	cout << "The sum is: " << val1 + val2 << endl
		<< "The difference is " << largest - smallest << endl
		<< "The product is " << val1 * val2 << endl
		<< "The ratio is " << largest / smallest << ":1" << endl;




}

