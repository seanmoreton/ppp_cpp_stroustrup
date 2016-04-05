#include <iostream>

// prints a letter followed by it's ascii number

//// while loop
//int main()
//{
//	int i = 0;
//	char beginningletter = 'a';
//	char letter = 'a';
//
//	while (i < 26)
//	{
//		std::cout << letter << "\t" << beginningletter + i << std::endl;
//		i++;
//		letter++;
//	}
//}


// for loop
int main()
{
	char beginningletter = 'A';
	char letter = 'A';

	for (int i = 0; i < 26; i++)
	{
		std::cout << letter << "\t" << beginningletter + i << std::endl; // \t is a tabbed space
		letter++;
	}
}

