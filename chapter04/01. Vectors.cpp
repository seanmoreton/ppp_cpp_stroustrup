#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

//// outputs tempratures to the screen
//int main()
//{
//	std::vector<double> temps;
//	double temp;
//
//	while (std::cin >> temp)
//		temps.push_back(temp);
//
//	double sum = 0;
//
//	for (int i = 0; i < temps.size(); i++)
//		std::cout << temps[i] << std::endl;
//}

int main()
{
	std::vector<std::string> words;
	std::string temp;
	while (std::cin >> temp)
		words.push_back(temp); // puts all inputted strings into a vector called words

	std::cout << "Number of words: " << words.size() << std::endl; // displays how many elements are in the vector

	sort(words.begin(), words.end()); // sort from beginning to end

	for (int i = 0; i < words.size(); i++)
		if (i == 0 || words[i - 1] != words[i]) // checks if the previous word is the same as the current word
		{
			if (words[i] == "cunt" || words[i] == "fuck" || words[i] == "twat") // check for BLEEP!
				std::cout << "BLEEP" << "\n";
			else
				std::cout << words[i] << "\n";
		}
}

