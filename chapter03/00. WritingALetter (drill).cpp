#include <iostream>
#include<string>

using namespace std;


int main()
{
	cout << "Enter the name of a friend you are writing to:\n";
	string firstName;
	cin >> firstName;

	cout << "How old is your friend?\n";
	int age = 0;
	cin >> age;
	if (age <= 0 || age > 110)
		printf("You're kidding!\n");

	cout << "Enter the name of another friend:\n";
	string friendName;
	cin >> friendName;

	cout << "What gender is this friend, 'm' or 'f'?\n";
	char friendGender;
	cin >> friendGender;

	string confirmedGender = "???";
	if (friendGender == 'm')
		confirmedGender = "him";
	if (friendGender == 'f')
		confirmedGender = "her";

	cout << "\n\nDear, " << firstName << "\n"
		<< "    How are you? Been upto much lately?\n"
		<< "Did you get that new job you applied for?\n"
		<< "We should meet up sometime in the future.\n\n"
		<< "Have you seen " << friendName << " lately?\n"
		<< "If you see " << friendName << ", can you get " << confirmedGender << " to call me.\n"
		<< "I heard it was your birthday recently. That makes you " << age << "years old, right?\n";
	if (age < 12)
		cout << "So next year, you are going to be " << age + 1 << ".\n";
	if (age == 17)
		cout << "Next year you will be able to vote." << "\n";
	if (age > 70)
		cout << "I hope you are enjoying your retirement.\n";
	cout << "\nRegards\n\n"
		<< "Sean\n\n";


}

