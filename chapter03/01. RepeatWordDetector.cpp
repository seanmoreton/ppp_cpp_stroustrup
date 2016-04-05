#include <iostream>
#include <string>

using namespace std;


int main()
{
	int numberOfWords = 0;
	string previous = " "; // not a word
	string current;

	cout << "Type a sentence:\n";

	while (cin >> current)
	{
		if (current == previous)
		{
			numberOfWords++; // increment word count (can also be numberOfWords = numberOfWords + 1; or numberOfWords += 1;)
			cout << "Word number: " << numberOfWords << "\n"
				<< "Repeated word: " << current << "\n";
		}
		previous = current;
	}
}

