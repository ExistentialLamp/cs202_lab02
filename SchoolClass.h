#pragma once

class SchoolClass
{
public:
        SchoolClass(string name, vector<int> time, int days, int credits, string subject, string building);

	bool partOfMajor(string yourMajor);
        int timeUntil(Date currentTime);
	
	std::string getName();
	std::vector<int> getTime();
	std::vector<bool> getDays();
	int getCredits();
	std::string getSubject();
	std::string getBuilding();
private:
	std::string _name;
	std::vector<int> _time;
	std::vector<int> _days;
        int _credits;
	std::string _subject;
	std::string _building;
}
