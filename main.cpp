#include "SchoolClass.h"
#include <string>
#include <vector>

int main()
{
	std::vector<std::string> days {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
	std::string className;
	std::vector<int> classTimes;
	std::vector<bool> classDays;
	int credits;
	std::string classSubject;
	std::string classBuilding;

	
	std::cout << "What class are you taking: ";
	std::cin >> className;

	for(std::string n:days)
	{
		std::string answer;
		std::cout << "Do you have class on " << n << "? (y/n)";
		std::cin >> answer;
		if(answer == "y" || answer == "Y")
		{
			classDays.push_back(true);
			std::cout << "Please enter the time it starts in military time (HHMM): ";
			classTimes.push_back(std::cin);
		}
		else
		{
			classDays.push_back(false);
			classTimes.push_back(0);
		}
	}

	std::cout << "How many credits is the class: ";
	std::cin >> classCredits;

	std::cout << "What subject is this class: ";
	std::cin >> classSubject;

	std::cout << "What building is " << className << " in: ";
	std::cin >> classBuilding;

	SchoolClass cs202(className, classTimes;, classDays, classCredits, classSubject, classBuilding);

	if(cs202.partOfMajor("Math"))
	{
		std::cout << "Part of Major (Math): True"
	}
	else
	{
		std::cout << "Part of Major (Math): False"
	}
	return 0;
}
