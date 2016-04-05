#include <iostream>

using namespace std;


int main()
{
	cout << "How many miles?\n";

	double miles = 0.0;
	double kilometres = 0.0;

	while (cin >> miles)
	{
		kilometres = miles * 1.60934;

		cout << miles << " miles is " << kilometres << " kilometres." << endl;
	}

}

